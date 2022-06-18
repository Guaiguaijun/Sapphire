#ifndef _CORE_NETWORK_PACKETS_IPCS_H
#define _CORE_NETWORK_PACKETS_IPCS_H

#include <stdint.h>

namespace Sapphire::Network::Packets
{

  ////////////////////////////////////////////////////////////////////////////////
  /// Lobby Connection IPC Codes
  /**
  * Server IPC Lobby Type Codes.
  */
  enum ServerLobbyIpcType : uint16_t
  {
    LobbyError = 0x0002,
    LobbyServiceAccountList = 0x000C,
    LobbyCharList = 0x000D,
    LobbyCharCreate = 0x000E,
    LobbyEnterWorld = 0x000F,
    LobbyServerList = 0x0015,
    LobbyRetainerList = 0x0017,

  };

  /**
  * Client IPC Lobby Type Codes.
  */
  enum ClientLobbyIpcType : uint16_t
  {
    ReqCharList = 0x0003,
    ReqEnterWorld = 0x0004,
    ClientVersionInfo = 0x0005,

    ReqCharDelete = 0x000A,
    ReqCharCreate = 0x000B,
  };

  ////////////////////////////////////////////////////////////////////////////////
  /// Zone Connection IPC Codes
  /**
  * Server IPC Zone Type Codes.
  */
  enum ServerZoneIpcType : uint16_t
  {

    // Old Definitions that need to be here to compile
    ActorFreeSpawn = 0x03C6, // updated 6.15
    ChatBanned = 0xF06B,
    InitSearchInfo = 0xF284, // updated 6.11

    // Definitions that needed to be "changed" (with an F in front) to prevent conflicts

    /////////////////////////////////////////////////

    Ping = 0x028B, // updated 6.15 testing
    Init = 0x0075, // updated 6.11a

    InitZone = 0x0184, // Updated 6.15
    PrepareZoning = 0x01D0, // Updated 6.15

    EffectResult = 0x024A, // Updated 6.15
    EffectResultBasic = 0x0365, // updated 6.15

    ActorControl = 0x0286, // Updated 6.15
    ActorControlSelf = 0x0308, // Updated 6.15
    ActorControlTarget = 0x0070, // Updated 6.15
    ActorCast = 0x0347, // Updated 6.15
    ActorMove = 0x01F1, // Updated 6.15
    ActorSetPos = 0x03C8, // Updated 6.15
    ActorGauge = 0x01FC, // Updated 6.15

    EventPlay = 0x0072, // updated 6.15
    EventPlay4 = 0x01AF, // updated 6.15
    EventPlay8 = 0x035D, // updated 6.15
    EventPlay16 = 0x0374, // updated 6.15
    EventPlay32 = 0x034F, // updated 6.15
    EventPlay64 = 0x0092, // updated 6.15
    EventPlay128 = 0x00B3, // updated 6.15
    EventPlay255 = 0x00F9, // updated 6.15
    EventStart = 0x01CB, // Updated 6.15
    EventFinish = 0x02F8, // Updated 6.15

    DirectorVars = 0x0098, // updated 6.15
    SomeDirectorUnk1 = 0xF0DB, // updated 6.11 or 0xCC, 0x122, 0x1AD, or 0x24F
    SomeDirectorUnk2 = 0xF0C1, // updated 5.18
    SomeDirectorUnk4 = 0x01D4, // Updated 6.11a 107, 171, 1b9, 1e2, 3df
    SomeDirectorUnk8 = 0xF28A, // updated 5.18
    SomeDirectorUnk16 = 0xF28C, // updated 5.18
    DirectorPopUp = 0xF3DF, // updated 5.58 hotfix
    DirectorPopUp4 = 0xF19B, // updated 5.58 hotfix
    DirectorPopUp8 = 0xF271, // updated 5.58 hotfix
    ///////// These last 3 are 0x0093, 0x00DA and 0x01CB, but don't know which is which

    ///////////////////////////////////////////////////

    PlayerSetup = 0x00CB, // Updated 6.15
    PlayerStats = 0x0366, // Updated 6.15
    PlayerSpawn = 0x02DD, // Updated 6.15
    PlayerClassInfo = 0x0362, // updated 6.15
    PlayerUpdateLook = 0x0080, // updated 6.15


    UpdateHpMpTp = 0x02E1, // Updated 6.15
    UpdateClassInfo = 0x038B, // Updated 6.15

