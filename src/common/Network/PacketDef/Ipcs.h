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
    ActorFreeSpawn = 0x0309, // updated 6.18 hotfix
    ChatBanned = 0xF06B,
    InitSearchInfo = 0xF284, // updated 6.11

    // Definitions that needed to be "changed" (with an F in front) to prevent conflicts

    /////////////////////////////////////////////////

    Ping = 0x03B2, // updated 6.18 hotfix
    Init = 0x0387, // updated 6.18 hotfix

    InitZone = 0x010F, // Updated 6.18 hotfix
    PrepareZoning = 0x02F7, // Updated 6.18 hotfix

    EffectResult = 0x021E, // Updated 6.18 hotfix
    EffectResultBasic = 0x1078, // updated 6.18 hotfix

    ActorControl = 0x00CB, // Updated 6.18 hotfix
    ActorControlTarget = 0x0174, // Updated 6.18 hotfix
    ActorControlSelf = 0x03CD, // Updated 6.18 hotfix
    ActorCast = 0x0077, // Updated 6.18 hotfix
    ActorSetPos = 0x0240, // Updated 6.18 hotfix
    ActorMove = 0x0227, // Updated 6.18 hotfix
    ActorGauge = 0x03A3, // Updated 6.18 hotfix

    EventPlay = 0x00B6, // Updated 6.18 hotfix
    EventPlay4 = 0x00EF, // Updated 6.18 hotfix
    EventPlay8 = 0x02BE, // Updated 6.18 hotfix
    EventPlay16 = 0x0268, // Updated 6.18 hotfix
    EventPlay32 = 0x01EC, // Updated 6.18 hotfix
    EventPlay64 = 0x02B4, // Updated 6.18 hotfix
    EventPlay128 = 0x01DA, // Updated 6.18 hotfix
    EventPlay255 = 0x035C, // Updated 6.18 hotfix
    EventStart = 0x02C3, // Updated 6.18 hotfix
    EventFinish = 0x03AA, // Updated 6.18 hotfix

    DirectorVars = 0x00A3, // updated 6.18 hotfix
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

    PlayerStats = 0x0310, // Updated 6.18 hotfix
    PlayerSetup = 0x0304, // Updated 6.18 hotfix
    PlayerSpawn = 0x020C, // Updated 6.18 hotfix
    PlayerClassInfo = 0x0084, // updated 6.18 hotfix
    PlayerUpdateLook = 0x0144, // updated 6.18 hotfix


    UpdateHpMpTp = 0x00E7, // Updated 6.18 hotfix
    UpdateClassInfo = 0x03D5, // Updated 6.18 hotfix

    ExamineSearchInfo = 0x019C, // Updated 6.18 hotfix
    UpdateSearchInfo = 0x0205, // Updated 6.18 hotfix

    // daily quest info -> without them sent,  login will take longer...
    DailyQuests = 0x029B, // updated 6.18 hotfix
    DailyQuestRepeatFlags = 0x032F, // updated 6.18 hotfix

    Logout = 0x03B1, // updated 6.18 hotfix
    Playtime = 0x01E5, // Updated 6.18 hotfix

    CFCancel = 0x028C, // updated 6.18 hotfix
    CFDutyInfo = 0x025C, // updated 6.18 hotfix
    CFNotify = 0x0147, // updated 6.18 hotfix
    CFPreferredRole = 0x037D, // updated 6.18 hotfix
    CFMemberStatus = 0x037F, // updated 6.18 hotfix testing
    CFPlayerInNeed = 0xF07F,

    SocialRequestError = 0xF0AD,

    CFRegistered = 0xF0A9, // updated 6.08
    SocialRequestResponse = 0x00EB, // updated 6.18 hotfix
    SocialMessage = 0x0089, // updated 6.18 hotfix
    SocialMessage2 = 0x036D, // updated 6.18 hotfix
    CancelAllianceForming = 0xF0C6, // updated 4.2

    LogMessage = 0x0073, // updated 6.18 hotfix

    Chat = 0x02FC, // updated 6.18 hotfix
    PartyChat = 0x0065,

    WorldVisitList = 0xF0FE, // added 4.5

    SocialList = 0x0303, // updated 6.18 hotfix

    ExamineSearchComment = 0x0372, // updated 6.18 hotfix

    ServerNoticeShort = 0x03BC, // updated 6.18 hotfix
    ServerNotice = 0x0236, // updated 6.18 hotfix
    SystemLogMessage = 0x008F, // updated 6.18 hotfix
    SetOnlineStatus = 0x036E, // updated 6.18 hotfix

    CountdownInitiate = 0x034E, // updated 6.18 hotfix
    CountdownCancel = 0x017B, // updated 6.18 hotfix

    PlayerAddedToBlacklist = 0x02E6, // updated 6.18 hotfix
    PlayerRemovedFromBlacklist = 0x0361, // updated 6.18 hotfix
    BlackList = 0x03A9, // updated 6.18 hotfix

    LinkshellList = 0x028D, // updated 6.18 hotfix
    CrossWorldLinkshellList = 0x01A1, // updated 6.18 hotfix
    FellowshipList = 0x02B0, // updated 6.18 hotfix

    MailDeleteRequest = 0xF12B, // updated 5.0

    // 12D - 137 - constant gap between 4.5x -> 5.0
    ReqMoogleMailList = 0xF138, // updated 5.0
    ReqMoogleMailLetter = 0xF139, // updated 5.0
    MailLetterNotification = 0xF13A, // updated 5.0

    MarketTaxRates = 0x01F8, // updated 5.35 hotfix

    MarketBoardSearchResult = 0x025D, // Updated 6.18 hotfix
    MarketBoardItemListingCount = 0x033C, // Updated 6.18 hotfix
    MarketBoardItemListingHistory = 0x02ED, // Updated 6.18 hotfix
    MarketBoardItemListing = 0x0371, // Updated 6.18 hotfix
    MarketBoardPurchase = 0x010D, // updated 6.18 hotfix
    ItemMarketBoardInfo = 0x00A2, // Updated 6.18 hotfix

    CharaFreeCompanyTag = 0xF13B, // updated 4.5
    FreeCompanyBoardMsg = 0xF276, // updated 6.11
    FreeCompanyInfo = 0x011C, // Updated 6.18 hotfix
    FreeCompanyDialog = 0x0367, // Updated 6.18 hotfix
    ExamineFreeCompanyInfo = 0x0230, // updated 6.18 hotfix

    FreeCompanyUpdateShortMessage = 0xF157, // added 5.0

    StatusEffectList = 0x01D0, // Updated 6.18 hotfix
    EurekaStatusEffectList = 0x03D9, // updated 6.18 hotfix
    BossStatusEffectList = 0x0069, // updated 6.18 hotfix
    Effect = 0x0353, // Updated 6.18 hotfix
    AoeEffect8 = 0x02E0, // Updated 6.18 hotfix
    AoeEffect16 = 0x014D, // Updated 6.18 hotfix
    AoeEffect24 = 0xF065, // updated 6.18 hotfix - clashes with PartyChat
    AoeEffect32 = 0x012D, // updated 6.18 hotfix
    PersistantEffect = 0xF299, // updated 6.11

    //PlaceFieldMarker = 0x01AF, // Updated 6.18 hotfix
    //PlaceFieldMarkerPreset = 0x0314, // Updated 6.18 hotfix

    GCAffiliation = 0x03B5, // updated 6.18 hotfix

    NpcSpawn = 0x01A4, // Updated 6.18 hotfix
    NpcSpawn2 = 0x03A2, // updated 6.18 hotfix

    SomeCustomiseChangePacketProbably = 0xF0CD, // added 5.18

    PartyList = 0x0233, // updated 6.18 hotfix
    PartyMessage = 0x010B, // updated 6.18 hotfix
    HateRank = 0xF1C5, // updated 6.11
    HateList = 0xF24C, // updated 6.11
    ObjectSpawn = 0x0313, // Updated 6.18 hotfix
    ObjectDespawn = 0x039C, // updated 6.18 hotfix
    SilentSetClassJob = 0xF18E, // updated 5.0 - seems to be the case, not sure if it's actually used for anything
    ActorOwner = 0xF312, // updated 6.11
    PlayerStateFlags = 0x0312, // updated 6.18 hotfix

    CharaVisualEffect = 0x026A, // updated 6.18 hotfix

    InstanceDecorAnimation = 0x00CF, // updated 6.18 hotfix

    ModelEquip = 0x00D8, // updated 6.18 hotfix
    Examine = 0x0290, // updated 6.18 hotfix
    CharaNameReq = 0x025F, // updated 6.18 hotfix

    // nb: see #565 on github
    UpdateRetainerItemSalePrice = 0xF19F, // updated 5.0
    RetainerSaleHistory = 0xF320, // updated 6.11
    RetainerInformation = 0x0289, // Updated 6.18 hotfix

    SetLevelSync = 0xF186, // not updated for 4.4, not sure what it is anymore

    ItemInfo = 0x01A0, // updated 6.18 hotfix
    ContainerInfo = 0x0323, // updated 6.18 hotfix
    InventoryTransactionFinish = 0x0180, // updated 6.18 hotfix
    InventoryTransaction = 0x03C3, // updated 6.18 hotfix
    CurrencyCrystalInfo = 0x0140,// updated 6.18 hotfix

    InventoryActionAck = 0x013E, // Updated 6.18 hotfix
    UpdateInventorySlot = 0x02DE, // Updated 6.18 hotfix

    HuntingLogEntry = 0x0072, // updated 6.18 hotfix

    EventContinue = 0x0118, // updated 6.18 hotfix

    EventLinkshell = 0x1169,

    QuestActiveList = 0x0141, // updated 6.18 hotfix
    QuestUpdate = 0x0183, // updated 6.18 hotfix
    QuestCompleteList = 0x01EB, // updated 6.18 hotfix

    QuestFinish = 0x0394, // updated 6.18 hotfix
    MSQTrackerComplete = 0x030D, // updated 6.18 hotfix
    MSQTrackerProgress = 0xF1CD, // updated 4.5 ? this actually looks like the two opcodes have been combined, see #474

    QuestMessage = 0xF220, // updated 5.58 hotfix

    QuestTracker = 0x039E, // updated 6.18 hotfix

    Mount = 0x01CB, // updated 6.18 hotfix

    CFAvailableContents = 0xF1FD, // updated 4.2

    WeatherChange = 0x03BF, // updated 6.18 hotfix
    PlayerTitleList = 0x02E2, // updated 6.18 hotfix
    Discovery = 0x020E, // updated 6.18 hotfix

    EorzeaTimeOffset = 0x0265, // updated 6.18 hotfix

    EquipDisplayFlags = 0x0354, // updated 6.18 hotfix

    MiniCactpotInit = 0x03DC, // updated 6.11a
    ShopMessage = 0xF287, // updated 5.58 hotfix
    LootMessage = 0x02AD, // updated 6.18 hotfix
    ResultDialog = 0x0325, // Updated 6.18 hotfix
    DesynthResult = 0x03BD, // Updated 6.18 hotfix

    LandSetInitialize = 0x00B1, // updated 6.18 hotfix
    LandUpdate = 0x0329, // updated 6.18 hotfix
    LandAvailability = 0x0243, // updated 6.18 hotfix
    YardObjectSpawn = 0x0302, // updated 6.18 hotfix
    HousingIndoorInitialize = 0x02F1, // updated 6.18 hotfix
    LandPriceUpdate = 0x0338, // updated 6.18 hotfix
    LandInfoSign = 0x00AE, // updated 6.18 hotfix
    LandRename = 0x026B, // updated 6.18 hotfix
    HousingEstateGreeting = 0x03D1, // updated 6.18 hotfix
    HousingUpdateLandFlagsSlot = 0x0311, // updated 6.18 hotfix
    HousingLandFlags = 0x0305, // updated 6.18 hotfix
    HousingShowEstateGuestAccess = 0x02FA, // updated 6.18 hotfix

    HousingObjectInitialize = 0x0362, // updated 6.18 hotfix
    HousingInternalObjectSpawn = 0x00FE, // updated 6.18 hotfix

    HousingWardInfo = 0x00D3, // updated 6.18 hotfix
    HousingObjectMove = 0x02C7, // updated 6.18 hotfix
    HousingObjectDye = 0x02AC, // updated 6.18 hotfix

    SharedEstateSettingsResponse = 0x02B8, // updated 6.18 hotfix

    LandUpdateHouseName = 0x0214, // updated 6.18 hotfix
    LandSetMap = 0x0082, // updated 6.18 hotfix

    CeremonySetActorAppearance = 0x00CE, // updated 6.18 hotfix

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




    AirshipTimers = 0x02D6, // Updated 6.18 hotfix
    AirshipStatus = 0x0145, // Updated 6.18 hotfix
    AirshipStatusList = 0x0355, // Updated 6.18 hotfix
    AirshipExplorationResult = 0x024A, // Updated 6.18 hotfix

    SubmarineTimers = 0x01F0, // Updated 6.18 hotfix
    SubmarineProgressionStatus = 0x013C, // Updated 6.18 hotfix
    SubmarineStatusList = 0x010C, // Updated 6.18 hotfix
    SubmarineExplorationResult = 0x007C, // Updated 6.18 hotfix

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
    PingHandler = 0x0171, // updated 6.18 hotfix
    InitHandler = 0x02B3, // updated 6.18 hotfix
    FinishLoadingHandler = 0x0387, // updated 6.18 hotfix testing
    SocialListHandler = 0x0252, // updated 6.18 hotfix
    BlackListHandler = 0x007A, // updated 6.18 hotfix
    LinkshellListHandler = 0xF39D, // updated 6.11
    MarketBoardSearch = 0xF183, // updated 6.11a

    LogoutHandler = 0x0245, // updated 6.18 hotfix
    CancelLogout = 0x028C, // updated 6.18 hotfix

    UpdatePositionHandler = 0x02D9, // Updated 6.18 hotfix
    ClientTrigger = 0x036A, // Updated 6.18 hotfix
    ChatHandler = 0x011E, // Updated 6.18 hotfix
    SetSearchInfoHandler = 0x0212, // Updated 6.18 hotfix
    MarketBoardPurchaseHandler = 0x00EB, // Updated 6.18 hotfix
    InventoryModifyHandler = 0x0095, // Updated 6.18 hotfix (Base offset: 0x009C)
    UpdatePositionInstance = 0x0131, // Updated 6.18 hotfix
    PlaceFieldMarker = 0x01AF, // Updated 6.18 hotfix
    PlaceFieldMarkerPreset = 0x0314, // Updated 6.18 hotfix

    GMCommand1 = 0x02D8, // updated 6.18 hotfix
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

    ZoneLineHandler = 0x0222, // updated 6.18 hotfix
    DiscoveryHandler = 0x0110, // updated 6.18 hotfix

    SkillHandler = 0x0088, // updated 6.18 hotfix
    AoESkillHandler = 0xF152, // updated 5.58 hotfix

    InventoryEquipRecommendedItems = 0x018A, // updated 6.18 hotfix

    ReqPlaceHousingItem = 0x03D8, // updated 6.18 hotfix
    BuildPresetHandler = 0xF24D, // updated 6.11a

    TalkEventHandler = 0x00F0, // updated 6.18 hotfix
    EmoteEventHandler = 0xF0B0, // updated 5.58 hotfix
    WithinRangeEventHandler = 0xF2B6, // updated 5.58 hotfix
    OutOfRangeEventHandler = 0xF3C5, // updated 5.58 hotfix
    EnterTeriEventHandler = 0x03AE, // updated 6.15
    ShopEventHandler = 0xF19E, // updated 5.58 hotfix

    ReturnEventHandler = 0x00E7, // updated 6.18 hotfix
    ReturnEvent16Handler = 0x0093, // updated 6.18 hotfix
    TradeReturnEventHandler = 0xF0B5, // updated 6.11a
    TradeReturnEventHandler2 = 0xF388, // updated 6.08

    EventYield2Handler = 0x01BD, // updated 6.18 hotfix
    EventYield16Handler = 0xF33C, // updated 6.11
    EventYield32Handler = 0x0251, // updated 6.18 hotfix

    LinkshellEventHandler = 0xF16B, // updated 4.5
    LinkshellEventHandler1 = 0xF16C, // updated 4.5

    ReqEquipDisplayFlagsChange = 0x02EE, // updated 6.18 hotfix

    LandRenameHandler = 0x00DB, // updated 6.18 hotfix
    HousingUpdateHouseGreeting = 0x0101, // updated 6.18 hotfix
    HousingUpdateObjectPosition = 0x013D, // updated 6.18 hotfix
    HousingEditExterior = 0x02A4, // updated 6.18 hotfix
    HousingEditInterior = 0x021E, // updated 6.18 hotfix

    SetSharedEstateSettings = 0x0220, // updated 6.11a

    PerformNoteHandler = 0xF243, // updated 5.58 hotfix

    WorldInteractionHandler = 0x0096, // updated 6.18 hotfix
    Dive = 0x0240, // updated 6.18 hotfix
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