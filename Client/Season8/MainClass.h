#pragma once

#define WSOCK_SEND	0x102E968

typedef void(__thiscall* pMainInitUser)(LPBYTE);
extern pMainInitUser MainInitUser;

typedef BYTE(__thiscall* pMainGetEffectStatus)(LPBYTE,DWORD);
extern pMainGetEffectStatus MainGetEffectStatus;

void myLoadTextures();
BOOL IsBlockedInterface();

void __FixElfBuff();
void __FixElfBuffEffect();

void _BlockInterface1();
void _BlockInterface2();
void _BlockInterface3();
void _BlockInterface4();

class TMainClass
{
public:
	TMainClass() {};
	virtual ~TMainClass() {};

	static void Init();

public:
	void Init_USERADDSTATS();
	int TMainClass::MySend(SOCKET s,const char* buf,int len,int flags);
	static int g_iUSER_ADD_STATS;

	int TMainClass::Decrypt(LPBYTE mainClass,LPBYTE serial,LPBYTE body,int bodysize);
	int TMainClass::Encrypt(LPBYTE mainClass,LPBYTE serial,LPBYTE body,int bodysize);
	BOOL MyWingCheck(DWORD ItemID);
	void LogDebugString(char* DebugString);

	LRESULT MySendMessage(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam);
};

extern TMainClass g_MainClass;