    UpdateSearchInfo = 0x0176, // Updated 6.15
    ExamineSearchInfo = 0x01CC, // Updated 6.15

    // daily quest info -> without them sent,  login will take longer...
    DailyQuests = 0x01E5, // updated 6.15
    DailyQuestRepeatFlags = 0x0219, // updated 6.15


    Playtime = 0x016B, // Updated 6.15
    Logout = 0x0160, // updated 6.15

    CFNotify = 0x00A7, // updated 6.15
    CFMemberStatus = 0x03AF, // updated 6.15 testing
    CFDutyInfo = 0x032C, // updated 6.15
    CFPlayerInNeed = 0xF07F,
    CFPreferredRole = 0x02DE, // updated 6.15
    CFCancel = 0x0202, // updated 6.15
    SocialRequestError = 0xF0AD,

    CFRegistered = 0xF0A9, // updated 6.08
    SocialRequestResponse = 0x0350, // updated 6.15
    SocialMessage = 0x03E5, // updated 6.15
    SocialMessage2 = 0x01DB, // updated 6.15
    CancelAllianceForming = 0xF0C6, // updated 4.2

    LogMessage = 0x007E, // updated 6.15

    Chat = 0x01EC, // updated 6.15
    PartyChat = 0x0065,

    WorldVisitList = 0xF0FE, // added 4.5

    SocialList = 0x022C, // updated 6.15

    ExamineSearchComment = 0x0108, // updated 6.15

    ServerNoticeShort = 0x010F, // updated 6.15
    ServerNotice = 0x01B4, // updated 6.15
    SystemLogMessage = 0x0107, // updated 6.15
    SetOnlineStatus = 0x00A2, // updated 6.15

    CountdownInitiate = 0x015E, // updated 6.15
    CountdownCancel = 0x029F, // updated 6.15

    PlayerAddedToBlacklist = 0x01F3, // updated 6.15
    PlayerRemovedFromBlacklist = 0x0099, // updated 6.15
    BlackList = 0x03BF, // updated 6.15

    LinkshellList = 0x0206, // updated 6.15
    CrossWorldLinkshellList = 0x0239, // updated 6.11a
    FellowshipList = 0x0095, // updated 6.11a

    MailDeleteRequest = 0xF12B, // updated 5.0

    // 12D - 137 - constant gap between 4.5x -> 5.0
    ReqMoogleMailList = 0xF138, // updated 5.0
    ReqMoogleMailLetter = 0xF139, // updated 5.0
    MailLetterNotification = 0xF13A, // updated 5.0

    MarketTaxRates = 0x01F8, // updated 5.35 hotfix

    MarketBoardSearchResult = 0x01DC, // Updated 6.15
    MarketBoardItemListingCount = 0x008B, // Updated 6.15
    MarketBoardItemListingHistory = 0x02FD, // Updated 6.15
    MarketBoardItemListing = 0x0129, // Updated 6.15
    MarketBoardPurchase = 0x022F, // updated 6.15
    ItemMarketBoardInfo = 0x0195, // Updated 6.15

    CharaFreeCompanyTag = 0xF13B, // updated 4.5
    FreeCompanyBoardMsg = 0xF276, // updated 6.11
    FreeCompanyInfo = 0x02FC, // Updated 6.15
    FreeCompanyDialog = 0x0300, // Updated 6.15
    ExamineFreeCompanyInfo = 0x0111, // updated 6.15

    FreeCompanyUpdateShortMessage = 0xF157, // added 5.0

    StatusEffectList = 0x03B9, // Updated 6.15
    EurekaStatusEffectList = 0x016A, // updated 6.15
    BossStatusEffectList = 0x0213, // updated 6.15
    Effect = 0x014C, // Updated 6.15
    AoeEffect8 = 0x00F4, // Updated 6.15
    AoeEffect16 = 0x02B0, // Updated 6.15
    AoeEffect24 = 0x02F9, // updated 6.15
    AoeEffect32 = 0x015B, // updated 6.15
    PersistantEffect = 0xF299, // updated 6.11

    GCAffiliation = 0x00FD, // updated 6.15

    NpcSpawn = 0x0331, // Updated 6.15
    NpcSpawn2 = 0x0376, // updated 6.15

    SomeCustomiseChangePacketProbably = 0xF0CD, // added 5.18

