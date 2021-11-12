
#ifndef _TEXTURE_INDEX_H_
#define _TEXTURE_INDEX_H_

#pragma once

enum
{
#ifdef FIX_TEXTURE_MODEL_INDEX_CONFLICT
	BITMAP_UNKNOWN = 30000,
#else	// FIX_TEXTURE_MODEL_INDEX_CONFLICT
	BITMAP_UNKNOWN = 0x0000,
#endif	// FIX_TEXTURE_MODEL_INDEX_CONFLICT
	//////////////////////////////////////////////////////////////////////////
	//. Basic Texture 0x0001 ~ 0x00FE	(253개)
	BITMAP_FONT_BEGIN,
	BITMAP_FONT,
	BITMAP_FONT_END = BITMAP_FONT_BEGIN + 2,

	BITMAP_GAME_CENSORSHIP_BEGIN,	// 게임물 등급 표시 이미지
	BITMAP_GAME_CENSORSHIP_END = BITMAP_GAME_CENSORSHIP_BEGIN + 5,

	BITMAP_CURSOR_BEGIN,
	BITMAP_CURSOR2,							//- 공성전에서의 공격 표시
	BITMAP_CURSOR,							//- 10개
	BITMAP_CURSOR_END = BITMAP_CURSOR_BEGIN + 10,

	//////////////////////////////////////////////////////////////////////////
	//. World Texture	0x00FF ~ 0x02FE (511개)
#ifdef FIX_TEXTURE_MODEL_INDEX_CONFLICT
	BITMAP_MAPTILE_BEGIN = 30255,	// 255
#else	// FIX_TEXTURE_MODEL_INDEX_CONFLICT
	BITMAP_MAPTILE_BEGIN = 0xFF,	// 255
#endif	// FIX_TEXTURE_MODEL_INDEX_CONFLICT
	BITMAP_MAPTILE,
	BITMAP_MAPTILE_END = BITMAP_MAPTILE_BEGIN+30,

	BITMAP_MAPGRASS_BEGIN,
	BITMAP_MAPGRASS,
	BITMAP_MAPGRASS_END = BITMAP_MAPGRASS_BEGIN+30,

	BITMAP_WATER_BEGIN,
	BITMAP_WATER,
	BITMAP_WATER_END = BITMAP_WATER_BEGIN+35,

	BITMAP_RAIN_CIRCLE_BEGIN,
	BITMAP_RAIN_CIRCLE,
	BITMAP_RAIN_CIRCLE_END = BITMAP_RAIN_CIRCLE_BEGIN+2,

	BITMAP_SHINES,
	BITMAP_LEAF1,
	BITMAP_LEAF2,
	BITMAP_RAIN,

	//////////////////////////////////////////////////////////////////////////
	//. Player	0x02FF ~ 0x40FE (15871개)
#ifdef FIX_TEXTURE_MODEL_INDEX_CONFLICT
	BITMAP_PLAYER_TEXTURE_BEGIN = 30500,	// 0x02FF
#else	// FIX_TEXTURE_MODEL_INDEX_CONFLICT
	BITMAP_PLAYER_TEXTURE_BEGIN = 500,	// 0x02FF
#endif	// FIX_TEXTURE_MODEL_INDEX_CONFLICT

	BITMAP_SKIN_BEGIN = BITMAP_PLAYER_TEXTURE_BEGIN,	
    BITMAP_SKIN,
	BITMAP_SKIN_END = BITMAP_SKIN_BEGIN+20,
	BITMAP_HAIR_BEGIN,
	BITMAP_HAIR,
	BITMAP_HAIR_END	= BITMAP_HAIR_BEGIN+20,

	BITMAP_ROBE_BEGIN,
    BITMAP_ROBE,
	BITMAP_ROBE_END             = BITMAP_ROBE_BEGIN+15,			

	BITMAP_HIDE,
	
	BITMAP_DARKLOAD_SKIRT_3RD,							//   - 3차전직 다크로드 스커트.

	BITMAP_INVEN_ARMOR_BEGIN,	// 인벤토리용 상의갑옷.(소환술사)
	BITMAP_INVEN_ARMOR,
	BITMAP_INVEN_ARMOR_END		= BITMAP_INVEN_ARMOR_BEGIN+8,

	BITMAP_INVEN_PANTS_BEGIN,	// 인벤토리용 하의갑옷.(소환술사)
	BITMAP_INVEN_PANTS,
	BITMAP_INVEN_PANTS_END		= BITMAP_INVEN_PANTS_BEGIN+8,

#ifdef ADD_SOCKET_ITEM
	BITMAP_SKIN_ARMOR_DEVINE,	// 디바인셋트 (요정)
	BITMAP_SKIN_PANTS_DEVINE,
	BITMAP_SKIN_ARMOR_SUCCUBUS,	// 서큐버스셋트 (소환술사)
	BITMAP_SKIN_PANTS_SUCCUBUS,
#endif // ADD_SOCKET_ITEM
		
#ifdef FIX_TEXTURE_MODEL_INDEX_CONFLICT
	BITMAP_PLAYER_TEXTURE_END = 31000,		// 0x40FE
#else	// FIX_TEXTURE_MODEL_INDEX_CONFLICT
	BITMAP_PLAYER_TEXTURE_END = 1000,		// 0x40FE
#endif	// FIX_TEXTURE_MODEL_INDEX_CONFLICT

	//////////////////////////////////////////////////////////////////////////
	//. Interface Texture 0x0040FF ~ 0x01FFFE (114431개)
#ifdef FIX_TEXTURE_MODEL_INDEX_CONFLICT
	BITMAP_INTERFACE_TEXTURE_BEGIN = 31001,	// 0x0040FF
#else	// FIX_TEXTURE_MODEL_INDEX_CONFLICT
	BITMAP_INTERFACE_TEXTURE_BEGIN = 1001,	// 0x0040FF
#endif	// FIX_TEXTURE_MODEL_INDEX_CONFLICT
	
	BITMAP_LOG_IN_BEGIN = BITMAP_INTERFACE_TEXTURE_BEGIN,
	BITMAP_LOG_IN,
	BITMAP_LOG_IN_END = BITMAP_LOG_IN_BEGIN + 20,

	BITMAP_INTERFACE_BEGIN,
	BITMAP_INTERFACE,
	BITMAP_INTERFACE_END = BITMAP_INTERFACE_BEGIN+30,

	BITMAP_INVENTORY_BEGIN,
	BITMAP_INVENTORY,
	BITMAP_INVENTORY_BUTTON = BITMAP_INVENTORY + 20,
	BITMAP_INVENTORY_END = BITMAP_INVENTORY_BEGIN + 40,

	BITMAP_SKILL_INTERFACE_BEGIN,
	BITMAP_SKILL_INTERFACE,
	BITMAP_SKILL_INTERFACE_END = BITMAP_SKILL_INTERFACE_BEGIN + 10,

	BITMAP_EXT_LOG_IN_BEGIN,
	BITMAP_EXT_LOG_IN,									//   - 새로운 캐릭터 선택창에 추가되는 이미지.
	BITMAP_EXT_LOG_IN_END = BITMAP_EXT_LOG_IN_BEGIN + 10,

	BITMAP_TITLE_BEGIN,
	BITMAP_TITLE,										//   - 타이틀 씬에서 사용.
#ifdef PBG_ADD_NEWLOGO_IMAGECHANGE
	BITMAP_TITLE_END = BITMAP_TITLE_BEGIN + 13,
#else //PBG_ADD_NEWLOGO_IMAGECHANGE
	BITMAP_TITLE_END = BITMAP_TITLE_BEGIN + 10,
#endif //PBG_ADD_NEWLOGO_IMAGECHANGE

