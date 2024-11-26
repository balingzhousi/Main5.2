// Event.h: interface for the CEvent class.
//////////////////////////////////////////////////////////////////////

#pragma once

#define XMAS_EVENT_TIME		60000

class CXmasEvent
{
public:
	CXmasEvent(void);
	~CXmasEvent(void);
	
	static CXmasEvent* GetInstance() { static CXmasEvent s_Instance; return &s_Instance; }

	void LoadXmasEvent();
	void LoadXmasEventEffect();
	void LoadXmasEventItem();
	void LoadXmasEventSound();

	void CreateXmasEventEffect(CHARACTER* pCha, OBJECT *pObj, int iType);

	void GenID();

public:
	int m_iEffectID;
};

#define g_XmasEvent	CXmasEvent::GetInstance()

class CNewYearsDayEvent
{
public:
	CNewYearsDayEvent();
	~CNewYearsDayEvent();

	static CNewYearsDayEvent* GetInstance() { static CNewYearsDayEvent s_Instance; return &s_Instance; }

	void LoadModel();
	void LoadSound();

	CHARACTER* CreateMonster(int iType, int iPosX, int iPosY, int iKey);
	bool MoveMonsterVisual(CHARACTER* c,OBJECT* o, BMD* b);
};

#define g_NewYearsDayEvent	CNewYearsDayEvent::GetInstance()

#ifdef CSK_FIX_BLUELUCKYBAG_MOVECOMMAND
class CBlueLuckyBagEvent
{
public:
	CBlueLuckyBagEvent();
	virtual ~CBlueLuckyBagEvent();
	static CBlueLuckyBagEvent* GetInstance() { static CBlueLuckyBagEvent s_Instance; return &s_Instance; }

	// 파란복주머니 시작
	void StartBlueLuckyBag();
	
	void CheckTime();

	// 파란복주머니 시작하고나서 10분안인가?
	bool IsEnableBlueLuckyBag();

private:
	bool m_bBlueLuckyBag;
	DWORD m_dwBlueLuckyBagTime;		// 파란복주머니 먹고 나면 10분간 측정할 시간 변수
	static const DWORD m_dwBlueLuckyBagCheckTime;
};

#define g_pBlueLuckyBagEvent	CBlueLuckyBagEvent::GetInstance()

#endif // CSK_FIX_BLUELUCKYBAG_MOVECOMMAND

#ifdef KJH_ADD_09SUMMER_EVENT
class C09SummerEvent
{
public:
	C09SummerEvent();
	~C09SummerEvent();

	static C09SummerEvent* GetInstance() { static C09SummerEvent s_Instance; return &s_Instance; }

	void LoadModel();
	void LoadSound();
	
	CHARACTER* CreateMonster(int iType, int iPosX, int iPosY, int iKey);
	bool MoveMonsterVisual(CHARACTER* c,OBJECT* o, BMD* b);
};

#define g_09SummerEvent		C09SummerEvent::GetInstance()
#endif // KJH_ADD_09SUMMER_EVENT