    PartyList = 0x0197, // updated 6.15
    PartyMessage = 0x0134, // updated 6.15
    HateRank = 0xF1C5, // updated 6.11
    HateList = 0xF24C, // updated 6.11
    ObjectSpawn = 0x01B7, // Updated 6.15
    ObjectDespawn = 0x038E, // updated 6.15
    SilentSetClassJob = 0xF18E, // updated 5.0 - seems to be the case, not sure if it's actually used for anything
    ActorOwner = 0xF312, // updated 6.11
    PlayerStateFlags = 0x03B6, // updated 6.15

    CharaVisualEffect = 0x0290, // updated 6.15

    InstanceDecorAnimation = 0x033A, // updated 6.15

    ModelEquip = 0x0193, // updated 6.15
    Examine = 0x0194, // updated 6.15
    CharaNameReq = 0x00EE, // updated 6.15

    // nb: see #565 on github
    UpdateRetainerItemSalePrice = 0xF19F, // updated 5.0
    RetainerSaleHistory = 0xF320, // updated 6.11
    RetainerInformation = 0x01B5, // Updated 6.15

    SetLevelSync = 0xF186, // not updated for 4.4, not sure what it is anymore

    ItemInfo = 0x0359, // updated 6.15
    ContainerInfo = 0x0102, // updated 6.15
    InventoryTransactionFinish = 0x027F, // updated 6.15
    InventoryTransaction = 0x034B, // updated 6.15
    CurrencyCrystalInfo = 0x0222,// updated 6.15

    InventoryActionAck = 0x0232, // Updated 6.15
    UpdateInventorySlot = 0x0236, // Updated 6.15

    HuntingLogEntry = 0x0337, // updated 6.15

    EventContinue = 0x0364, // updated 6.15

    EventLinkshell = 0x1169,

    QuestActiveList = 0x031F, // updated 6.15
    QuestUpdate = 0x02AC, // updated 6.15
    QuestCompleteList = 0x030F, // updated 6.15

    QuestFinish = 0x027E, // updated 6.15
    MSQTrackerComplete = 0x00EC, // updated 6.15
    MSQTrackerProgress = 0xF1CD, // updated 4.5 ? this actually looks like the two opcodes have been combined, see #474

    QuestMessage = 0xF220, // updated 5.58 hotfix

    QuestTracker = 0x013F, // updated 6.15

    Mount = 0x0218, // updated 6.15

    CFAvailableContents = 0xF1FD, // updated 4.2

    WeatherChange = 0x006C, // updated 6.15
    PlayerTitleList = 0x02F2, // updated 6.15
    Discovery = 0x0349, // updated 6.15

    EorzeaTimeOffset = 0x008C, // updated 6.15

    EquipDisplayFlags = 0x00B8, // updated 6.15

    MiniCactpotInit = 0x03DC, // updated 6.11a
    ShopMessage = 0x0287, // updated 5.58 hotfix
    LootMessage = 0x0126, // updated 6.15
    ResultDialog = 0x0094, // Updated 6.15
    DesynthResult = 0x030D, // Updated 6.11a

    LandSetInitialize = 0x017A, // updated 6.15
    LandUpdate = 0x0328, // updated 6.15
    YardObjectSpawn = 0x0122, // updated 6.15
    HousingIndoorInitialize = 0x011F, // updated 6.15
    LandPriceUpdate = 0x01EA, // updated 6.15
    LandInfoSign = 0x0319, // updated 6.15
    LandRename = 0x03B5, // updated 6.15
    HousingEstateGreeting = 0x0120, // updated 6.15
    HousingUpdateLandFlagsSlot = 0x033C, // updated 6.15
    HousingLandFlags = 0x0372, // updated 6.15
    HousingShowEstateGuestAccess = 0x0397, // updated 6.15

    HousingObjectInitialize = 0x02C1, // updated 6.15
    HousingInternalObjectSpawn = 0x01DD, // updated 6.15

    HousingWardInfo = 0x0382, // updated 6.15
    HousingObjectMove = 0x0358, // updated 6.15
    HousingObjectDye = 0x031A, // updated 6.15

    SharedEstateSettingsResponse = 0x0084, // updated 6.15

    LandUpdateHouseName = 0x0156, // updated 6.15
    LandSetMap = 0x00F3, // updated 6.15

    CeremonySetActorAppearance = 0x02D3, // updated 6.15

    //////////////////////////////////////////////////

    DuelChallenge = 0xF277, // 4.2; this is responsible for opening the ui
    PerformNote = 0x03AA, // updated 6.11