	BITMAP_BUTTON_BEGIN,
	BITMAP_BUTTON,										//   - 새로운 UI 공통 버튼.
	BITMAP_BUTTON_END = BITMAP_BUTTON_BEGIN + 5,

	BITMAP_MESSAGE_WIN,									//   - 메시지 창.
	BITMAP_MSG_WIN_INPUT,								//   - 메시지 창 입력란.

	BITMAP_SYS_WIN_BEGIN,
	BITMAP_SYS_WIN,										//   - 시스템 메뉴 창.
	BITMAP_SYS_WIN_END = BITMAP_SYS_WIN_BEGIN+5,

	BITMAP_MVP_INTERFACE_BEGIN,
	BITMAP_MVP_INTERFACE,
	BITMAP_MVP_INTERFACE_END = BITMAP_MVP_INTERFACE_BEGIN+50,	//  

	BITMAP_INTERFACE_MAP_BEGIN,
    BITMAP_INTERFACE_MAP,								//   - 특정 맵에서만 사용되는 인터페이스 데이터.
	BITMAP_INTERFACE_MAP_END = BITMAP_INTERFACE_MAP_BEGIN+12,

	BITMAP_INTERFACE_EX_BEGIN,
	BITMAP_INTERFACE_EX,								//- 인터페이스 추가
	BITMAP_INTERFACE_EX_END = BITMAP_INTERFACE_EX_BEGIN+60,

	BITMAP_INTERFACE_NEW_CHATLOGWND_BEGIN,
	BITMAP_INTERFACE_NEW_CHATLOGWND_END = BITMAP_INTERFACE_NEW_CHATLOGWND_BEGIN + 8,

	BITMAP_INTERFACE_NEW_CHATINPUTBOX_BEGIN,
	BITMAP_INTERFACE_NEW_CHATINPUTBOX_END = BITMAP_INTERFACE_NEW_CHATINPUTBOX_BEGIN + 12, 

	BITMAP_INTERFACE_NEW_MAINFRAME_BEGIN,
	BITMAP_INTERFACE_NEW_MAINFRAME_END = BITMAP_INTERFACE_NEW_MAINFRAME_BEGIN + 15,
	BITMAP_INTERFACE_NEW_SKILLICON_BEGIN,
#ifdef KJH_ADD_SKILLICON_RENEWAL
#ifdef PBG_ADD_NEWCHAR_MONK_SKILL
	BITMAP_INTERFACE_NEW_SKILLICON_END = BITMAP_INTERFACE_NEW_SKILLICON_BEGIN + 10,
#else //PBG_ADD_NEWCHAR_MONK_SKILL
	BITMAP_INTERFACE_NEW_SKILLICON_END = BITMAP_INTERFACE_NEW_SKILLICON_BEGIN + 8,
#endif //PBG_ADD_NEWCHAR_MONK_SKILL
#else // KJH_ADD_SKILLICON_RENEWAL
	BITMAP_INTERFACE_NEW_SKILLICON_END = BITMAP_INTERFACE_NEW_SKILLICON_BEGIN + 4,
#endif // KJH_ADD_SKILLICON_RENEWAL

	BITMAP_INTERFACE_NEW_MESSAGEBOX_BEGIN,
	BITMAP_INTERFACE_NEW_MESSAGEBOX_END = BITMAP_INTERFACE_NEW_MESSAGEBOX_BEGIN + 17,

	BITMAP_INTERFACE_NEW_NUMBER_BEGIN,
	BITMAP_INTERFACE_NEW_NUMBER_END = BITMAP_INTERFACE_NEW_NUMBER_BEGIN + 1,

	BITMAP_INTERFACE_NEW_INVENTORY_BASE_BEGIN,
#ifdef LJH_ADD_SYSTEM_OF_EQUIPPING_ITEM_FROM_INVENTORY
	BITMAP_INTERFACE_NEW_INVENTORY_BASE_END = BITMAP_INTERFACE_NEW_INVENTORY_BASE_BEGIN + 13,
#else  //LJH_ADD_SYSTEM_OF_EQUIPPING_ITEM_FROM_INVENTORY
	BITMAP_INTERFACE_NEW_INVENTORY_BASE_END = BITMAP_INTERFACE_NEW_INVENTORY_BASE_BEGIN + 10,
#endif //LJH_ADD_SYSTEM_OF_EQUIPPING_ITEM_FROM_INVENTORY
	
	BITMAP_INTERFACE_NEW_PERSONALINVENTORY_BEGIN,
	BITMAP_INTERFACE_NEW_PERSONALINVENTORY_END = BITMAP_INTERFACE_NEW_PERSONALINVENTORY_BEGIN + 20,

	BITMAP_MYSHOPINTERFACE_NEW_PERSONALINVENTORY_BEGIN,
	BITMAP_MYSHOPINTERFACE_NEW_PERSONALINVENTORY_END = BITMAP_MYSHOPINTERFACE_NEW_PERSONALINVENTORY_BEGIN + 18,

	BITMAP_INTERFACE_NEW_NPCSHOP_BEGIN,
	BITMAP_INTERFACE_NEW_NPCSHOP_END,
	
	BITMAP_INTERFACE_NEW_CHAINFO_WINDOW_BEGIN,
	BITMAP_INTERFACE_NEW_CHAINFO_WINDOW_END = BITMAP_INTERFACE_NEW_CHAINFO_WINDOW_BEGIN + 5,
	
	BITMAP_INTERFACE_MYQUEST_WINDOW_BEGIN,
#ifdef ASG_MOD_UI_QUEST_INFO
	BITMAP_INTERFACE_MYQUEST_WINDOW_END = BITMAP_INTERFACE_MYQUEST_WINDOW_BEGIN + 5,
#else	// ASG_MOD_UI_QUEST_INFO
	BITMAP_INTERFACE_MYQUEST_WINDOW_END = BITMAP_INTERFACE_MYQUEST_WINDOW_BEGIN + 1,
#endif	// ASG_MOD_UI_QUEST_INFO

	BITMAP_INTERFACE_NEW_PETINFO_WINDOW_BEGIN,
	BITMAP_INTERFACE_NEW_PETINFO_WINDOW_END = BITMAP_INTERFACE_NEW_PETINFO_WINDOW_BEGIN + 5,
	
	BITMAP_INTERFACE_NEW_STORAGE_BEGIN,
	BITMAP_INTERFACE_NEW_STORAGE_END = BITMAP_INTERFACE_NEW_STORAGE_BEGIN + 5,

	BITMAP_INTERFACE_NEW_MIXINVENTORY_BEGIN,
	BITMAP_INTERFACE_NEW_MIXINVENTORY_END = BITMAP_INTERFACE_NEW_MIXINVENTORY_BEGIN + 1,
	
	BITMAP_INTERFACE_NEW_CASTLE_WINDOW_BEGIN,
	BITMAP_INTERFACE_NEW_CASTLE_WINDOW_END = BITMAP_INTERFACE_NEW_CASTLE_WINDOW_BEGIN + 2,

	BITMAP_GUILDMAKE_BEGIN,
	BITMAP_GUILDMAKE_END = BITMAP_GUILDMAKE_BEGIN + 30,

	BITMAP_GUILDINFO_BEGIN,
	BITMAP_GUILDINFO_END = BITMAP_GUILDINFO_BEGIN + 30, 

