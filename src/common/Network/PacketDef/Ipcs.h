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
    ActorFreeSpawn = 0x0265, // updated 6.18
    ChatBanned = 0xF06B,
    InitSearchInfo = 0xF284, // updated 6.11

    // Definitions that needed to be "changed" (with an F in front) to prevent conflicts

    /////////////////////////////////////////////////

    Ping = 0x00B7, // updated 6.18
    Init = 0x0394, // updated 6.18

    InitZone = 0x035D, // Updated 6.18
    PrepareZoning = 0x0346, // Updated 6.18

    EffectResult = 0x0095, // Updated 6.18
    EffectResultBasic = 0x1002, // updated 6.18?

    ActorControl = 0x036E, // Updated 6.18
    ActorControlTarget = 0x01FD, // Updated 6.18
    ActorControlSelf = 0x02F0, // Updated 6.18
    ActorCast = 0x03C2, // Updated 6.18
    ActorSetPos = 0x02C4, // Updated 6.18
    ActorMove = 0x0188, // Updated 6.18
    ActorGauge = 0x01E9, // Updated 6.18

    EventPlay = 0x348, // Updated 6.18
    EventPlay4 = 0x108, // Updated 6.18
    EventPlay8 = 0x10F, // Updated 6.18
    EventPlay16 = 0x2D3, // Updated 6.18
    EventPlay32 = 0x2EF, // Updated 6.18
    EventPlay64 = 0x192, // Updated 6.18
    EventPlay128 = 0x155, // Updated 6.18
    EventPlay255 = 0x143, // Updated 6.18
    EventStart = 0x022D, // Updated 6.18
    EventFinish = 0x0069, // Updated 6.18

    DirectorVars = 0x039E, // updated 6.18
    SomeDirectorUnk1 = 0xF0DB, // updated 6.11 or 0xCC, 0x122, 0x1AD, or 0x24F
    SomeDirectorUnk2 = 0xF0C1, // updated 5.18
    SomeDirectorUnk4 = 0xF1D4, // Updated 6.11a
    SomeDirectorUnk8 = 0xF28A, // updated 5.18
    SomeDirectorUnk16 = 0xF28C, // updated 5.18
    DirectorPopUp = 0xF3DF, // updated 5.58 hotfix
    DirectorPopUp4 = 0xF19B, // updated 5.58 hotfix
    DirectorPopUp8 = 0xF271, // updated 5.58 hotfix
    ///////// These last 3 are 0x0093, 0x00DA and 0x01CB, but don't know which is which

    ///////////////////////////////////////////////////

    PlayerStats = 0x02AE, // Updated 6.18
    PlayerSetup = 0x03CF, // Updated 6.18
    PlayerSpawn = 0x01D7, // Updated 6.18
    PlayerClassInfo = 0x026B, // updated 6.18
    PlayerUpdateLook = 0x03B4, // updated 6.18


    UpdateHpMpTp = 0x020F, // Updated 6.18
    UpdateClassInfo = 0x0336, // Updated 6.18

    ExamineSearchInfo = 0x013E, // Updated 6.18
    UpdateSearchInfo = 0x00EA, // Updated 6.18

    // daily quest info -> without them sent,  login will take longer...
    DailyQuests = 0x03C8, // updated 6.18
    DailyQuestRepeatFlags = 0x00A7, // updated 6.18

    Logout = 0x00F4, // updated 6.18
    Playtime = 0x036F, // Updated 6.18

    CFNotify = 0x027F, // updated 6.18
    CFMemberStatus = 0x0323, // updated 6.18 testing
    CFDutyInfo = 0x007C, // updated 6.18
    CFPlayerInNeed = 0xF07F,
    CFPreferredRole = 0x01FC, // updated 6.18
    CFCancel = 0x015B, // updated 6.18
    SocialRequestError = 0xF0AD,

    CFRegistered = 0xF0A9, // updated 6.08
    SocialRequestResponse = 0x0361, // updated 6.18
    SocialMessage = 0x028F, // updated 6.18
    SocialMessage2 = 0x037D, // updated 6.18
    CancelAllianceForming = 0xF0C6, // updated 4.2

    LogMessage = 0x018F, // updated 6.18

    Chat = 0x0166, // updated 6.18
    PartyChat = 0x0065,

    WorldVisitList = 0xF0FE, // added 4.5

    SocialList = 0x030D, // updated 6.18

    ExamineSearchComment = 0x0114, // updated 6.18

    ServerNoticeShort = 0x00EF, // updated 6.18
    ServerNotice = 0x02D9, // updated 6.18
    SystemLogMessage = 0x0246, // updated 6.18
    SetOnlineStatus = 0x0144, // updated 6.18

    CountdownInitiate = 0x00CE, // updated 6.18
    CountdownCancel = 0x037C, // updated 6.18

    PlayerAddedToBlacklist = 0x0353, // updated 6.18
    PlayerRemovedFromBlacklist = 0x0349, // updated 6.18
    BlackList = 0x018B, // updated 6.18

    LinkshellList = 0x01C7, // updated 6.18
    CrossWorldLinkshellList = 0x039A, // updated 6.18
    FellowshipList = 0x00FA, // updated 6.18

    MailDeleteRequest = 0xF12B, // updated 5.0

    // 12D - 137 - constant gap between 4.5x -> 5.0
    ReqMoogleMailList = 0xF138, // updated 5.0
    ReqMoogleMailLetter = 0xF139, // updated 5.0
    MailLetterNotification = 0xF13A, // updated 5.0

    MarketTaxRates = 0x01F8, // updated 5.35 hotfix

    MarketBoardSearchResult = 0x0304, // Updated 6.18
    MarketBoardItemListingCount = 0x03B2, // Updated 6.18
    MarketBoardItemListingHistory = 0x0189, // Updated 6.18
    MarketBoardItemListing = 0x00E6, // Updated 6.18
    MarketBoardPurchase = 0x0103, // updated 6.18
    ItemMarketBoardInfo = 0x034C, // Updated 6.18

    CharaFreeCompanyTag = 0xF13B, // updated 4.5
    FreeCompanyBoardMsg = 0xF276, // updated 6.11
    FreeCompanyInfo = 0x02E0, // Updated 6.18
    FreeCompanyDialog = 0x0284, // Updated 6.18
    ExamineFreeCompanyInfo = 0x02A6, // updated 6.18

    FreeCompanyUpdateShortMessage = 0xF157, // added 5.0

    StatusEffectList = 0x00E9, // Updated 6.18
    EurekaStatusEffectList = 0x0396, // updated 6.18
    BossStatusEffectList = 0x00D3, // updated 6.18
    Effect = 0x00EE, // Updated 6.18
    AoeEffect8 = 0x03AA, // Updated 6.18
    AoeEffect16 = 0x02BA, // Updated 6.18
    AoeEffect24 = 0x0211, // updated 6.18
    AoeEffect32 = 0x02D5, // updated 6.18
    PersistantEffect = 0xF299, // updated 6.11

    //PlaceFieldMarker = 0x01C1, // updated 6.18
    //PlaceFieldMarkerPreset = 0x024F, // updated 6.18

    GCAffiliation = 0x00F2, // updated 6.18

    NpcSpawn = 0x0086, // Updated 6.18
    NpcSpawn2 = 0x03C0, // updated 6.18

    SomeCustomiseChangePacketProbably = 0xF0CD, // added 5.18

    PartyList = 0x025F, // updated 6.18
    PartyMessage = 0x037E, // updated 6.18
    HateRank = 0xF1C5, // updated 6.11
    HateList = 0xF24C, // updated 6.11
    ObjectSpawn = 0x0117, // Updated 6.18
    ObjectDespawn = 0x039D, // updated 6.18
    SilentSetClassJob = 0xF18E, // updated 5.0 - seems to be the case, not sure if it's actually used for anything
    ActorOwner = 0xF312, // updated 6.11
    PlayerStateFlags = 0x02EC, // updated 6.18

    CharaVisualEffect = 0x0185, // updated 6.18

    InstanceDecorAnimation = 0x02BC, // updated 6.18

    ModelEquip = 0x009C, // updated 6.18
    Examine = 0x00F9, // updated 6.18
    CharaNameReq = 0x0218, // updated 6.18

    // nb: see #565 on github
    UpdateRetainerItemSalePrice = 0xF19F, // updated 5.0
    RetainerSaleHistory = 0xF320, // updated 6.11
    RetainerInformation = 0x0182, // Updated 6.18

    SetLevelSync = 0xF186, // not updated for 4.4, not sure what it is anymore

    ItemInfo = 0x03D7, // updated 6.18
    ContainerInfo = 0x01F4, // updated 6.18
    InventoryTransactionFinish = 0x00CF, // updated 6.18
    InventoryTransaction = 0x0160, // updated 6.18
    CurrencyCrystalInfo = 0x01D4,// updated 6.18

    InventoryActionAck = 0x03B9, // Updated 6.18
    UpdateInventorySlot = 0x035C, // Updated 6.18

    HuntingLogEntry = 0x025C, // updated 6.18

    EventContinue = 0x02C1, // updated 6.18

    EventLinkshell = 0x1169,

    QuestActiveList = 0x0121, // updated 6.18
    QuestUpdate = 0x011C, // updated 6.18
    QuestCompleteList = 0x01B0, // updated 6.18

    QuestFinish = 0x019F, // updated 6.18
    MSQTrackerComplete = 0x0387, // updated 6.18
    MSQTrackerProgress = 0xF1CD, // updated 4.5 ? this actually looks like the two opcodes have been combined, see #474

    QuestMessage = 0xF220, // updated 5.58 hotfix

    QuestTracker = 0x0203, // updated 6.18

    Mount = 0x0236, // updated 6.18

    CFAvailableContents = 0xF1FD, // updated 4.2

    WeatherChange = 0x00DE, // updated 6.18
    PlayerTitleList = 0x030A, // updated 6.18
    Discovery = 0x034E, // updated 6.18

    EorzeaTimeOffset = 0x0300, // updated 6.18

    EquipDisplayFlags = 0x02F1, // updated 6.18

    MiniCactpotInit = 0x03DC, // updated 6.11a
    ShopMessage = 0x0287, // updated 5.58 hotfix
    LootMessage = 0x0142, // updated 6.18
    ResultDialog = 0x0251, // Updated 6.18
    DesynthResult = 0x030D, // Updated 6.11a

    LandSetInitialize = 0x01CB, // updated 6.18
    LandUpdate = 0x027A, // updated 6.18
    YardObjectSpawn = 0x0290, // updated 6.18
    HousingIndoorInitialize = 0x0067, // updated 6.18
    LandPriceUpdate = 0x014F, // updated 6.18
    LandInfoSign = 0x01B9, // updated 6.18
    LandRename = 0x0310, // updated 6.18
    HousingEstateGreeting = 0x02AC, // updated 6.18
    HousingUpdateLandFlagsSlot = 0x01B5, // updated 6.18
    HousingLandFlags = 0x02C0, // updated 6.18
    HousingShowEstateGuestAccess = 0x03CC, // updated 6.18

    HousingObjectInitialize = 0x035F, // updated 6.18
    HousingInternalObjectSpawn = 0x037F, // updated 6.18

    HousingWardInfo = 0x014A, // updated 6.18
    HousingObjectMove = 0x0255, // updated 6.18
    HousingObjectDye = 0x02BE, // updated 6.18

    SharedEstateSettingsResponse = 0x0345, // updated 6.18

    LandUpdateHouseName = 0x02EA, // updated 6.18
    LandSetMap = 0x0210, // updated 6.18

    CeremonySetActorAppearance = 0x0269, // updated 6.18

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




    AirshipTimers = 0x026D, // updated 6.18
    AirshipStatus = 0x01C3, // updated 6.18
    AirshipStatusList = 0x02D1, // updated 6.18
    AirshipExplorationResult = 0x031B, // updated 6.18

    SubmarineTimers = 0x0138, // updated 6.18
    SubmarineProgressionStatus = 0x01DF, // updated 6.18
    SubmarineStatusList = 0x0111, // updated 6.18
    SubmarineExplorationResult = 0x0285, // updated 6.18

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
    PingHandler = 0x00F8, // updated 6.18
    InitHandler = 0x0066, // updated 6.18
    FinishLoadingHandler = 0x0394, // updated 6.18 testing
    SocialListHandler = 0x00C6, // updated 6.18
    BlackListHandler = 0x00A0, // updated 6.18
    LinkshellListHandler = 0xF39D, // updated 6.11
    MarketBoardSearch = 0x0183, // updated 6.11a

    LogoutHandler = 0x01E7, // updated 6.18
    CancelLogout = 0x015B, // updated 6.18

    UpdatePositionHandler = 0x0375, // updated 6.18
    ClientTrigger = 0x02AB, // updated 6.18
    ChatHandler = 0x00A1, // updated 6.18
    SetSearchInfoHandler = 0x022F, // updated 6.18
    MarketBoardPurchaseHandler = 0x0361, // updated 6.18
    InventoryModifyHandler = 0x0224, // updated 6.18 (Base offset: 0x022B)
    UpdatePositionInstance = 0x0355, // updated 6.18
    PlaceFieldMarker = 0x01C1, // updated 6.18 testing
    PlaceFieldMarkerPreset = 0x024F, // updated 6.18 testing

    GMCommand1 = 0x01CC, // updated 6.18
    GMCommand2 = 0x01C8, // updated 6.18

    CFCommenceHandler = 0xF07B, // updated 6.11
    CFCancelHandler = 0xF07B, // updated 6.11
    CFRegisterDuty = 0xF2B2, // updated 6.11
    CFRegisterRoulette = 0xF517, // updated 6.11
    CFDutyInfoHandler = 0xF078, // updated 4.2

    PlayTimeHandler = 0x03E7, // updated 6.18

    SocialReqSendHandler = 0x0212, // updated 6.18
    SocialResponseHandler = 0x02ED, // updated 6.18
    CreateCrossWorldLS = 0xF35D, // updated 5.58 hotfix

    PartyChatHandler = 0x0065, // updated 6.18
    PartySetLeaderHandler = 0x021E, // updated 6.18
    LeavePartyHandler = 0x0389, // updated 6.18
    KickPartyMemberHandler = 0x036B, // updated 6.18
    DisbandPartyHandler = 0x00FA, // updated 6.18

    ReqSearchInfoHandler = 0x03E1, // updated 6.11a
    ReqExamineSearchCommentHandler = 0xF0E7, // updated 5.0

    ReqRemovePlayerFromBlacklist = 0xF0B4, // updated 5.58 hotfix
    PlayerSearchHandler = 0x01D1, // updated 6.18

    MarketBoardRequestItemListingInfo = 0xF0F4, // updated 5.58 hotfix
    MarketBoardRequestItemListings = 0xF122, // updated 5.58 hotfix

    ReqExamineFcInfo = 0xF37B, // updated 5.58 hotfix
    FcInfoReqHandler = 0xF3D4, // updated 5.58 hotfix
    FreeCompanyUpdateShortMessageHandler = 0xF123, // added 5.0

    ReqMarketWishList = 0xF0C3, // updated 5.58 hotfix

    ReqJoinNoviceNetwork = 0xF129, // updated 4.2

    ReqCountdownInitiate = 0x00E6, // updated 6.18
    ReqCountdownCancel = 0x0144, // updated 6.11a

    ZoneLineHandler = 0x0386, // updated 6.18
    DiscoveryHandler = 0x0164, // updated 6.18

    SkillHandler = 0x0344, // updated 6.18
    AoESkillHandler = 0xF152, // updated 5.58 hotfix

    InventoryEquipRecommendedItems = 0x00C4, // updated 6.11

    ReqPlaceHousingItem = 0x0232, // updated 6.18
    BuildPresetHandler = 0x024D, // updated 6.11a

    TalkEventHandler = 0x025D, // updated 6.18
    EmoteEventHandler = 0xF0B0, // updated 5.58 hotfix
    WithinRangeEventHandler = 0xF2B6, // updated 5.58 hotfix
    OutOfRangeEventHandler = 0xF3C5, // updated 5.58 hotfix
    EnterTeriEventHandler = 0x03AE, // updated 6.15
    ShopEventHandler = 0xF19E, // updated 5.58 hotfix

    ReturnEventHandler = 0x020F, // updated 6.18
    ReturnEvent16Handler = 0x01F2, // updated 6.18
    TradeReturnEventHandler = 0x00B5, // updated 6.11a
    TradeReturnEventHandler2 = 0xF388, // updated 6.08

    EventYield2Handler = 0x009E, // updated 6.18
    EventYield16Handler = 0xF33C, // updated 6.11
    EventYield32Handler = 0x016B, // updated 6.18

    LinkshellEventHandler = 0xF16B, // updated 4.5
    LinkshellEventHandler1 = 0xF16C, // updated 4.5

    ReqEquipDisplayFlagsChange = 0x013D, // updated 6.18

    LandRenameHandler = 0x03DB, // updated 6.18
    HousingUpdateHouseGreeting = 0x039B, // updated 6.18
    HousingUpdateObjectPosition = 0x02B0, // updated 6.18
    HousingEditExterior = 0x0267, // updated 6.18
    HousingEditInterior = 0x0095, // updated 6.18

    SetSharedEstateSettings = 0x0220, // updated 6.11a

    PerformNoteHandler = 0xF243, // updated 5.58 hotfix

    WorldInteractionHandler = 0x01FB, // updated 6.18
    Dive = 0x02C4, // updated 6.18
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