    DutyGauge = 0xF08B, // updated 6.08 - this opcode seems to be wrong, LandSetMap duplicate



    MapUpdate = 0x01FD, // updated 6.11
    MapUpdate4 = 0x0248, // updated 6.11
    MapUpdate8 = 0x01F2, // updated 6.11
    MapUpdate16 = 0x02F6, // updated 6.11
    MapUpdate32 = 0x03C3, // updated 6.11
    MapUpdate64 = 0x0162, // updated 6.11
    MapUpdate128 = 0x0153, // updated 6.11




    AirshipTimers = 0x0356, // updated 6.11a
    AirshipStatus = 0x01B3, // updated 6.11a
    AirshipStatusList = 0x03A1, // updated 6.11a
    AirshipExplorationResult = 0x0188, // updated 6.11a

    SubmarineTimers = 0x0237, // updated 6.15
    SubmarineProgressionStatus = 0x01BC, // updated 6.11a
    SubmarineStatusList = 0x03AC, // updated 6.11a
    SubmarineExplorationResult = 0x01B1, // updated 6.11a

    /// Doman Mahjong //////////////////////////////////////
    MahjongOpenGui = 0xF2A4, // only available in mahjong instance
    MahjongNextRound = 0xF2BD, // initial hands(baipai), # of riichi(wat), winds, honba, score and stuff
    MahjongPlayerAction = 0xF2BE, // tsumo(as in drawing a tile) called chi/pon/kan/riichi
    MahjongEndRoundTsumo = 0xF2BF, // called tsumo
    MahjongEndRoundRon = 0xF2C0, // called ron or double ron (waiting for action must be flagged from discard packet to call)
    MahjongTileDiscard = 0xF2C1, // giri (discarding a tile.) chi(1)/pon(2)/kan(4)/ron(8) flags etc..
    MahjongPlayersInfo = 0xF2C2, // actor id, name, rating and stuff..
    // 2C3 and 2C4 are currently unknown
    MahjongEndRoundDraw = 0xF2C5, // self explanatory
    MahjongEndGame = 0x9999, // finished oorasu(all-last) round; shows a result screen. Changed to 9999 since a 6.11 packet uses the opcode value in 6.08


  };

  /**
  * Client IPC Zone Type Codes.
  */
  enum ClientZoneIpcType : uint16_t
  {
    PingHandler = 0x0218, // updated 6.15
    InitHandler = 0x0072, // updated 6.15
    FinishLoadingHandler = 0x0256, // updated 6.15
    SocialListHandler = 0x02EE, // updated 6.15 testing
    BlackListHandler = 0x033F, // updated 6.15 testing
    LinkshellListHandler = 0xF39D, // updated 6.11
    MarketBoardSearch = 0x0183, // updated 6.11a

    LogoutHandler = 0x021B, // updated 6.15
    CancelLogout = 0x0111, // updated 6.15

    UpdatePositionHandler = 0x0157, // updated 6.15
    ClientTrigger = 0x02E7, // updated 6.15
    ChatHandler = 0x010A, // updated 6.15
    SetSearchInfoHandler = 0x0084, // updated 6.15
    MarketBoardPurchaseHandler = 0x008B, // updated 6.15
    InventoryModifyHandler = 0x0362, // updated 6.15 (Base offset: 0x0369)
    UpdatePositionInstance = 0x0108, // updated 6.15
    PlaceFieldMarkerPreset = 0x03AC, // Updated 6.15 testing
    PlaceFieldMarker = 0x02FE, // Updated 6.15 testing

    GMCommand1 = 0x01C4, // updated 6.15
    GMCommand2 = 0x0138, // updated 6.15

    CFCommenceHandler = 0xF07B, // updated 6.11
    CFCancelHandler = 0xF07B, // updated 6.11
    CFRegisterDuty = 0xF2B2, // updated 6.11
    CFRegisterRoulette = 0xF517, // updated 6.11
    CFDutyInfoHandler = 0xF078, // updated 4.2

    PlayTimeHandler = 0x035F, // updated 6.15

    SocialReqSendHandler = 0x015E, // updated 6.15
    SocialResponseHandler = 0x0153, // updated 6.15
    CreateCrossWorldLS = 0xF35D, // updated 5.58 hotfix