	BITMAP_INTERFACE_CRYWOLF_BEGIN,
	BITMAP_INTERFACE_CRYWOLF_END = BITMAP_INTERFACE_CRYWOLF_BEGIN + 45,

	BITMAP_INTERFACE_MASTER_BEGIN,
	BITMAP_INTERFACE_MASTER_END = BITMAP_INTERFACE_MASTER_BEGIN + 18,

	BITMAP_PARTY_INFO_BEGIN,
	BITMAP_PARTY_INFO_END = BITMAP_PARTY_INFO_BEGIN + 5,
	BITMAP_PARTY_MINILIST_BEGIN,
	BITMAP_PARTY_MINILIST_END = BITMAP_PARTY_MINILIST_BEGIN + 5,

	BITMAP_INTERFACE_NEW_TRADE_BEGIN,
	BITMAP_INTERFACE_NEW_TRADE_END = BITMAP_INTERFACE_NEW_TRADE_BEGIN + 2,

	BITMAP_INTERFACE_NEW_BLOODCASTLE_BEGIN,
	BITMAP_INTERFACE_NEW_BLOODCASTLE_END = BITMAP_INTERFACE_NEW_BLOODCASTLE_BEGIN + 5,

	BITMAP_KANTURU_INFO_BEGIN,
	BITMAP_KANTURU_INFO_END,
	
	BITMAP_CATAPULT_BEGIN,
	BITMAP_CATAPULT_END = BITMAP_CATAPULT_BEGIN + 2,
	
	BITMAP_INTERFACE_NEW_BATTLE_SOCCER_SCORE_BEGIN,
	BITMAP_INTERFACE_NEW_BATTLE_SOCCER_SCORE_END,
	
	BITMAP_WINDOW_MENU_BEGIN,
	BITMAP_WINDOW_MENU_END = BITMAP_WINDOW_MENU_BEGIN + 6,

	BITMAP_QUICKCOMMAND_BEGIN,
	BITMAP_QUICKCOMMAND_END = BITMAP_QUICKCOMMAND_BEGIN + 1,
	
	BITMAP_OPTION_BEGIN,
	BITMAP_OPTION_END = BITMAP_OPTION_BEGIN + 10,
	
	BITMAP_COMMAND_WINDOW_BEGIN,
	BITMAP_COMMAND_WINDOW_END = BITMAP_COMMAND_WINDOW_BEGIN + 2,

	BITMAP_HERO_POSITION_INFO_BEGIN,
	BITMAP_HERO_POSITION_INFO_END = BITMAP_HERO_POSITION_INFO_BEGIN + 2,
	
	BITMAP_NEWBUFF_BEGIN,
	BITMAP_NEWBUFF_END = BITMAP_NEWBUFF_BEGIN + 2,
	
	BITMAP_SIEGEWAR_BEGIN,
	BITMAP_SIEGEWAR_END = BITMAP_SIEGEWAR_BEGIN + 15,

	BITMAP_ITEM_ENDURANCE_INFO_BEGIN,
	BITMAP_ITEM_ENDURANCE_INFO_END = BITMAP_ITEM_ENDURANCE_INFO_BEGIN + 14,
	
#ifdef YDG_ADD_NEW_DUEL_WATCH_BUFF
	BITMAP_BUFFWATCH_MAINFRAME_BEGIN,
	BITMAP_BUFFWATCH_MAINFRAME_END = BITMAP_BUFFWATCH_MAINFRAME_BEGIN + 8,
	
	BITMAP_BUFFWATCH_USERLIST_BEGIN,
	BITMAP_BUFFWATCH_USERLIST_END = BITMAP_BUFFWATCH_USERLIST_BEGIN + 1,
#endif	// YDG_ADD_NEW_DUEL_WATCH_BUFF

#ifdef YDG_ADD_DOPPELGANGER_UI
	BITMAP_DOPPELGANGER_FRAME_BEGIN,
	BITMAP_DOPPELGANGER_FRAME_END = BITMAP_DOPPELGANGER_FRAME_BEGIN + 7,
#endif	// YDG_ADD_DOPPELGANGER_UI

#ifdef ASG_ADD_UI_QUEST_PROGRESS
	BITMAP_INTERFACE_QUEST_PROGRESS_BEGIN,
#ifdef ASG_MOD_3D_CHAR_EXCLUSION_UI
	BITMAP_INTERFACE_QUEST_PROGRESS_END = BITMAP_INTERFACE_QUEST_PROGRESS_BEGIN + 1,
#else	// ASG_MOD_3D_CHAR_EXCLUSION_UI
	BITMAP_INTERFACE_QUEST_PROGRESS_END = BITMAP_INTERFACE_QUEST_PROGRESS_BEGIN + 8,
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI
#endif	// ASG_ADD_UI_QUEST_PROGRESS

#ifdef ASG_ADD_UI_NPC_DIALOGUE
	BITMAP_INTERFACE_NPC_DIALOGUE_BEGIN,
	BITMAP_INTERFACE_NPC_DIALOGUE_END = BITMAP_INTERFACE_NPC_DIALOGUE_BEGIN + 1,
#endif	// ASG_ADD_UI_NPC_DIALOGUE

#ifdef PBG_ADD_INGAMESHOPMSGBOX
	// 인게임샵 선택구매 체크 버튼
	BITMAP_IGS_CHECK_BUTTON,

	// 인게임샵 메세지 박스 버튼
	BITMAP_IGS_MSGBOX_BUTTON,

	// 패키지 상품 구매 메세지 박스
	BITMAP_IGS_MSGBOX_BUY_PACKAGE_ITEM,
	
	// 선택 상품 구매 메세지 박스
	BITMAP_IGS_MSGBOX_BUY_SELECT_ITEM,
	
	// 상품 구매 확인 메세지 박스
	BITMAP_IGS_MGSBOX_BUY_CONFIRM_TEXT_BOX,		// 아이템정보 Textbox

	// 선물하기 메세지 박스
	BITMAP_IGS_MSGBOX_SEND_GIFT_FRAME,
	BITMAP_IGS_MSGBOX_SEND_GIFT_DECO,
	BITMAP_IGS_MSGBOX_SEND_GIFT_INPUTTEXT,

	// 보관함 상품 정보창
	BITMAP_IGS_MSGBOX_STORAGE_ITEM,
	
	// 선물보관함 상품 정보창
	BITMAP_IGS_MSGBOX_GIFT_STORAGE_ITEM,
	
#ifdef KJH_MOD_INGAMESHOP_SELECT_CASHPOINT_SYSYEM_ONLY_GLOBAL
	// 상품구매 캐시종류 선택창(C/P) - 글로벌 전용
	BITMAP_IGS_MSGBOX_SELECT_CASHPOINT_TYPE,
	BITMAP_IGS_MSGBOX_SELECT_CHECK_BOX,
#endif // KJH_MOD_INGAMESHOP_SELECT_CASHPOINT_SYSYEM_ONLY_GLOBAL

#endif //PBG_ADD_INGAMESHOPMSGBOX

#ifdef LDK_ADD_EMPIREGUARDIAN_UI
	BITMAP_EMPIREGUARDIAN_TIMER_BEGIN,
	BITMAP_EMPIREGUARDIAN_TIMER_END,
#endif //LDK_ADD_EMPIREGUARDIAN_UI
	
	BITMAP_CURSEDTEMPLE_BEGIN,
	BITMAP_CURSEDTEMPLE_END = BITMAP_CURSEDTEMPLE_BEGIN+50,
	
