#ifndef SAPPHIRE_EFFECTBUILDER_H
#define SAPPHIRE_EFFECTBUILDER_H

#include <ForwardsZone.h>
#include <Common.h>

namespace Sapphire::World::Action
{
  class EffectBuilder
  {
  public:
    EffectBuilder( Entity::CharaPtr source, uint32_t actionId, uint16_t sequence );

    void heal( Entity::CharaPtr& effectTarget, Entity::CharaPtr& healingTarget, uint32_t amount,
               Common::ActionHitSeverityType severity = Common::ActionHitSeverityType::NormalHeal,
               Common::ActionEffectResultFlag flag = Common::ActionEffectResultFlag::None, uint64_t resultDelayMs = 600 );

    void restoreMP( Entity::CharaPtr& effectTarget, Entity::CharaPtr& restoringTarget, uint32_t amount,
                    Common::ActionEffectResultFlag flag = Common::ActionEffectResultFlag::None, uint64_t resultDelayMs = 600 );

    void damage( Entity::CharaPtr& effectTarget, Entity::CharaPtr& damagingTarget, uint32_t amount,
                 Common::ActionHitSeverityType severity = Common::ActionHitSeverityType::NormalDamage,
                 Common::ActionEffectResultFlag flag = Common::ActionEffectResultFlag::None, uint64_t resultDelayMs = 600 );
     
    void startCombo( Entity::CharaPtr& target, uint16_t actionId );

    void comboSucceed( Entity::CharaPtr& target );

    void applyStatusEffect( Entity::CharaPtr& target, Entity::CharaPtr& source, uint16_t statusId, uint32_t duration, uint16_t param, uint64_t resultDelayMs = 500 );
    void applyStatusEffect( Entity::CharaPtr& target, Entity::CharaPtr& source, StatusEffect::StatusEffectPtr pStatusEffect, uint64_t resultDelayMs = 500 );

    void statusNoEffect( Entity::CharaPtr& target, uint16_t statusId );

    void buildAndSendPackets( float animationLock );

  private:
    void moveToResultList( Entity::CharaPtr& chara, EffectResultPtr result );

    std::shared_ptr< Sapphire::Network::Packets::FFXIVPacketBase > buildNextEffectPacket( uint32_t globalSequence, float animationLock );

  private:
    uint32_t m_actionId;
    uint16_t m_sequence;

    Entity::CharaPtr m_sourceChara;
    std::unordered_map< uint32_t, std::shared_ptr< std::vector< EffectResultPtr > > > m_resolvedEffects;
  };

}

#endif //SAPPHIRE_EFFECTBUILDER_H