    PartyChatHandler = 0x0065, // updated 6.15
    PartySetLeaderHandler = 0x02F5, // updated 6.15
    LeavePartyHandler = 0x0385, // updated 6.15
    KickPartyMemberHandler = 0x00DE, // updated 6.15
    DisbandPartyHandler = 0x0286, // updated 6.15

    ReqSearchInfoHandler = 0x03E1, // updated 6.11a
    ReqExamineSearchCommentHandler = 0xF0E7, // updated 5.0

    ReqRemovePlayerFromBlacklist = 0xF0B4, // updated 5.58 hotfix
    PlayerSearchHandler = 0x0144, // updated 6.15

    MarketBoardRequestItemListingInfo = 0xF0F4, // updated 5.58 hotfix
    MarketBoardRequestItemListings = 0xF122, // updated 5.58 hotfix

    ReqExamineFcInfo = 0xF37B, // updated 5.58 hotfix
    FcInfoReqHandler = 0xF3D4, // updated 5.58 hotfix
    FreeCompanyUpdateShortMessageHandler = 0xF123, // added 5.0

    ReqMarketWishList = 0xF0C3, // updated 5.58 hotfix

    ReqJoinNoviceNetwork = 0xF129, // updated 4.2

    ReqCountdownInitiate = 0x0371, // updated 6.15
    ReqCountdownCancel = 0x0144, // updated 6.11a

    ZoneLineHandler = 0x0076, // updated 6.15
    DiscoveryHandler = 0x00E7, // updated 6.15

    SkillHandler = 0x01D8, // updated 6.15
    AoESkillHandler = 0xF152, // updated 5.58 hotfix

    InventoryEquipRecommendedItems = 0x00C4, // updated 6.11

    ReqPlaceHousingItem = 0x0280, // updated 6.15
    BuildPresetHandler = 0x024D, // updated 6.11a

    TalkEventHandler = 0x01CF, // updated 6.15
    EmoteEventHandler = 0xF0B0, // updated 5.58 hotfix
    WithinRangeEventHandler = 0xF2B6, // updated 5.58 hotfix
    OutOfRangeEventHandler = 0xF3C5, // updated 5.58 hotfix
    EnterTeriEventHandler = 0x03AE, // updated 6.15
    ShopEventHandler = 0xF19E, // updated 5.58 hotfix

    ReturnEventHandler = 0x0176, // updated 6.15
    ReturnEvent16Handler = 0x030C, // updated 6.15
    TradeReturnEventHandler = 0x00B5, // updated 6.11a
    TradeReturnEventHandler2 = 0xF388, // updated 6.08

    EventYield2Handler = 0x0192, // updated 6.15
    EventYield16Handler = 0xF213, // updated 6.08
    EventYield32Handler = 0x0148, // updated 6.15

    LinkshellEventHandler = 0xF16B, // updated 4.5
    LinkshellEventHandler1 = 0xF16C, // updated 4.5

    ReqEquipDisplayFlagsChange = 0x0340, // updated 6.15

    LandRenameHandler = 0x00FF, // updated 6.15
    HousingUpdateHouseGreeting = 0x0392, // updated 6.15
    HousingUpdateObjectPosition = 0x02CB, // updated 6.15
    HousingEditExterior = 0x0107, // updated 6.15
    HousingEditInterior = 0x03B8, // updated 6.15

    SetSharedEstateSettings = 0x0220, // updated 6.11a

    PerformNoteHandler = 0xF243, // updated 5.58 hotfix

    WorldInteractionHandler = 0x0265, // updated 6.15
    Dive = 0x03C8, // updated 6.15
  };

  ////////////////////////////////////////////////////////////////////////////////
  /// Chat Connection IPC Codes
  /**
  * Server IPC Chat Type Codes.
  */
  enum ServerChatIpcType : uint16_t
  {
    Tell = 0x0064, // updated for sb
    PublicContentTell = 0x00FB, // added 4.5, this is used when receiving a /tell in PublicContent instances such as Eureka or Bozja
    TellErrNotFound = 0x0066,

    FreeCompanyEvent = 0x012C, // added 5.0
  };

  /**
  * Client IPC Chat Type Codes.
  */
  enum ClientChatIpcType : uint16_t
  {
    TellReq = 0x0064,
    PublicContentTellReq = 0x0326, // updated 5.35 hotfix, this is used when sending a /tell in PublicContent instances such as Eureka or Bozja
  };


}

#endif /*_CORE_NETWORK_PACKETS_IPCS_H*/