	BITMAP_BUFFWINDOW_BEGIN,
	BITMAP_BUFFWINDOW_END = BITMAP_BUFFWINDOW_BEGIN+1,

	BITMAP_CURSEDTEMPLE_MONSTER_MANTLE,
	BITMAP_CURSEDTEMPLE_NPC_MESH_EFFECT,
	BITMAP_CURSEDTEMPLE_HOLYITEM_MESH_EFFECT,
	BITMAP_CURSEDTEMPLE_ALLIED_PHYSICSCLOTH,
	BITMAP_CURSEDTEMPLE_ILLUSION_PHYSICSCLOTH,
	BITMAP_CURSEDTEMPLE_EFFECT_MASKER,
	BITMAP_CURSEDTEMPLE_EFFECT_WIND,
	BITMAP_GHOST_CLOUD1,
	BITMAP_GHOST_CLOUD2,
	BITMAP_TORCH_FIRE,
	BITMAP_EVENT_CLOUD,

	BITMAP_LOGO,
	BITMAP_GUILD,
	BITMAP_TEXT_BTN,									//   - 새로운 UI 공통 Text 버튼.
	BITMAP_OPTION_WIN,									//   - 옵션 창.
	BITMAP_CHECK_BTN,									//   - 새로운 체크 버튼.
	BITMAP_FONT_HIT,

#ifdef ASG_ADD_GENS_MARK
	BITMAP_GENS_MARK_DUPRIAN,							// 겐스 듀프리언 마크.
	BITMAP_GENS_MARK_BARNERT,							// 겐스 바네르트 마크.
#endif	// ASG_ADD_GENS_MARK

#ifdef PBG_ADD_PCROOM_NEWUI
	BITMAP_PCROOM_NEWUI,								// PC방 새로운 UI
#endif //PBG_ADD_PCROOM_NEWUI
#ifdef PBG_ADD_GENSRANKING
	BITMAP_GENS_RANKBACK,
#endif //PBG_ADD_GENSRANKING

#ifdef GFX_UI_TEST_CODE
	BITMAP_TEST_UI_IMAGE,
#endif //GFX_UI_TEST_CODE

#ifdef FIX_TEXTURE_MODEL_INDEX_CONFLICT
	BITMAP_INTERFACE_TEXTURE_END = 32000,
#else	// FIX_TEXTURE_MODEL_INDEX_CONFLICT
	BITMAP_INTERFACE_TEXTURE_END = 2000,
#endif	// FIX_TEXTURE_MODEL_INDEX_CONFLICT

	//////////////////////////////////////////////////////////////////////////
    // Effect Texture 0x01FFFF ~ 0x04FFFE (196608개)
#ifdef FIX_TEXTURE_MODEL_INDEX_CONFLICT
	BITMAP_EFFECT_TEXTURE_BEGIN = 32001,
#else	// FIX_TEXTURE_MODEL_INDEX_CONFLICT
	BITMAP_EFFECT_TEXTURE_BEGIN = 2001,
#endif	// FIX_TEXTURE_MODEL_INDEX_CONFLICT

	BITMAP_LIGHT_BEGIN = BITMAP_EFFECT_TEXTURE_BEGIN,
    BITMAP_LIGHT,
	BITMAP_LIGHT_END = BITMAP_LIGHT_BEGIN+15,

	BITMAP_BLUR_BEGIN,
    BITMAP_BLUR,

#ifdef LDS_MOD_INCREASE_BITMAPIDXBLURNUMBERS	// 제국 수호군에서 잡힌 추가 BLUR BITMAP 포함 여유분
	BITMAP_BLUR_END = BITMAP_BLUR_BEGIN+20,
#else // LDS_MOD_INCREASE_BITMAPIDXBLURNUMBERS
#ifdef PBG_ADD_PKFIELD
	BITMAP_BLUR_END = BITMAP_BLUR_BEGIN+4,
#else //PBG_ADD_PKFIELD
	BITMAP_BLUR_END = BITMAP_BLUR_BEGIN+3,
#endif //PBG_ADD_PKFIELD
#endif // LDS_MOD_INCREASE_BITMAPIDXBLURNUMBERS

	BITMAP_SWORD_FORCE_BEGIN,
    BITMAP_SWORD_FORCE,
	BITMAP_SWORD_FORCE_END = BITMAP_SWORD_FORCE_BEGIN+2,

	BITMAP_CHROME_BEGIN,
    BITMAP_CHROME,
	BITMAP_CHROME_END = BITMAP_CHROME_BEGIN+5,

	BITMAP_SPARK_BEGIN,
    BITMAP_SPARK,
	BITMAP_SPARK_END = BITMAP_SPARK_BEGIN+5,

	BITMAP_ENERGY_BEGIN,
    BITMAP_ENERGY,
	BITMAP_ENERGY_END = BITMAP_ENERGY_BEGIN+10,

	BITMAP_LIGHTNING_BEGIN,
    BITMAP_LIGHTNING,
	BITMAP_LIGHTNING_END = BITMAP_LIGHTNING_BEGIN+5,

	BITMAP_FIRE_BEGIN,
    BITMAP_FIRE,
	BITMAP_FIRE_END = BITMAP_FIRE_BEGIN+5,

	BITMAP_FLAME_BEGIN,
    BITMAP_FLAME,
	BITMAP_FLAME_END = BITMAP_FLAME_BEGIN+5,

	BITMAP_BLOOD_BEGIN,
    BITMAP_BLOOD,
	BITMAP_BLOOD_END = BITMAP_BLOOD_BEGIN+5,

	BITMAP_BOSS_LASER_BEGIN,
    BITMAP_BOSS_LASER,
	BITMAP_BOSS_LASER_END = BITMAP_BOSS_LASER_BEGIN+5,

	BITMAP_EXPLOTION_BEGIN,
    BITMAP_EXPLOTION,
	BITMAP_EXPLOTION_END = BITMAP_EXPLOTION_BEGIN+5,

	BITMAP_SMOKE_BEGIN,
    BITMAP_SMOKE,
	BITMAP_SMOKE_END = BITMAP_SMOKE_BEGIN+5,

	BITMAP_SHADOW_BEGIN,
    BITMAP_SHADOW,
	BITMAP_SHADOW_END = BITMAP_SHADOW_BEGIN+5,

	BITMAP_SHINY_BEGIN,
    BITMAP_SHINY,
#ifdef LDS_FIX_ACCESS_INDEXNUMBER_ALREADY_LOADTEXTURE
	BITMAP_SHINY_END = BITMAP_SHINY_BEGIN+7,
#else // LDS_FIX_ACCESS_INDEXNUMBER_ALREADY_LOADTEXTURE
	BITMAP_SHINY_END = BITMAP_SHINY_BEGIN+6,
#endif // LDS_FIX_ACCESS_INDEXNUMBER_ALREADY_LOADTEXTURE

	BITMAP_STONE_BEGIN,
    BITMAP_STONE,
	BITMAP_STONE_END = BITMAP_STONE_BEGIN+5, 

	BITMAP_FLOWER01_BEGIN,
    BITMAP_FLOWER01,
	BITMAP_FLOWER01_END = BITMAP_FLOWER01_BEGIN+4,

	BITMAP_FLARE_BEGIN,
    BITMAP_FLARE,
	BITMAP_FLARE_END = BITMAP_FLARE_BEGIN+2,

	BITMAP_JOINT_THUNDER_BEGIN,
    BITMAP_JOINT_THUNDER,
	BITMAP_JOINT_THUNDER_END = BITMAP_JOINT_THUNDER_BEGIN+2,

