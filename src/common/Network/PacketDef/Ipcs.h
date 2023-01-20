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
    ActorFreeSpawn = 0x28a, // updated 6.30h
    ChatBanned = 0xF06B,
    InitSearchInfo = 0xF284, // updated 6.11

    // Definitions that needed to be "changed" (with an F in front) to prevent conflicts

    /////////////////////////////////////////////////

    Ping = 0x00DA, // updated 6.30h
    Init = 0x01E4, // updated 6.30h

    InitZone = 0x222, // updated 6.30h
    PrepareZoning = 0x195, // updated 6.30h

    EffectResult = 0x22c, // updated 6.30h
    EffectResultBasic = 0x384, // updated 6.30h

    ActorControl = 0x179, // updated 6.30h
    ActorControlTarget = 0x220, // updated 6.30h
    ActorControlSelf = 0x26f, // updated 6.30h
    ActorCast = 0x29c, // updated 6.30h
    ActorSetPos = 0x18c, // updated 6.30h
    ActorMove = 0x1db, // updated 6.30h
    ActorGauge = 0x171, // updated 6.30h

    EventPlay = 0x2de, // updated 6.30h
    EventPlay4 = 0x317, // updated 6.30h
    EventPlay8 = 0x1cd, // updated 6.30h
    EventPlay16 = 0x1fe, // updated 6.30h
    EventPlay32 = 0x2fc, // updated 6.30h
    EventPlay64 = 0x7c, // updated 6.30h
    EventPlay128 = 0x337, // updated 6.30h
    EventPlay255 = 0x1d2, // updated 6.30h
    EventStart = 0x1a1, // updated 6.30h
    EventFinish = 0x194, // updated 6.30h

    DirectorVars = 0x27b, // updated 6.30h
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

    PlayerStats = 0x1b8, // updated 6.30h
    PlayerSetup = 0x2b3, // updated 6.30h
    PlayerSpawn = 0x007f, // updated 6.30h
    PlayerClassInfo = 0x2a6, // updated 6.30h
    PlayerUpdateLook = 0x94, // updated 6.30h

    UpdateHpMpTp = 0x383, // updated 6.30h
    UpdateClassInfo = 0x2d9, // updated 6.30h

    ExamineSearchInfo = 0x30e, // updated 6.30h
    UpdateSearchInfo = 0x34a, // updated 6.30h

    // daily quest info -> without them sent,  login will take longer...
    DailyQuests = 0x17e, // updated 6.30h
    DailyQuestRepeatFlags = 0x3cc, // updated 6.30h

    Logout = 0x1d0, // updated 6.30h
    Playtime = 0x326, // updated 6.30h

    CFCancel = 0x102, // updated 6.30h
    CFDutyInfo = 0x1f8, // updated 6.30h
    CFNotify = 0x38b, // updated 6.30h
    CFPreferredRole = 0xde, // updated 6.30h
    CFMemberStatus = 0x037F, // updated 6.18 hotfix testing
    CFPlayerInNeed = 0xF07F,

    SocialRequestError = 0xF0AD,

    CFRegistered = 0xF0A9, // updated 6.08
    SocialRequestResponse = 0x95, // updated 6.30h
    SocialMessage = 0x0089, // updated 6.18 hotfix
    SocialMessage2 = 0x036D, // updated 6.18 hotfix
    CancelAllianceForming = 0xF0C6, // updated 4.2

    LogMessage = 0x343, // updated 6.30h

    Chat = 0x10a, // updated 6.30h
    PartyChat = 0x0065,

    WorldVisitList = 0xF0FE, // added 4.5

    SocialList = 0xf1f1, // updated 6.30h (may be wrong)

    ExamineSearchComment = 0x30c, // updated 6.30h

    ServerNoticeShort = 0x03BC, // updated 6.18 hotfix
    ServerNotice = 0xF236, // updated 6.18 hotfix
    SystemLogMessage = 0x9a, // updated 6.30h
    SetOnlineStatus = 0x324, // updated 6.30h

    CountdownInitiate = 0x3b1, // updated 6.30h
    CountdownCancel = 0xb6, // updated 6.30h

    PlayerAddedToBlacklist = 0x399, // updated 6.30h
    PlayerRemovedFromBlacklist = 0x1dc, // updated 6.30h
    BlackList = 0xF16B, // updated 6.30h (may be wrong)

    LinkshellList = 0x1e2, // updated 6.30h
    CrossWorldLinkshellList = 0x01A1, // updated 6.18 hotfix
    FellowshipList = 0x1ba, // updated 6.30h

    MailDeleteRequest = 0xF12B, // updated 5.0

    // 12D - 137 - constant gap between 4.5x -> 5.0
    ReqMoogleMailList = 0xF138, // updated 5.0
    ReqMoogleMailLetter = 0xF139, // updated 5.0
    MailLetterNotification = 0xF13A, // updated 5.0

    MarketTaxRates = 0x01F8, // updated 5.35 hotfix

    MarketBoardSearchResult = 0x21e, // updated 6.30h
    MarketBoardItemListingCount = 0xaa, // updated 6.30h
    MarketBoardItemListingHistory = 0xa8, // updated 6.30h
    MarketBoardItemListing = 0x2f1, // updated 6.30h
    MarketBoardPurchase = 0x32f, // updated 6.30h
    ItemMarketBoardInfo = 0xdf, // updated 6.30h
    
    CharaFreeCompanyTag = 0xF13B, // updated 4.5
    FreeCompanyBoardMsg = 0xF276, // updated 6.11
    FreeCompanyInfo = 0x1dd, // updated 6.30h
    FreeCompanyDialog = 0xe6, // updated 6.30h
    ExamineFreeCompanyInfo = 0xcd, // updated 6.30h

    FreeCompanyUpdateShortMessage = 0xF157, // added 5.0

    StatusEffectList = 0x2bc, // updated 6.30h
    EurekaStatusEffectList = 0x353, // updated 6.30h
    BossStatusEffectList = 0x1ee, // updated 6.30h
    StatusEffectList2 = 0x164, // updated 6.30h
    StatusEffectList3 = 0x24c, // updated 6.30h
    Effect = 0x1c9, // updated 6.30h
    AoeEffect8 = 0x24a, // updated 6.30h
    AoeEffect16 = 0x38a, // updated 6.30h
    AoeEffect24 = 0xc8, // updated 6.30h
    AoeEffect32 = 0x32b, // updated 6.30h
    PersistantEffect = 0x24c, // updated 6.30h

    GCAffiliation = 0x372, // updated 6.30h

    NpcSpawn = 0x39e, // updated 6.30h
    NpcSpawn2 = 0x2e5, // updated 6.30h

    SomeCustomiseChangePacketProbably = 0xF0CD, // added 5.18

    PartyList = 0x1f6, // updated 6.30h
    PartyMessage = 0x1e8, // updated 6.30h
    HateRank = 0x134, // updated 6.30h
    HateList = 0x2f9, // updated 6.30h
    ObjectSpawn = 0x31b, // updated 6.30h
    ObjectDespawn = 0x1b3, // updated 6.30h
    SilentSetClassJob = 0xF18E, // updated 5.0 - seems to be the case, not sure if it's actually used for anything
    ActorOwner = 0x2b3, // updated 6.30h
    PlayerStateFlags = 0xd5, // updated 6.30h

    CharaVisualEffect = 0x1e9, // updated 6.30h

    InstanceDecorAnimation = 0x00CF, // updated 6.18 hotfix

    ModelEquip = 0x286, // updated 6.30h
    Examine = 0x1BC, // updated 6.30h
    CharaNameReq = 0x35c, // updated 6.30h

    // nb: see #565 on github
    UpdateRetainerItemSalePrice = 0xF19F, // updated 5.0
    RetainerSaleHistory = 0x14a, // updated 6.30h
    RetainerInformation = 0x39c, // Updated 6.30h

    SetLevelSync = 0xF186, // not updated for 4.4, not sure what it is anymore

    ItemInfo = 0x302, // updated 6.30h
    ContainerInfo = 0x255, // updated 6.30h
    InventoryTransactionFinish = 0x1be, // updated 6.30h
    InventoryTransaction = 0x77, // updated 6.30h
    CurrencyCrystalInfo = 0x2bb, // updated 6.30h

    InventoryActionAck = 0x1eb, // updated 6.30h
    UpdateInventorySlot = 0x10e, // updated 6.30h

    HuntingLogEntry = 0x2ca, // updated 6.30h

    EventContinue = 0x240, // updated 6.30h or 0x3a2 or 0x3c3 or 0x270 or 0x391 or 0x159 or 0x2da or 0x3bb

    EventLinkshell = 0x1169,

    QuestActiveList = 0x140, // updated 6.30h
    QuestUpdate = 0x382, // updated 6.30h
    QuestCompleteList = 0x39a, // updated 6.30h

    QuestFinish = 0x237, // updated 6.30h
    MSQTrackerComplete = 0xf0, // updated 6.30h
    MSQTrackerProgress = 0xF1CD, // updated 4.5 ? this actually looks like the two opcodes have been combined, see #474

    QuestMessage = 0xF220, // updated 5.58 hotfix

    QuestTracker = 0x2d5, // updated 6.30h

    Mount = 0x322, // updated 6.30h

    CFAvailableContents = 0xF1FD, // updated 4.2

    WeatherChange = 0xc7, // updated 6.30h
    PlayerTitleList = 0x1ab, // updated 6.30h
    Discovery = 0x3ca, // updated 6.30h

    EorzeaTimeOffset = 0x96, // updated 6.30h

    EquipDisplayFlags = 0x303, // updated 6.30h

    MiniCactpotInit = 0xF3DC, // updated 6.11a
    ShopMessage = 0xF287, // updated 5.58 hotfix
    LootMessage = 0x2c0, // updated 6.30h
    ResultDialog = 0x3bb, // updated 6.30h
    DesynthResult = 0x270, // updated 6.30h

    LandSetInitialize = 0x1fc, // updated 6.30h
    LandUpdate = 0x30d, // updated 6.30h
    LandAvailability = 0x0243, // updated 6.18 hotfix
    YardObjectSpawn = 0x30b, // updated 6.30h
    HousingIndoorInitialize = 0xa3, // updated 6.30h
    LandPriceUpdate = 0x3d2, // updated 6.30h
    LandInfoSign = 0xf9, // updated 6.30h
    LandRename = 0x16d, // updated 6.30h
    HousingEstateGreeting = 0x193, // updated 6.30h
    HousingUpdateLandFlagsSlot = 0x1ff, // updated 6.30h
    HousingLandFlags = 0x1f7, // updated 6.30h
    HousingShowEstateGuestAccess = 0x71, // updated 6.30h

    HousingObjectInitialize = 0x11d, // updated 6.30h
    HousingInternalObjectSpawn = 0x378, // updated 6.30h

    HousingWardInfo = 0xe4, // updated 6.30h
    HousingObjectMove = 0x2b9, // updated 6.30h
    HousingObjectDye = 0x27e, // updated 6.30h

    SharedEstateSettingsResponse = 0x144, // updated 6.30h

    LandUpdateHouseName = 0x22b, // updated 6.30h
    LandSetMap = 0xbc, // updated 6.30h

    CeremonySetActorAppearance = 0xba, // updated 6.30h

    //////////////////////////////////////////////////

    DuelChallenge = 0xF277, // 4.2; this is responsible for opening the ui
    PerformNote = 0xe9, // updated 6.30h

    DutyGauge = 0xF08B, // updated 6.08 - this opcode seems to be wrong, LandSetMap duplicate

    MapUpdate = 0x1b7, // updated 6.30h
    MapUpdate4 = 0x1c4, // updated 6.30h
    MapUpdate8 = 0x35e, // updated 6.30h
    MapUpdate16 = 0x293, // updated 6.30h
    MapUpdate32 = 0x67, // updated 6.30h
    MapUpdate64 = 0x1ad, // updated 6.30h
    MapUpdate128 = 0x323, // updated 6.30h

    AirshipTimers = 0x26b, // updated 6.30h
    AirshipStatus = 0x142, // updated 6.30h
    AirshipStatusList = 0x70, // updated 6.30h
    AirshipExplorationResult = 0x34f, // updated 6.30h

    SubmarineTimers = 0x103, // updated 6.30h
    SubmarineProgressionStatus = 0x148, // updated 6.30h
    SubmarineStatusList = 0x232, // updated 6.30h
    SubmarineExplorationResult = 0x1a8, // updated 6.30h
    
    EnvironmentControl = 0x2ce, // updated 6.30h
    IslandWorkshopSupplyDemand = 0x39b, // updated 6.30h

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
    PingHandler = 0x011B, // updated 6.30h
    InitHandler = 0x01F0, // updated 6.30h
    FinishLoadingHandler = 0x01E4, // updated 6.30h
    SocialListHandler = 0x0145, // updated 6.30h
    BlackListHandler = 0xF235, // updated 6.30h (May Be Wrong)
    LinkshellListHandler = 0xF39D, // updated 6.11
    MarketBoardSearch = 0xF183, // updated 6.11a

    LogoutHandler = 0x01C7, // updated 6.30h
    CancelLogout = 0x0102, // updated 6.30h

    UpdatePositionHandler = 0x10F, // Updated for 6.30h
    ClientTrigger = 0x0174, // updated 6.30h
    ChatHandler = 0x02C6, // Updated 6.30h
    SetSearchInfoHandler = 0x0212, // Updated 6.18 hotfix
    MarketBoardPurchaseHandler = 0x00EB, // Updated 6.18 hotfix
    InventoryModifyHandler = 0x0095, // Updated 6.18 hotfix (Base offset: 0x009C)
    UpdatePositionInstance = 0x00DB, // Updated for 6.30h
    PlaceFieldMarker = 0x38e, // updated 6.30h
    PlaceFieldMarkerPreset = 0x204, // updated 6.30h

    GMCommand1 = 0x0182, // updated 6.30h
    GMCommand2 = 0x02F8, // updated 6.18 hotfix

    CFCommenceHandler = 0xF07B, // updated 6.11
    CFCancelHandler = 0xF07B, // updated 6.11
    CFRegisterDuty = 0xF2B2, // updated 6.11
    CFRegisterRoulette = 0xF517, // updated 6.11
    CFDutyInfoHandler = 0xF078, // updated 4.2

    PlayTimeHandler = 0x0074, // updated 6.18 hotfix

    SocialReqSendHandler = 0x0337, // updated 6.18 hotfix
    SocialResponseHandler = 0x0237, // updated 6.18 hotfix
    CreateCrossWorldLS = 0xF35D, // updated 5.58 hotfix

    PartyChatHandler = 0x0065, // updated 6.18 hotfix
    PartySetLeaderHandler = 0x0274, // updated 6.18 hotfix
    LeavePartyHandler = 0x009C, // updated 6.18 hotfix
    KickPartyMemberHandler = 0x0201, // updated 6.18 hotfix
    DisbandPartyHandler = 0x02B0, // updated 6.18 hotfix

    ReqSearchInfoHandler = 0xF3E1, // updated 6.11a
    ReqExamineSearchCommentHandler = 0xF0E7, // updated 5.0

    ReqRemovePlayerFromBlacklist = 0xF0B4, // updated 5.58 hotfix
    PlayerSearchHandler = 0x03BA, // updated 6.18 hotfix

    MarketBoardRequestItemListingInfo = 0xF0F4, // updated 5.58 hotfix
    MarketBoardRequestItemListings = 0xF122, // updated 5.58 hotfix

    ReqExamineFcInfo = 0xF37B, // updated 5.58 hotfix

    FcInfoReqHandler = 0xF3D4, // updated 5.58 hotfix

    FreeCompanyUpdateShortMessageHandler = 0xF123, // added 5.0

    ReqMarketWishList = 0xF0C3, // updated 5.58 hotfix

    ReqJoinNoviceNetwork = 0xF129, // updated 4.2

    ReqCountdownInitiate = 0x0371, // updated 6.18 hotfix
    ReqCountdownCancel = 0x0112, // updated 6.18 hotfix

    ZoneLineHandler = 0x01EC, // updated 6.30h
    DiscoveryHandler = 0x0110, // updated 6.18 hotfix

    SkillHandler = 0x0249, // updated 6.30h 
    AoESkillHandler = 0xF152, // updated 5.58 hotfix

    InventoryEquipRecommendedItems = 0x018A, // updated 6.18 hotfix

    ReqPlaceHousingItem = 0x03D8, // updated 6.18 hotfix
    BuildPresetHandler = 0xF24D, // updated 6.11a

    TalkEventHandler = 0x0384, // updated 6.30h
    EmoteEventHandler = 0xF0B0, // updated 5.58 hotfix
    WithinRangeEventHandler = 0xF2B6, // updated 5.58 hotfix
    OutOfRangeEventHandler = 0xF3C5, // updated 5.58 hotfix
    EnterTeriEventHandler = 0x03AE, // updated 6.15
    ShopEventHandler = 0xF19E, // updated 5.58 hotfix

    ReturnEventHandler = 0x0383, // updated 6.30h
    ReturnEvent16Handler = 0x0093, // updated 6.18 hotfix
    TradeReturnEventHandler = 0xF0B5, // updated 6.11a
    TradeReturnEventHandler2 = 0xF388, // updated 6.08

    EventYield2Handler = 0x01BD, // updated 6.18 hotfix
    EventYield16Handler = 0xF33C, // updated 6.11
    EventYield32Handler = 0x0251, // updated 6.18 hotfix

    LinkshellEventHandler = 0xF16B, // updated 4.5
    LinkshellEventHandler1 = 0xF16C, // updated 4.5

    ReqEquipDisplayFlagsChange = 0x03BC, // updated 6.30h

    LandRenameHandler = 0x00DB, // updated 6.18 hotfix
    HousingUpdateHouseGreeting = 0x0101, // updated 6.18 hotfix
    HousingUpdateObjectPosition = 0x013D, // updated 6.18 hotfix
    HousingEditExterior = 0x02A4, // updated 6.18 hotfix
    HousingEditInterior = 0x021E, // updated 6.18 hotfix

    SetSharedEstateSettings = 0x0220, // updated 6.11a

    PerformNoteHandler = 0xF243, // updated 5.58 hotfix

    WorldInteractionHandler = 0x0096, // updated 6.18 hotfix
    Dive = 0x018C, // updated 6.30h
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