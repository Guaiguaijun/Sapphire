#include "Oodle.h"

#include <Logging/Logger.h>

using namespace Sapphire;

Network::Oodle::Oodle() :
  m_htbits(19)
{
  ooNetDll = LoadLibraryW( L"oo2net_9_win64.dll" );
  if( ooNetDll == 0 )
    throw std::runtime_error( "Required file oo2net_9_win64.dll is missing. It should be placed in the project's root folder before building." );
    
  OodleNetwork1_Shared_Size = ( ooSharedSize ) GetProcAddress( ooNetDll, "OodleNetwork1_Shared_Size" );
  OodleNetwork1UDP_State_Size = ( ooStateSize ) GetProcAddress( ooNetDll, "OodleNetwork1UDP_State_Size" );
  OodleNetwork1_Shared_SetWindow = ( ooSetWindow ) GetProcAddress( ooNetDll, "OodleNetwork1_Shared_SetWindow" );
  OodleNetwork1UDP_Train = ( ooTrain ) GetProcAddress( ooNetDll, "OodleNetwork1UDP_Train" );
  OodleNetwork1UDP_Decode = ( ooDecode ) GetProcAddress( ooNetDll, "OodleNetwork1UDP_Decode" );

  auto stateSize = OodleNetwork1UDP_State_Size();
  auto sharedSize = OodleNetwork1_Shared_Size( m_htbits );

  m_state = std::vector< uint8_t >( stateSize, 0 );
  m_shared = std::vector< uint8_t >( sharedSize, 0 );
  m_window = std::vector< uint8_t >( 0x8000, 0 );

  oodleInit();
}

void Network::Oodle::oodleInit()
{
  OodleNetwork1_Shared_SetWindow( &m_shared[0], m_htbits, &m_window[0], (int) m_window.size() );
  OodleNetwork1UDP_Train( &m_state[0], &m_shared[0], nullptr, nullptr, 0 );
}

bool Network::Oodle::oodleDecode( const std::vector< uint8_t > &enc, uint32_t encSize, std::vector< uint8_t > &dec, uint32_t decSize )
{
  bool oodleResult = OodleNetwork1UDP_Decode( &m_state[0], &m_shared[0], &enc[0], encSize, &dec[0], decSize );
  FreeLibrary( ooNetDll );
  return oodleResult;
}