	BITMAP_JOINT_LASER_BEGIN,
    BITMAP_JOINT_LASER,
	BITMAP_JOINT_LASER_END = BITMAP_JOINT_LASER_BEGIN+2,

	BITMAP_MAGIC_BEGIN,
    BITMAP_MAGIC,
	BITMAP_MAGIC_END = BITMAP_MAGIC_BEGIN+3,

#ifdef ASG_ADD_INFLUENCE_GROUND_EFFECT
	BITMAP_OUR_INFLUENCE_GROUND,		// 겐스 시스템 우리 세력 바닥
	BITMAP_ENEMY_INFLUENCE_GROUND,		// 겐스 시스템 적 세력 바닥
#endif	// ASG_ADD_INFLUENCE_GROUND_EFFECT

	BITMAP_CLOUD_BEGIN,
    BITMAP_CLOUD,
	BITMAP_CLOUD_END = BITMAP_CLOUD_BEGIN+2,

	BITMAP_BLIZZARD_BEGIN,
    BITMAP_BLIZZARD,
	BITMAP_BLIZZARD_END = BITMAP_BLIZZARD_BEGIN+3,

	BITMAP_SPOT_WATER_BEGIN,
	BITMAP_SPOT_WATER,
	BITMAP_SPOT_WATER_END = BITMAP_SPOT_WATER_BEGIN+15, //

	BITMAP_DAMAGE_IMPACT_BEGIN,
	BITMAP_DAMAGE_IMPACT    ,							//   - 데미지 입었을때 충격 효과 ( 2장 )
	BITMAP_DAMAGE_IMPACT_END = BITMAP_DAMAGE_IMPACT_BEGIN+2,

	BITMAP_MONSTER_SKIN_BEGIN,
	BITMAP_MONSTER_SKIN     ,							//   - 몬스터용 특수효과 비트맵
	BITMAP_MONSTER_SKIN_END = BITMAP_MONSTER_SKIN_BEGIN+3,

	BITMAP_TEMP_BEGIN,
	BITMAP_TEMP,										//   - 중요도가 떨어질수록 뒤로.
	BITMAP_TEMP_END = BITMAP_TEMP_BEGIN+30,

	BITMAP_SLIDER_BEGIN,
	BITMAP_SLIDER			,							//   - 슬라이더 컨트롤.
	BITMAP_SLIDER_END = BITMAP_SLIDER_BEGIN + 3, 

