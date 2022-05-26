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
    ActorFreeSpawn = 0x0111, // updated 6.11a (Experimental)
    ChatBanned = 0xF06B,
    InitSearchInfo = 0x0284, // updated 6.11a (Experimental)

    // Definitions that needed to be "changed" (with an F in front) to prevent conflicts

    /////////////////////////////////////////////////

    Ping = 0x017A, // updated 6.11a
    Init = 0x0075, // updated 6.11a

    InitZone = 0x0086, // Updated 6.11a (Experimental)
    PrepareZoning = 0x02A0, // Updated 6.11a (Experimental)

    EffectResult = 0x012A, // Updated 6.11a (Experimental)
    EffectResultBasic = 0x00A8, // updated 6.11

    ActorControl = 0x024B, // Updated 6.11a (Experimental)
    ActorControlSelf = 0x0334, // Updated 6.11a (Experimental)
    ActorControlTarget = 0x0370, // Updated 6.11a (Experimental)
    ActorCast = 0x03DF, // Updated 6.11a (Experimental)
    ActorMove = 0x0132, // Updated 6.11a (Experimental)
    ActorSetPos = 0x01D9, // Updated 6.11a (Experimental)
    ActorGauge = 0x01C2, // Updated 6.11a (Experimental)

    EventPlay = 0x085,    // Updated for 6.11a (Experimental)
    EventPlay4 = 0x2F4,   // Updated for 6.11a (Experimental)
    EventPlay8 = 0x176,   // Updated for 6.11a (Experimental)
    EventPlay16 = 0x2D4,   // Updated for 6.11a (Experimental)
    EventPlay32 = 0x2FF,  // Updated for 6.11a (Experimental)
    EventPlay64 = 0x289,  // Updated for 6.11a (Experimental)
    EventPlay128 = 0x3A5, // Updated for 6.11a (Experimental)
    EventPlay255 = 0xD9,  // Updated for 6.11a (Experimental)
    EventStart = 0x0156, // Updated 6.11a (Experimental)
    EventFinish = 0x026B, // Updated 6.11a (Experimental)

    DirectorVars = 0x00F0, // updated 6.11a (Experimental)
    SomeDirectorUnk1 = 0x00DB, // updated 6.11 or 0xCC, 0x122, 0x1AD, or 0x24F
    SomeDirectorUnk2 = 0xF0C1, // updated 5.18
    SomeDirectorUnk4 = 0x01D4, // Updated 6.11a (Experimental)
    SomeDirectorUnk8 = 0x028A, // updated 5.18
    SomeDirectorUnk16 = 0x028C, // updated 5.18
    DirectorPopUp = 0x03DF, // updated 5.58 hotfix
    DirectorPopUp4 = 0x019B, // updated 5.58 hotfix
    DirectorPopUp8 = 0xF271, // updated 5.58 hotfix
     ///////// These last 3 are 0x0093, 0x00DA and 0x01CB, but don't know which is which

    ///////////////////////////////////////////////////

    PlayerSetup = 0x03CB, // Updated 6.11a (Experimental)
    PlayerStats = 0x036E, // Updated 6.11a (Experimental)
    PlayerSpawn = 0x0336, // Updated 6.11a (Experimental)
    PlayerClassInfo = 0x00CB, // updated 6.11a (Experimental)


    UpdateHpMpTp = 0x0231, // Updated 6.11a (Experimental)
    UpdateClassInfo = 0x02D1, // Updated 6.11a (Experimental)

    UpdateSearchInfo = 0x0251, // Updated 6.11a (Experimental)
    ExamineSearchInfo = 0x0236, // Updated 6.11a (Experimental)

    // daily quest info -> without them sent,  login will take longer...
    DailyQuests = 0x029D, // updated 6.11a (Experimental)
    DailyQuestRepeatFlags = 0x0328, // updated 6.11a (Experimental)


    Playtime = 0x039D, // Updated 6.11a (Experimental)
    Logout = 0x0094, // updated 6.11a (Experimental)

    CFNotify = 0x01D2, // updated 6.11a (Experimental)
    CFMemberStatus = 0x0286, // updated 6.11a (Experimental) [Real Iffy]
    CFDutyInfo = 0x03A8, // updated 6.11a (Experimental)
    CFPlayerInNeed = 0xF07F,
    CFPreferredRole = 0x0151, // updated 6.11a (Experimental)
    CFCancel = 0x0107, // updated 6.11a (Experimental)
    SocialRequestError = 0xF0AD,

    CFRegistered = 0x00A9, // updated 6.08
    SocialRequestResponse = 0x0386, // updated 6.11a (Experimental)
    SocialMessage = 0x0079, // updated 6.11a (Experimental)
    SocialMessage2 = 0x0159, // updated 6.11a (Experimental)
    CancelAllianceForming = 0xF0C6, // updated 4.2

    LogMessage = 0x038B, // updated 6.11a (Experimental)

    Chat = 0x009C, // updated 6.11a (Experimental)
    PartyChat = 0x0065,

    WorldVisitList = 0xF0FE, // added 4.5

    SocialList = 0x0183, // updated 6.11a (Experimental)

    ExamineSearchComment = 0x036B, // updated 6.11a (Experimental)

    ServerNoticeShort = 0x00B4, // updated 6.11a (Experimental)
    ServerNotice = 0x01CB, // updated 6.11a (Experimental)
	SystemLogMessage = 0x01D4, // updated 6.11a
    SetOnlineStatus = 0x021F, // updated 6.11a (Experimental)

    CountdownInitiate = 0x0179, // updated 6.11a (Experimental)
    CountdownCancel = 0x0359, // updated 6.11a (Experimental)

    PlayerAddedToBlacklist = 0x033F, // updated 6.11a (Experimental)
    PlayerRemovedFromBlacklist = 0x0149, // updated 6.11a (Experimental)
    BlackList = 0x03AE, // updated 6.11a (Experimental)

    LinkshellList = 0x0284, // updated 6.11a (Experimental)
    CrossWorldLinkshellList = 0x00CD, // updated 6.11
    FellowshipList = 0x03E7, // updated 6.11

    MailDeleteRequest = 0xF12B, // updated 5.0

    // 12D - 137 - constant gap between 4.5x -> 5.0
    ReqMoogleMailList = 0xF138, // updated 5.0
    ReqMoogleMailLetter = 0xF139, // updated 5.0
    MailLetterNotification = 0x013A, // updated 5.0

    MarketTaxRates = 0x01F8, // updated 5.35 hotfix

    MarketBoardSearchResult = 0x01DE, // Updated 6.11a
    MarketBoardItemListingCount = 0x03B7, // Updated 6.11a
    MarketBoardItemListingHistory = 0x00E1, // Updated 6.11a
    MarketBoardItemListing = 0x039A, // Updated 6.11a
	MarketBoardPurchase = 0x0180, // Updated 6.11a
	ItemMarketBoardInfo = 0x00BE, // Updated 6.11a

    CharaFreeCompanyTag = 0x013B, // updated 4.5
    FreeCompanyBoardMsg = 0x0276, // updated 6.11
    FreeCompanyInfo = 0x010C, // Updated 6.11a
    FreeCompanyDialog = 0x039E, // Updated 6.11a
    ExamineFreeCompanyInfo = 0x0197, // updated 6.11

    FreeCompanyUpdateShortMessage = 0xF157, // added 5.0

    StatusEffectList = 0x032E, // Updated 6.11a (Experimental)
    EurekaStatusEffectList = 0x0244, // updated 6.11a (Experimental)
    BossStatusEffectList = 0x03B9, // updated 6.11a (Experimental)
    Effect = 0x00B5, // Updated 6.11a (Experimental)
    AoeEffect8 = 0x014F, // Updated 6.11a
    AoeEffect16 = 0x01B4, // Updated 6.11a
    AoeEffect24 = 0x03A0, // updated 6.11a
    AoeEffect32 = 0x0168, // updated 6.11a
    PersistantEffect = 0x0299, // updated 6.11

    GCAffiliation = 0x0083, // updated 6.11a

    NpcSpawn = 0x026D, // Updated 6.11a (Experimental)
    NpcSpawn2 = 0x0207, // updated 6.11a (Experimental)

    SomeCustomiseChangePacketProbably = 0xF0CD, // added 5.18 (Prepended F to prevent conflicts)

    PartyList = 0x03A2, // updated 6.11a (Experimental)
    PartyMessage = 0x0378, // updated 6.11a (Experimental)
    HateRank = 0x01C5, // updated 6.11
    HateList = 0x024C, // updated 6.11
    ObjectSpawn = 0x0305, // Updated 6.11a (Experimental)
    ObjectDespawn = 0x0120, // updated 6.11a (Experimental)
    SilentSetClassJob = 0xF18E, // updated 5.0 - seems to be the case, not sure if it's actually used for anything
    ActorOwner = 0x0312, // updated 6.11
    PlayerStateFlags = 0x012C, // updated 6.11a (Experimental)

    CharaVisualEffect = 0x01A6, // updated 6.11a (Experimental)

    InstanceDecorAnimation = 0x0350, // updated 6.11a (Experimental)

    ModelEquip = 0x0194, // updated 6.11a (Experimental)
    Examine = 0x0305, // updated 6.11
    CharaNameReq = 0x0081, // updated 6.11a (Experimental)

    // nb: see #565 on github
    UpdateRetainerItemSalePrice = 0xF19F, // updated 5.0
    RetainerSaleHistory = 0x0320, // updated 6.11
    RetainerInformation = 0x035A, // Updated 6.11a

    SetLevelSync = 0x1186, // not updated for 4.4, not sure what it is anymore

    ItemInfo = 0x038D, // updated 6.11a
    ContainerInfo = 0x0288, // Updated 6.11a
    InventoryTransactionFinish = 0x0397, // Updated 6.11a
    InventoryTransaction = 0x028F, //updated 6.11a
    CurrencyCrystalInfo = 0x00D8,// updated 6.11a

    InventoryActionAck = 0x014B, // Updated 6.11a
    UpdateInventorySlot = 0x021E, // Updated 6.11a (Experimental)

    HuntingLogEntry = 0x015A, // updated 6.11a

    EventContinue = 0x0325, // updated 6.11a (Experimental)

    EventLinkshell = 0x1169,

    QuestActiveList = 0x03CE, // updated 6.11a (Experimental)
    QuestUpdate = 0x01DF, // updated 6.11a (Experimental)
    QuestCompleteList = 0x0322, // updated 6.11a (Experimental)

    QuestFinish = 0x03DD, // updated 6.11a (Experimental)
    MSQTrackerComplete = 0x0250, // updated 6.11a (Experimental)
    MSQTrackerProgress = 0xF1CD, // updated 4.5 ? this actually looks like the two opcodes have been combined, see #474

    QuestMessage = 0x0220, // updated 5.58 hotfix

    QuestTracker = 0x02CB, // updated 6.11a (Experimental)

    Mount = 0x0268, // updated 6.11

    CFAvailableContents = 0xF1FD, // updated 4.2

    WeatherChange = 0x01AD, // updated 6.11a (Experimental)
    PlayerTitleList = 0x0206, // updated 6.11a (Experimental)
    Discovery = 0x0380, // updated 6.11a (Experimental)

    EorzeaTimeOffset = 0x030B, // updated 6.11a (Experimental)

    EquipDisplayFlags = 0x038C, // updated 6.11a (Experimental)

    MiniCactpotInit = 0x03DC, // added 6.11a
    ShopMessage = 0x0287, // updated 5.58 hotfix
    LootMessage = 0x00C2, // updated 6.11a
    ResultDialog = 0x027A, // Updated 6.11a
    DesynthResult = 0x030D, // Updated 6.11a

    LandSetInitialize = 0x0354, // updated 6.11a (Experimental)
    LandUpdate = 0x0069, // updated 6.11a (Experimental)
    YardObjectSpawn = 0x0294, // updated 6.11a (Experimental)
    HousingIndoorInitialize = 0x010A, // updated 6.11a (Experimental)
    LandPriceUpdate = 0x03D3, // updated 6.11a (Experimental)
    LandInfoSign = 0x0364, // updated 6.11a (Experimental)
    LandRename = 0x0FFF, // updated 6.11a (Experimental)
    HousingEstateGreeting = 0x0335, // updated 6.11a (Experimental)
    HousingUpdateLandFlagsSlot = 0x00D0, // updated 6.11a (Experimental)
    HousingLandFlags = 0x0101, // updated 6.11a (Experimental)
    HousingShowEstateGuestAccess = 0x02BA, // updated 6.11a (Experimental)

    HousingObjectInitialize = 0x0228, // updated 6.11a (Experimental)
    HousingInternalObjectSpawn = 0x00C3, // updated 6.11a (Experimental)

    HousingWardInfo = 0x01E2, // updated 6.11a (Experimental)
    HousingObjectMove = 0x02A3, // updated 6.11a (Experimental)
	HousingObjectDye = 0x2B5, // updated 6.11a

    SharedEstateSettingsResponse = 0x006B, // updated 6.11

    LandUpdateHouseName = 0x036D, // updated 6.11a (Experimental)

    LandSetMap = 0x01FF, // updated 6.11a (Experimental)

    CeremonySetActorAppearance = 0x0317, // updated 6.11a (Experimental)
	PvPTeamDisbandNotice = 0x396, // updated 6.11a

    //////////////////////////////////////////////////

    DuelChallenge = 0xF277, // 4.2; this is responsible for opening the ui
    PerformNote = 0x03AA, // updated 6.11

    DutyGauge = 0x008B, // updated 6.08 - this opcode seems to be wrong, LandSetMap duplicate



    MapUpdate = 0x01FD, // updated 6.11
    MapUpdate4 = 0x0248, // updated 6.11
    MapUpdate8 = 0x01F2, // updated 6.11
    MapUpdate16 = 0x02F6, // updated 6.11
    MapUpdate32 = 0x03C3, // updated 6.11
    MapUpdate64 = 0x0162, // updated 6.11
    MapUpdate128 = 0x0153, // updated 6.11

    /// Doman Mahjong //////////////////////////////////////
    MahjongOpenGui = 0x02A4, // only available in mahjong instance
    MahjongNextRound = 0x02BD, // initial hands(baipai), # of riichi(wat), winds, honba, score and stuff
    MahjongPlayerAction = 0x02BE, // tsumo(as in drawing a tile) called chi/pon/kan/riichi
    MahjongEndRoundTsumo = 0x02BF, // called tsumo
    MahjongEndRoundRon = 0x2C0, // called ron or double ron (waiting for action must be flagged from discard packet to call)
    MahjongTileDiscard = 0x02C1, // giri (discarding a tile.) chi(1)/pon(2)/kan(4)/ron(8) flags etc..
    MahjongPlayersInfo = 0xF2C2, // actor id, name, rating and stuff..
    // 2C3 and 2C4 are currently unknown
    MahjongEndRoundDraw = 0x02C5, // self explanatory
    MahjongEndGame = 0x9999, // finished oorasu(all-last) round; shows a result screen. Changed to 9999 since a 6.11 packet uses the opcode value in 6.08


  };

  /**
  * Client IPC Zone Type Codes.
  */
  enum ClientZoneIpcType : uint16_t
  {
    PingHandler = 0x0352, // updated 6.11a
    InitHandler = 0x002C3, // updated 6.11a
    FinishLoadingHandler = 0x0075, // updated 6.11a
    SocialListHandler = 0x00BA, // updated 6.11a
    BlackListHandler = 0x00E6, // updated 6.11a
    LinkshellListHandler = 0x039D, // updated 6.11a
    MarketBoardSearch = 0x0183, // updated 6.11a

    LogoutHandler = 0x0208, // updated 6.11a (Experimental)

    CancelLogout = 0x0107, // updated 6.11a (Experimental)

    UpdatePositionHandler = 0x00B8, // Updated 6.11a
    ClientTrigger = 0x0309, // Updated 6.11a (Experimental)
    ChatHandler = 0x01E9, // Updated 6.11a
    SetSearchInfoHandler = 0x00E3, // Updated 6.11a
    MarketBoardPurchaseHandler = 0x03B6, // Updated 6.11a
    InventoryModifyHandler = 0x02BE, // Updated 6.11a
    UpdatePositionInstance = 0x0351, // Updated 6.11a
    PlaceFieldMarkerPreset = 0x015E, // Updated 6.11a (Experimental)
    PlaceFieldMarker = 0x0137, // Updated 6.11a (Experimental)
    GMCommand1 = 0x02D5, // updated 6.11a (Experimental)

    CFCommenceHandler = 0x007B, // updated 6.11

    CFCancelHandler = 0x007B, // updated 6.11
    CFRegisterDuty = 0x02B2, // updated 6.11
    CFRegisterRoulette = 0x0157, // updated 6.11
    PlayTimeHandler = 0x0164, // updated 6.11a

    CFDutyInfoHandler = 0xF078, // updated 4.2

    SocialReqSendHandler = 0x0335, // updated 6.11
    SocialResponseHandler = 0x0129, // updated 6.11
    CreateCrossWorldLS = 0x035D, // updated 5.58 hotfix

    PartyChatHandler = 0x025A, // updated 6.11a (Experimental)
    PartySetLeaderHandler = 0x016D, // updated 6.11
    LeavePartyHandler = 0x0101, // updated 6.11
    KickPartyMemberHandler = 0x00CA, // updated 6.11
    DisbandPartyHandler = 0x03E7, // updated 6.11

    ReqSearchInfoHandler = 0x0090, // updated 6.11
    ReqExamineSearchCommentHandler = 0x00E7, // updated 5.0

    ReqRemovePlayerFromBlacklist = 0x00B4, // updated 5.58 hotfix
    PlayerSearchHandler = 0x02DC, // updated 6.11

    MarketBoardRequestItemListingInfo = 0x00F4, // updated 5.58 hotfix
    MarketBoardRequestItemListings = 0x0122, // updated 5.58 hotfix

    ReqExamineFcInfo = 0x037B, // updated 5.58 hotfix

    FcInfoReqHandler = 0x03D4, // updated 5.58 hotfix

    FreeCompanyUpdateShortMessageHandler = 0x0123, // added 5.0

    ReqMarketWishList = 0x00C3, // updated 5.58 hotfix

    ReqJoinNoviceNetwork = 0xF129, // updated 4.2 (F appended since it conflicts)

    ReqCountdownInitiate = 0x039A, // updated 6.11a (Experimental)
    ReqCountdownCancel = 0x0144, // updated 6.11a (Experimental) 

    ZoneLineHandler = 0x00C3, // updated 5.58 hotfix
    DiscoveryHandler = 0x00D9, // updated 6.08

    GMCommand2 = 0x007A, // updated 6.11a (Experimental)

    SkillHandler = 0x00B9, // updated 6.11a (Experimental)
    AoESkillHandler = 0x0152, // updated 5.58 hotfix



    InventoryEquipRecommendedItems = 0x01C9, // updated 5.58 hotfix

    ReqPlaceHousingItem = 0x02A9, // updated 6.11a
    BuildPresetHandler = 0x0223, // updated 5.58 hotfix

    TalkEventHandler = 0x022F, // updated 6.11a
    EmoteEventHandler = 0x00B0, // updated 5.58 hotfix
    WithinRangeEventHandler = 0x02B6, // updated 5.58 hotfix
    OutOfRangeEventHandler = 0x03C5, // updated 5.58 hotfix
    EnterTeriEventHandler = 0x02B3, // updated 6.11a
    ShopEventHandler = 0x0384, // updated 5.58 hotfix

    ReturnEventHandler = 0x0231, // updated 6.11a 
    TradeReturnEventHandler = 0x00B5, // updated 6.11a
    TradeReturnEventHandler2 = 0x0388, // updated 6.08 

    EventYield2Handler = 0x021D, // updated 5.58 hotfix
    EventYield16Handler = 0x0213, // updated 6.08

    LinkshellEventHandler = 0x016B, // updated 4.5
    LinkshellEventHandler1 = 0x016C, // updated 4.5

    ReqEquipDisplayFlagsChange = 0x0177, // updated 6.11a (Experimental)

    LandRenameHandler = 0x00E7, // updated 6.11a (Experimental)
    HousingUpdateHouseGreeting = 0x02C8, // updated 6.11a (Experimental)
    HousingUpdateObjectPosition = 0x0316, // updated 6.11a (Experimental)
    HousingEditExterior = 0x033A, // updated 6.11a (Experimental)
    HousingEditInterior = 0x012A, // updated 6.11a

    SetSharedEstateSettings = 0x00D2, // updated 5.58 hotfix

    PerformNoteHandler = 0x0243, // updated 5.58 hotfix

    WorldInteractionHandler = 0x0274, // updated 5.58 hotfix
    Dive = 0x01D9, // updated 6.11a (Experimental)
	Surface = 0x007F, // updated 6.11a (Experimental)
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