enum
{
	BUFF_ADD_ATTACK				=	1,
	BUFF_ADD_DEFENSE			=	2,
	BUFF_NPC_PHANTOM			=	3,
	BUFF_MANASHIELD				=	4,
	BUFF_ADD_CRITDMG			=	5,
	BUFF_INFINITY_ARROW			=	6,
	BUFF_AG_RECOVERYSPEED		=	7,
	BUFF_SWELL_LIFE				=	8,
	BUFF_SWELL_MANA				=	9,
	BUFF_POT_BLESS				=	10,
	BUFF_POT_SOUL				=	11,
	BUFF_REMOVEMAGIC			=	12,
	BUFF_GATESTATUS				=	13,
	BUFF_WATCHTOWER				=	14,
	BUFF_SIEGEGUILD1			=	15,
	BUFF_SIEGEGUILD2			=	16,
	BUFF_SIEGEGUILD3			=	17,
	BUFF_INVISIBILITY			=	18,
	BUFF_BATTLEROD				=	19,
	BUFF_CROWNREGISTER			=	20,
	BUFF_ALTAR_STATUS1			=	21,
	BUFF_ALTAR_STATUS2			=	22,
	BUFF_ALTAR_STATUS3			=	23,
	BUFF_ALTAR_STATUS4			=	24,
	BUFF_ALTAR_STATUS5			=	25,
	BUFF_ALTAR_STATUS6			=	26,
	BUFF_CRYWOLF_TRANSPARENCY	=	27,
	BUFF_GM						=	28,
	BUFF_SEAL_ASCENSION			=	29,
	BUFF_SEAL_WEALTH			=	30,
	BUFF_SEAL_SUSTENANCE		=	31,
	BUFF_IT_QUICKNESS			=	32,
	BUFF_IT_SUBLIMATION			=	33,
	BUFF_IT_PROTECTION			=	34,
	BUFF_JACK_BLESSING			=	35,
	BUFF_JACK_WRATH				=	36,
	BUFF_JACK_CRY				=	37,
	BUFF_JACK_FOOD				=	38,
	BUFF_JACK_DRINK				=	39,
	BUFF_SEAL_ASCENSION2		=	40,
	BUFF_SEAL_WEALTH2			=	41,
	BUFF_SEAL_SUSTENANCE2		=	42,
	BUFF_SEAL_MOBILITY			=	43,
	BUFF_SCROLL_QUICKNESS		=	44,
	BUFF_SCROLL_DEFENSE			=	45,
	BUFF_SCROLL_WRATH			=	46,
	BUFF_SCROLL_WIZARDRY		=	47,
	BUFF_SCROLL_HEALTH			=	48,
	BUFF_SCROLL_MANA			=	49,
	BUFF_ELIXIR_STR				=	50,
	BUFF_ELIXIR_DEX				=	51,
	BUFF_ELIXIR_VIT				=	52,
	BUFF_ELIXIR_ENE				=	53,
	BUFF_ELIXIR_COM				=	54,
	BUFF_POISON					=	55,
	BUFF_ICE					=	56,
	BUFF_ICEARROW				=	57,
	BUFF_DEFENSEDOWN			=	58,
	BUFF_ATTACKDOWN				=	59,
	BUFF_WIZARDRYDOWN			=	60,
	BUFF_STUN					=	61,
	BUFF_MAGICDEFENSE			=	62,
	BUFF_MONSTERMAGIC_RESIST	=	63,
	BUFF_MONCHEMISTRY_RESIST	=	64,
	BUFF_RESTRICTION			=	65,
	BUFF_CRYWOLF_STATUS1		=	66,
	BUFF_CRYWOLF_STATUS2		=	67,
	BUFF_CRYWOLF_STATUS3		=	68,
	BUFF_CRYWOLF_STATUS4		=	69,
	BUFF_CRYWOLF_STATUS5		=	70,
	BUFF_DAMAGEREFLECT			=	71,
	BUFF_SLEEP					=	72,
	BUFF_BLIND					=	73,
	BUFF_REQUIEM				=	74,
	BUFF_EXPLOSION				=	75,
	BUFF_WEAKNESS				=	76,
	BUFF_INNOVATION				=	77,
	BUFF_CHERRY_WINE			=	78,
	BUFF_CHERRY_RICECAKE		=	79,
	BUFF_CHERRY_FLOWERPETAL		=	80,
	BUFF_BERSERKER				=	81,
	BUFF_EXP_WIZARDRY			=	82,
	BUFF_FLAMESTRIKE			=	83,
	BUFF_GIGANTSTORM			=	84,
	BUFF_LIGHTNINGSHOCK			=	85,
	BUFF_COLD					=	86,
	BUFF_SEAL_HEALING			=	87,
	BUFF_SEAL_DIVINITY			=	88,
	BUFF_SCROLL_BATTLE			=	89,
	BUFF_SCROLL_STRENGTH		=	90,
	BUFF_SANTA_CHRISTMAS		=	91,
	BUFF_SANTA_HEALING			=	92,
	BUFF_SANTA_PROTECTION		=	93,
	BUFF_SANTA_STRENGHTHENER	=	94,
	BUFF_SANTA_DEFENSE			=	95,
	BUFF_SANTA_QUICKNESS		=	96,
	BUFF_SANTA_FORTUNE			=	97,
	BUFF_WATCH					=	98,
	BUFF_TALISMAN_GUARDIAN		=	99,
	BUFF_TALISMAN_ITEMPROTECT	=	100,
	BUFF_SEAL_ASCENSIONM		=	101,
	BUFF_SEAL_WEALTHM			=	102,
	BUFF_GLADIATOR_HONOR		=	103,
	BUFF_SEAL_STRENGTH			=	104,
	BUFF_ASCENSION				=	105,
	BUFF_PK_PENALTY				=	106,
	BUFF_PENALTY				=	107,
	BUFF_PENALTY2				=	108,
	BUFF_PARTYEXP				=	112,
	BUFF_MAXAG					=	113,
	BUFF_MAXSD					=	114,
	BUFF_VITALITY_MINIMUM		=	115,
	BUFF_VITALITY_LOW			=	116,
	BUFF_VITALITY_MEDIUM		=	117,
	BUFF_VITALITY_HIGH			=	118,
	BUFF_SEAL_WEALTH3			=	119,
	BUFF_BAN					=	120,
	BUFF_SCROLL_HEALING			=	121,
	BUFF_IGNORE_DEFENSE			=	129,
	BUFF_INCREASE_VIT			=	130,
	BUFF_INCREASE_DEFRATE		=	131,
	BUFF_DECREASE_DEFRATE		=	132,
	BUFF_INVINCIBILITY			=	133,
	BUFF_IRONDEFENSE			=	134,
	BUFF_SWELL_LIFE2			=	135,
	BUFF_SWELL_LIFE3			=	136,
	BUFF_BLEEDING				=	137,
	BUFF_EXP_WIZARDRY2			=	138,
	BUFF_EXP_WIZARDRY3			=	139,
	BUFF_MANASHIELD2			=	140,
	BUFF_DECREASE_ATTACKSPEED	=	141,
	BUFF_BLESS					=	142,
	BUFF_INFINITY_ARROW2		=	143,
	BUFF_BLIND2					=	144,
	BUFF_VAMPIRIC				=	145,
	BUFF_FREEZE					=	146,
	BUFF_EARTHBINDS				=	147,
	BUFF_ADD_CRITDMG2			=	148,
	BUFF_ADD_CRITDMG3			=	149,
	BUFF_BERSERKER2				=	150,
	BUFF_BERSERKER3				=	151,
	BUFF_BERSERKER4				=	152,
	BUFF_INCREASE_DEFRATE2		=	153,
	BUFF_INCREASE_DEFRATE3		=	154,
	BUFF_INCREASE_VIT2			=	155,
	BUFF_IGNORE_DEFENSE2		=	156,
	BUFF_FIRE					=	157,
	BUFF_FROST					=	158,
	BUFF__POISON				=	159,
	BUFF__POISON2				=	160,
	BUFF_BLESS2					=	161,
	BUFF_WEAKNESS2				=	162,
	BUFF_INNOVATION2			=	163,
	BUFF_DECREASE_DEFRATE2		=	164,
	BUFF_IRONDEFENSE2			=	165,
	BUFF_BLOODHOWL				=	166,
	BUFF_BLOODHOWL2				=	167,
	BUFF_PENETRATE_ARMOR		=	169,
	BUFF_FIRE2					=	174,
	BUFF_FROST2					=	175,
	BUFF_TORNADO				=	176,
	BUFF_BIND					=	177,
	BUFF_DARKNESS				=	178,
	BUFF_FIRETOWER				=	179,
	BUFF_WATERTOWER				=	180,
	BUFF_EARTHTOWER				=	181,
	BUFF_WINDTOWER				=	182,
	BUFF_DARKNESSTOWER			=	183,
	BUFF_RESURRECT_PENALTY		=	184,
	BUFF_EXP_VAULT				=	185,
	BUFF_CONFUSION				=	186,
	BUFF_EXPREWARD				=	187,
};