    BITMAP_SAND,
    BITMAP_FIRECRACKER,
    BITMAP_FIRECRACKERRISE,
	BITMAP_FOOT,
    BITMAP_BUBBLE,
	BITMAP_JOINT_FORCE,
    BITMAP_CHROME2,
    BITMAP_GATHERING,
    BITMAP_ICE,
    BITMAP_BURN,
    BITMAP_JOINT_SPIRIT,
	BITMAP_JOINT_FIRE,
    BITMAP_JOINT_SPARK,
    BITMAP_JOINT_ENERGY,
    BITMAP_JOINT_HEALING,
    BITMAP_JANUSEXT,
    BITMAP_SKULL,
    BITMAP_PHO_R_HAIR	    ,
    BITMAP_PANTS_G_SOUL	    ,
    BITMAP_FLARE_BLUE       ,
    BITMAP_FLARE_FORCE	    ,
    BITMAP_FLARE_RED        ,
    BITMAP_WHITE_WIZARD     ,
    BITMAP_DEST_ORC_WAR0    ,
    BITMAP_DEST_ORC_WAR1    ,
    BITMAP_DEST_ORC_WAR2    ,
    BITMAP_FLASH            ,							//- 섬광.
    BITMAP_INFERNO          ,							//- 화염.
    BITMAP_LAVA             ,							//- 용암
    BITMAP_FIRE_SNUFF       ,							//- 불씨.
    BITMAP_CRATER           ,							//- 폭파 흔적.
    BITMAP_FORMATION_MARK   ,							//- 진형 마크.
    BITMAP_PLUS             ,							//- 힐링 효과.
	BITMAP_BLUR2			,							//- 잔상텍스처 추가
	BITMAP_HGBOSS_PATTERN	,							//- 사냥터 보스 무늬
	BITMAP_HGBOSS_WING		,							//- 사냥터 보스 날개 
	BITMAP_FISSURE_FIRE		,							//- 지면 균열 불효과
	BITMAP_NIGHTMARE_EFFECT1,							//- 칸투르 나이트메어 몹 효과
	BITMAP_NIGHTMARE_EFFECT2,							//- 칸투르 나이트메어 몹 효과
	BITMAP_NIGHTMARE_ROBE   ,							//- 칸투르 나이트메어 로브
	BITMAP_FENRIR_THUNDER	,							//- 펜릴 스킬 동작시 몸 주변에 번개
	BITMAP_FENRIR_FOOT_THUNDER1,						//- 펜릴 발바닥 밑에 번개
	BITMAP_FENRIR_FOOT_THUNDER2,						//  
	BITMAP_FENRIR_FOOT_THUNDER3,						//  
	BITMAP_FENRIR_FOOT_THUNDER4,						//  
	BITMAP_FENRIR_FOOT_THUNDER5,						//  
	BITMAP_SCOLPION_TAIL	,							//  
	BITMAP_DS_EFFECT		,							//  
	BITMAP_DS_SHOCK			,							//  
	BITMAP_MAGIC_CIRCLE		,							//  
	BITMAP_CLUD64			,							//   - 드레드피어 날개에서 피어나는 구름모양
	BITMAP_BLUE_BLUR		,							//  
	BITMAP_DEATH_SKILL		,							//
	BITMAP_ADV_SMOKE,									//   - 스모크.
	BITMAP_SHOTGUN          ,							//   - 샷건.
	BITMAP_POUNDING_BALL    ,							//   - 통통볼.
	BITMAP_HOLE             ,							//   - 홀 ( 뭔가 빨려들어가는 느낌 ).
	BITMAP_CHROME3          ,							//   - 세트에 사용되는 크롬 효과.
	BITMAP_CHROME6			,							//   - 히든칼리마 아이템 크롬 효과
	BITMAP_CHROME7			,							//   - 히든칼리마 아이템 크롬 효과
	BITMAP_CHROME_ENERGY	,							//   - 히든칼리마 아이템 크롬 효과
	BITMAP_CHROME_ENERGY2	,							//   - 에너지 이펙트 (흑백)
	BITMAP_3RDWING_LAYER	,							//	 - 파멸의 날개 (마검3차) 레이어 효과
	BITMAP_CHROME8			,							//   - 데비아스 크리스마스 트리 크롬 효과
#ifdef PJH_NEW_CHROME
	BITMAP_CHROME9			,							//   - 
#endif // PJH_NEW_CHROME
	BITMAP_BLUECHROME		,							//   - 블루크롬효과 (엔요정 추가메이스)
	BITMAP_PIERCING	        ,                           //  
	BITMAP_MAGIC_EMBLEM     ,							//   - 마법 문장.
	BITMAP_DARK_LOAD_SKIRT  ,							//   - 다크로드 스커트.
	BITMAP_SHOCK_WAVE       ,							//   - 다크호스 스킬에 사용.
#ifdef CSK_RAKLION_BOSS
	BITMAP_DAMAGE_01_MONO,								// 라클리온 보스 이펙트에 사용
#endif // CSK_RAKLION_BOSS
#ifdef CSK_ADD_SKILL_BLOWOFDESTRUCTION
	BITMAP_SWORD_EFFECT_MONO,			
#endif // CSK_ADD_SKILL_BLOWOFDESTRUCTION
#ifdef YDG_ADD_SKILL_FLAME_STRIKE
	BITMAP_FLAMESTANI		,							// 플레임 스트라이크 검기
#endif	// YDG_ADD_SKILL_FLAME_STRIKE
	BITMAP_TRUE_FIRE        ,							//   - 진짜불.
	BITMAP_TRUE_BLUE        ,							//   - 진짜불.
	BITMAP_JOINT_SPIRIT2    ,							//  
	BITMAP_PINK_WAVE        ,							//   - 분홍색 파형.
	BITMAP_WATERFALL_1      ,							//   - 폭포.
	BITMAP_WATERFALL_2      ,							//  
	BITMAP_WATERFALL_3      ,							//  
	BITMAP_WATERFALL_4      ,							//  
	BITMAP_WATERFALL_5      ,							//  
	BITMAP_IMPACT,										//   - 타르칸에 사용되는 빛.
	BITMAP_EFFECT			,							// 
	BITMAP_LIGHTING			,
	BITMAP_WALL_HEAVEN		,
	BITMAP_BERSERK_EFFECT	,							//	버서커 몬스터 효과
	BITMAP_BERSERK_WP_EFFECT,							//	버서커 몬스터 무기 효과	
	BITMAP_TWINTAIL_EFFECT	,							//	칸투르 트윈테일 몹 효과
	BITMAP_PRSONA_EFFECT	,							//	칸투르 페르소나 몹 효과
	BITMAP_PRSONA_EFFECT2	,							//	칸투르 페르소나 몹 효과2
	BITMAP_TWINTAIL_WATER	,							//	칸투르 트윈테일 몹 물방울 효과
	BITMAP_KANTURU_2ND_EFFECT1,							//  칸투르2차맵 이펙트 효과
	BITMAP_KANTURU_2ND_NPC1	,							//	칸투르2차맵 입장NPC 텍스쳐1
	BITMAP_KANTURU_2ND_NPC2	,							//	칸투르2차맵 입장NPC 텍스쳐2
	BITMAP_KANTURU_2ND_NPC3	,							//	칸투르2차맵 입장NPC 텍스쳐3
	BITMAP_BLADEHUNTER_EFFECT,							// 버서커 몬스터 효과
	BITMAP_JACK_1,										// 할로윈 이벤트 잭 머플러 앞면
	BITMAP_JACK_2,										// 할로윈 이벤트 잭 머플러 뒷면		
	BITMAP_SNOW_EFFECT_1,								// 크리스마스 이벤트 눈 이펙트1
	BITMAP_SNOW_EFFECT_2,								// 크리스마스 이벤트 눈 이펙트2
	BITMAP_GM_HAIR_1,									// GM 헤어
	BITMAP_GM_HAIR_3,
	BITMAP_GM_AURORA,									// GM 오로라
#ifdef CSK_FREE_TICKET
	// 자유입장권 아이템에 이펙토 효과 들어갈 텍스쳐 정의
	BITMAP_FREETICKET_R,								// 자유입장권 아이템 이펙트 효과
#endif // CSK_FREE_TICKET
#ifdef CSK_CHAOS_CARD
	// 카오스카드 아이템에 이펙트 효과 들어갈 텍스쳐 정의
	BITMAP_CHAOSCARD_R,									// 카오스카드 아이템 이펙트 효과
#endif // CSK_CHAOS_CARD
#ifdef CSK_RARE_ITEM
	// 희귀아이템에 이펙트 효과 들어갈 텍스쳐 정의
	BITMAP_RAREITEM1_R,									// 희귀아이템 이펙트 효과
	BITMAP_RAREITEM2_R,									// 희귀아이템 이펙트 효과
	BITMAP_RAREITEM3_R,									// 희귀아이템 이펙트 효과
	BITMAP_RAREITEM4_R,									// 희귀아이템 이펙트 효과
	BITMAP_RAREITEM5_R,									// 희귀아이템 이펙트 효과
#endif // CSK_RARE_ITEM
#ifdef CSK_LUCKY_CHARM									// 행운의 부적( 2007.02.22 )
	BITMAP_LUCKY_CHARM_EFFECT53,
#endif //CSK_LUCKY_CHARM
#ifdef CSK_LUCKY_SEAL									// 행운의 인장
	BITMAP_LUCKY_SEAL_EFFECT43,
	BITMAP_LUCKY_SEAL_EFFECT44,
	BITMAP_LUCKY_SEAL_EFFECT45,
	BITMAP_LUCKY_SEAL_EFFECT,							// 인장 아이템 사용했을 때 나타나는 효과
#endif //CSK_LUCKY_SEAL
#if defined PSW_CHARACTER_CARD || defined PBG_ADD_CHARACTERCARD
	BITMAP_CHARACTERCARD_R,								// 캐릭터 카드
#endif // defined PSW_CHARACTER_CARD || defined PBG_ADD_CHARACTERCARD
#ifdef PBG_ADD_CHARACTERCARD
	BITMAP_CHARACTERCARD_R_MA,							// 캐릭터 카드 마검용
	BITMAP_CHARACTERCARD_R_DA,							// 캐릭터 카드 다크용
#endif //PBG_ADD_CHARACTERCARD
#ifdef PBG_ADD_INGAMESHOP_UI_ITEMSHOP
	BITMAP_INGAMESHOP_FRAME,
	BITMAP_INGAMESHOP_FRAME_END = BITMAP_INGAMESHOP_FRAME + 20,
	BITMAP_INGAMESHOP_BANNER,							// 인게임샵 배너이미지
#endif //PBG_ADD_INGAMESHOP_UI_ITEMSHOP
#ifdef PSW_NEW_CHAOS_CARD
	BITMAP_NEWCHAOSCARD_GOLD_R,							// 카오스카드 골드
	BITMAP_NEWCHAOSCARD_RARE_R,							// 카오스카드 레어
	BITMAP_NEWCHAOSCARD_MINI_R,							// 카오스카드 레어
#endif // PSW_NEW_CHAOS_CARD	
#ifdef CSK_EVENT_CHERRYBLOSSOM
	BITMAP_CHERRYBLOSSOM_EVENT_PETAL,					// 벚꽃잎 
	BITMAP_CHERRYBLOSSOM_EVENT_FLOWER,                  // 벚꽃
#endif // CSK_EVENT_CHERRYBLOSSOM
	BITMAP_MAYA_BODY		,							//  칸투르3차 마야 보디 효과용.
	BITMAP_EXPLOTION_MONO	,							//  기존의 폭발 효과 텍스쳐의 흑백용
	BITMAP_KANTURU3RD_OBJECT,							//  칸투르3차의 오브젝트에 쓰이는 텍스쳐
	BITMAP_KANTURU_SUCCESS	,							//  칸투르3차의 성공시 텍스쳐
	BITMAP_KANTURU_FAILED	,							//  칸투르3차의 실패시 텍스쳐
	BITMAP_KANTURU_COUNTER	,							//  칸투르3차의 남아 있는 유저와 몬스터 수
	BITMAP_ENERGY_RING		,							//  칸투르3차의 마야전에서 몬스터 바닦 효과
	BITMAP_ENERGY_FIELD		,							//  칸투르3차의 마야전에서 몬스터 바닦 효과
	BITMAP_ITEM_EFFECT_DBSTONE_R	,					// 데스빔 나이트 불꽃 아이템 이펙트.
	BITMAP_ITEM_EFFECT_HELLHORN_R	,					// 헬 마이네 뿔 아이템 이펙트.
	BITMAP_ITEM_EFFECT_PFEATHER_R	,					// 어둠의 불사조 깃털 아이템 이펙트.
	BITMAP_ITEM_EFFECT_DEYE_R	,						// 심연의눈동자 아이템 이펙트.
	BITMAP_ITEM_NIGHT_3RDWING_R,						// 흑기사 3차 날개 이펙트
	BITMAP_FIRE_RED,
	BITMAP_FIRE_CURSEDLICH,								// 저주받은리치 불효과
	BITMAP_LEAF_TOTEMGOLEM,								// 토템골렘 잎파리
	BITMAP_SUMMON_IMPACT,								// 소환 시전시 바닥 무늬
	BITMAP_SUMMON_SAHAMUTT_EXPLOSION,					// 소환 사하무트 폭발 애니메이션 이펙트
	BITMAP_ROOLOFPAPER_EFFECT_R,						// 양피지 아이템 이펙트
	BITMAP_PIN_LIGHT,									// 가느다란 이펙트 모양
	BITMAP_DRAIN_LIFE_GHOST,							// 드레인 라이프 고스트 이펙트
	BITMAP_MAGIC_ZIN,									// 위크니스, 이너베이션 마법진.
#ifdef ASG_ADD_SKILL_BERSERKER
	BITMAP_ORORA,										// 버서커 버프 양손에서 회전하며 커지는 이펙트.
	BITMAP_LIGHT_MARKS,									// 버서커 버프 몸에서 원형의 빛나는 이펙트.
#endif	// ASG_ADD_SKILL_BERSERKER
	BITMAP_TARGET_POSITION_EFFECT1,						// 마우스 클릭 타겟 포지션 이팩트 텍스쳐 1
	BITMAP_TARGET_POSITION_EFFECT2,						// 마우스 클릭 타겟 포지션 이팩트 텍스쳐 1
	BITMAP_SHADOW_PAWN_RED,
	BITMAP_SHADOW_KINGHT_BLUE,
	BITMAP_SHADOW_ROOK_GREEN,
	BITMAP_SMOKELINE1,
	BITMAP_SMOKELINE2,
	BITMAP_SMOKELINE3,
	BITMAP_LIGHTNING_MEGA1,
	BITMAP_LIGHTNING_MEGA2,
	BITMAP_LIGHTNING_MEGA3,
	BITMAP_FIRE_HIK1,	// BITMAP_FIRE_HIK2는 BITMAP_FIRE_CURSEDLICH 임
	BITMAP_FIRE_HIK3,
#ifdef CSK_ADD_MAP_ICECITY
	BITMAP_FIRE_HIK1_MONO,
	BITMAP_FIRE_HIK2_MONO,
	BITMAP_FIRE_HIK3_MONO,

