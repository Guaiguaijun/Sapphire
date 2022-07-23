#ifndef _OODLE_H
#define _OODLE_H

#include <vector>
#include <windows.h>

typedef intptr_t( __stdcall *ooSharedSize )( int32_t htbits );
typedef intptr_t( __stdcall *ooStateSize )( void );
typedef void( __stdcall *ooSetWindow )( void* shared, int32_t htbits, const void* window, int32_t windowSize );
typedef void( __stdcall *ooTrain )( void* state, const void* shared, const void** trainingPacketPointers, const int32_t* trainingPacketSizes, int32_t numTrainingPackets );
typedef bool( __stdcall *ooDecode )( void* state, const void* shared, const void* enc, intptr_t encSize, void* dec, intptr_t decSize );

namespace Sapphire::Network
{
  class Oodle
  {
  private:
    std::vector< uint8_t > m_state;
    std::vector< uint8_t > m_shared;
    std::vector< uint8_t > m_window;

    int m_htbits;

    HMODULE ooNetDll;
    ooSharedSize OodleNetwork1_Shared_Size;
    ooStateSize OodleNetwork1UDP_State_Size;
    ooSetWindow OodleNetwork1_Shared_SetWindow;
    ooTrain OodleNetwork1UDP_Train;
    ooDecode OodleNetwork1UDP_Decode;

  public:
    Oodle();
    virtual ~Oodle() = default;

    void oodleInit();
    bool oodleDecode( const std::vector< uint8_t > &enc, uint32_t encSize, std::vector< uint8_t > &dec, uint32_t decSize );
  };
}

#endif // _OODLE_H