	BITMAP_SERUFAN_WAND_R,		// 세루판(보스몬스터) 무기쪽 효과 텍스쳐
	BITMAP_SERUFAN_ARM_R,		// 세루판(보스몬스터) 팔쪽 효과 텍스쳐
#endif // CSK_ADD_MAP_ICECITY
#ifdef LDS_RAKLION_ADDMONSTER_ICEWALKER	
	BITMAP_RAKLION_CLOUDS,			// 라클리온 아이스 워커 공격 이펙트 텍스쳐
#endif // LDS_RAKLION_ADDMONSTER_ICEWALKER
#ifdef ADD_RAKLION_IRON_KNIGHT
	BITMAP_IRONKNIGHT_BODY_BRIGHT,	// 아이언 나이트 이펙트 텍스쳐
#endif	// ADD_RAKLION_IRON_KNIGHT
#ifdef ADD_SOCKET_ITEM
	BITMAP_SOCKETSTAFF,				// 인베리알스테프 이팩트 텍스쳐
	BITMAP_LIGHTMARKS,				// 룬바스타드, 브레이브소드 이팩트 텍스쳐
#endif // ADD_SOCKET_ITEM
#ifdef LDK_ADD_PC4_GUARDIAN_EFFECT_IMAGE
	BITMAP_LIGHTMARKS_FOREIGN,				// 수호정령 이펙트 텍스쳐
#endif //LDK_ADD_PC4_GUARDIAN_EFFECT_IMAGE
#ifdef PJH_SEASON4_SPRITE_NEW_SKILL_RECOVER
	BITMAP_TWLIGHT,
#endif //PJH_SEASON4_SPRITE_NEW_SKILL_RECOVER
#ifdef PJH_SEASON4_DARK_NEW_SKILL_CAOTIC
	BITMAP_2LINE_GHOST,
#endif //PJH_SEASON4_DARK_NEW_SKILL_CAOTIC
#ifdef YDG_ADD_FIRECRACKER_ITEM
	BITMAP_FIRECRACKER0001,			// 새 폭죽 아이템
	BITMAP_FIRECRACKER0002,
	BITMAP_FIRECRACKER0003,
	BITMAP_FIRECRACKER0004,
	BITMAP_FIRECRACKER0005,
	BITMAP_FIRECRACKER0006,
	BITMAP_FIRECRACKER0007,
#endif	// YDG_ADD_FIRECRACKER_ITEM
#ifdef YDG_ADD_SANTA_MONSTER
	BITMAP_GOOD_SANTA,
	BITMAP_GOOD_SANTA_BAGGAGE,
#endif	// YDG_ADD_SANTA_MONSTER
#ifdef PBG_ADD_PKFIELD
	BITMAP_PKMON01,
	BITMAP_PKMON02,
	BITMAP_PKMON03,
	BITMAP_PKMON04,
	BITMAP_PKMON05,
	BITMAP_PKMON06,
	BITMAP_LAVAGIANT_FOOTPRINT_R,
	BITMAP_LAVAGIANT_FOOTPRINT_V,
	BITMAP_BUGBEAR_R,
#endif //PBG_ADD_PKFIELD
#ifdef PJH_ADD_PANDA_CHANGERING
	BITMAP_PANDABODY_R,
#endif //PJH_ADD_PANDA_CHANGERING
#ifdef YDG_ADD_DOPPELGANGER_MONSTER
	BITMAP_DOPPELGANGER_ICEWALKER0,		// 도플갱어 아이스워커 스킨
	BITMAP_DOPPELGANGER_ICEWALKER1,
	BITMAP_DOPPELGANGER_SNAKE01,		// 도플갱어 유충 스킨
#endif	// YDG_ADD_DOPPELGANGER_MONSTER
#ifdef YDG_ADD_DOPPELGANGER_NPC
	BITMAP_DOPPELGANGER_GOLDENBOX1,		// 도플갱어 최종보상상자 스킨1
	BITMAP_DOPPELGANGER_GOLDENBOX2,		// 도플갱어 최종보상상자 스킨2
#endif	// YDG_ADD_DOPPELGANGER_NPC
#ifdef LDK_ADD_EG_MONSTER_DEASULER
	BITMAP_DEASULER_CLOTH,
#endif //LDK_ADD_EG_MONSTER_DEASULER
#ifdef LDS_ADD_RESOURCE_FLARERED
	BITMAP_LIGHT_RED,
#endif // LDS_ADD_RESOURCE_FLARERED
#ifdef KJH_ADD_09SUMMER_EVENT
	BITMAP_GRA,
	BITMAP_RING_OF_GRADATION,
#endif // KJH_ADD_09SUMMER_EVENT
#ifdef PBG_ADD_RAYMOND_GUARDIANPRIEST_MONSTER_EFFECT
	BITMAP_RAYMOND_SWORD,
#endif //PBG_ADD_RAYMOND_GUARDIANPRIEST_MONSTER_EFFECT
#ifdef LDK_ADD_EG_MONSTER_ASSASSINMASTER
	BITMAP_ASSASSIN_EFFECT1,
#endif //LDK_ADD_EG_MONSTER_ASSASSINMASTER
#ifdef PBG_ADD_AURA_EFFECT
	BITMAP_AG_ADDITION_EFFECT,	//AG증가 이펙트
#endif //PBG_ADD_AURA_EFFECT
#ifdef LDK_ADD_INGAMESHOP_PACKAGE_BOX // 패키지 상자A-F
	BITMAP_PACKAGEBOX_BLUE,
	BITMAP_PACKAGEBOX_GOLD,
	BITMAP_PACKAGEBOX_GREEN,
	BITMAP_PACKAGEBOX_PUPLE,
	BITMAP_PACKAGEBOX_RED,
	BITMAP_PACKAGEBOX_SKY,
#endif //LDK_ADD_INGAMESHOP_PACKAGE_BOX
#ifdef LDS_ADD_INGAMESHOP_ITEM_PRIMIUMSERVICE6			// MODEL_POTION+114~119
	BITMAP_INGAMESHOP_PRIMIUM6,		
#endif // LDS_ADD_INGAMESHOP_ITEM_PRIMIUMSERVICE6		// MODEL_POTION+114~119
#ifdef LDS_ADD_INGAMESHOP_ITEM_COMMUTERTICKET4			// MODEL_POTION+126~129
	BITMAP_INGAMESHOP_COMMUTERTICKET4,		
#endif // LDS_ADD_INGAMESHOP_ITEM_COMMUTERTICKET4		// MODEL_POTION+126~129
#ifdef LDS_ADD_INGAMESHOP_ITEM_SIZECOMMUTERTICKET3		// MODEL_POTION+130~132
	BITMAP_INGAMESHOP_SIZECOMMUTERTICKET3,		
#endif // LDS_ADD_INGAMESHOP_ITEM_SIZECOMMUTERTICKET3	// MODEL_POTION+130~132
	BITMAP_INGAMESHOP_PASSCHAOSCASTLE,

#ifdef PJH_ADD_MINIMAP
	BITMAP_MINI_MAP_BEGIN,
	BITMAP_MINI_MAP_END = BITMAP_MINI_MAP_BEGIN + 10,
#endif //PJH_ADD_MINIMAP

#ifdef PBG_MOD_STAMINA_UI
	BITMAP_BLUE_STAMINA_FRAME,
	BITMAP_BLUE_STAMINA_GAUGE,
	BITMAP_BLUE_STAMINA_CAUTION,
#endif //PBG_MOD_STAMINA_UI
	
#ifdef LDK_ADD_14_15_GRADE_ITEM_MODEL
	BITMAP_RGB_MIX,
#endif //LDK_ADD_14_15_GRADE_ITEM_MODEL

#ifdef LJH_ADD_RARE_ITEM_TICKET_FROM_7_TO_12
	BITMAP_RAREITEM7,
	BITMAP_RAREITEM8,
	BITMAP_RAREITEM9,
	BITMAP_RAREITEM10,
	BITMAP_RAREITEM11,
	BITMAP_RAREITEM12,
#endif //LJH_ADD_RARE_ITEM_TICKET_FROM_7_TO_12
#ifdef LJH_ADD_FREE_TICKET_FOR_DOPPELGANGGER_BARCA_BARCA_7TH
	BITMAP_DOPPLEGANGGER_FREETICKET,
	BITMAP_BARCA_FREETICKET,
	BITMAP_BARCA7TH_FREETICKET,
#endif //LJH_ADD_FREE_TICKET_FOR_DOPPELGANGGER_BARCA_BARCA_7TH
	
#ifdef LJH_ADD_ITEMS_EQUIPPED_FROM_INVENTORY_SYSTEM_PART_2
	BITMAP_ORK_CHAM_LAYER_R,
	BITMAP_MAPLE_CHAM_LAYER_R,
	BITMAP_GOLDEN_ORK_CHAM_LAYER_R,
	BITMAP_GOLDEN_MAPLE_CHAM_LAYER_R,
#endif //LJH_ADD_ITEMS_EQUIPPED_FROM_INVENTORY_SYSTEM_PART_2

#ifdef PBG_ADD_NEWCHAR_MONK_ITEM
	BITMAP_SBUMB,
	BITMAP_FORCEPILLAR,
	BITMAP_SWORDEFF,
	BITMAP_DAMAGE1,
	BITMAP_GROUND_WIND,
	BITMAP_KWAVE2,
	BITMAP_DAMAGE2,
	BITMAP_VOLCANO_CORE,
	BITMAP_NCCAPE,
	BITMAP_MANTO01,
	BITMAP_MANTOE,
	BITMAP_GROUND_SMOKE,
	BITMAP_KNIGHTST_BLUE,
#endif //PBG_ADD_NEWCHAR_MONK_ITEM

#ifdef ASG_ADD_KARUTAN_MONSTERS
	BITMAP_BONE_SCORPION_SKIN_EFFECT,	// 본스콜피온 피부 이펙트
	BITMAP_KRYPTA_BALL_EFFECT,			// 크립타 피부 이펙트
	BITMAP_CONDRA_SKIN_EFFECT,			// 콘드라 피부 이펙트
	BITMAP_CONDRA_SKIN_EFFECT2,			// 콘드라 피부 이펙트2
	BITMAP_NARCONDRA_SKIN_EFFECT,		// 나르콘드라 피부 이펙트
	BITMAP_NARCONDRA_SKIN_EFFECT2,		// 나르콘드라 피부 이펙트2
	BITMAP_NARCONDRA_SKIN_EFFECT3,		// 나르콘드라 피부 이펙트3
#endif	// ASG_ADD_KARUTAN_MONSTERS
#ifdef ASG_ADD_KARUTAN_NPC
	BITMAP_VOLO_SKIN_EFFECT,			// 무기상인 볼로 피부 이펙트
#endif	// ASG_ADD_KARUTAN_NPC

#ifdef FIX_TEXTURE_MODEL_INDEX_CONFLICT
	BITMAP_EFFECT_TEXTURE_END = 33000,
#else	// FIX_TEXTURE_MODEL_INDEX_CONFLICT
	BITMAP_EFFECT_TEXTURE_END = 3000,
#endif	// FIX_TEXTURE_MODEL_INDEX_CONFLICT
	
	//////////////////////////////////////////////////////////////////////////
	//. etc. Texture 0x04FFFE ~ 0x7FFFFE
	//. 무조건 뒤에 붙이지 마시고 종류별로 해당 부분에 추가하세요!!

	//////////////////////////////////////////////////////////////////////////
	//. noname Textures 0x7FFFFF ~ 0x7FFFFFFF (2139095040개)
	//. 절대로 사용하지 말것!!! CGlobalBitmap에서 사용함
#ifdef FIX_TEXTURE_MODEL_INDEX_CONFLICT
	BITMAP_NONAMED_TEXTURES_BEGIN = 33001,
#else	// FIX_TEXTURE_MODEL_INDEX_CONFLICT
	BITMAP_NONAMED_TEXTURES_BEGIN = 3001,
#endif	// FIX_TEXTURE_MODEL_INDEX_CONFLICT
	BITMAP_NONAMED_TEXTURES_END = 0x7FFFFFFF,
};

#endif // _TEXTURE_INDEX_H_