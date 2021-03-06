#ifndef _DMSGKEYROOT_H__
#define _DMSGKEYROOT_H__

#include <string.h>

#include "GameType.h"

/*
消息码定义结构:
	主消息码
		子消息码
//*/

#pragma pack(push, 1)

// 场景服到客户端的消息头
struct S2CMsgHead
{
	// 根消息码
	u16			m_wMainCmd;
	// 子消息码
	u16			m_wSubCmd;

	S2CMsgHead()
	{
		memset(this,0,sizeof(*this));
	}

};


enum RootCmd
{
	CMD_ROOT_ERROR			=	0x0001,		// 错误报警专用消息码
	CMD_ROOT_LOGIN			=	0x0002,		// 登录态消息码
	CMD_ROOT_GATEWAY		=	0x0003,		// 选择人物态消息码
	CMD_ROOT_SELECTACTOR	=	0x0004,		// 选择人物态消息码
	CMD_ROOT_MANAGER		=	0x0005,		// 管理员专用消息码（只有当服务器转到运行态，也就是说选定人物后，服务器方会处理）
	CMD_ROOT_CHAT			=	0x0006,		// 聊天消息管理消息码（只有当服务器转到运行态，也就是说选定人物后，服务器方会处理）
	CMD_ROOT_THING			=	0x0007,		// 实体定义
	CMD_ROOT_INTERACT		=	0x0008,		// 交互系统消息码专用
	CMD_ROOT_CONTAINER		=	0x0009,		// 容器类消息码
	CMD_ROOT_SKEP			=	0x000A,		// 虚拟物品篮消息码
	CMD_ROOT_RELATION		=	0x000B,		// 好友消息码
	CMD_ROOT_TEAM			=	0x000C,		// 组队消息码
	CMD_ROOT_TRADE			=	0x000D,		// 玩家间交易消息码
	CMD_ROOT_WORK_SKILL		=	0x000E,		// 生活技能系统
	CMD_ROOT_GAMEEVENT		=	0x000F,     // 游戏事件消息码
	CMD_ROOT_UNION			=	0x0010,		// 家族消息码
	CMD_ROOT_TITLE			=	0x0011,		// 称号消息码
	CMD_ROOT_MIND			=	0x0012,		// 商城消息码
	CMD_ROOT_BATTLE			=	0x0013,		// 战场消息码
	CMD_ROOT_SCRIPT_EVENT	=	0x0014,		// 脚本事件消息码
	CMD_ROOT_ROOM			=	0x0015,		// 房间消息码
	CMD_ROOT_MAX			=	0x0016,		// 最大ROOT消息码
};

/***************************************************************/
///////////////////// 场景服的房间消息码/////////////////////
// 主消息码必定是CMD_ROOT_ROOM
/***************************************************************/
// 添加buff
#define MSG_ROOM_ADD_BUFF									   1
struct SMsgRoomAddBuff_SC
{
	s8		bSitIndex;			// 宝石/棋盘位置编号
	u16		nBuffID;			// buffID
	s64		uidAdd;				// 添加者
};

// 移除buff
#define MSG_ROOM_REMOVE_BUFF									2
struct SMsgRoomRemoveBuff_SC
{
	s8		bSitIndex;			// 宝石/棋盘位置编号
	s64		uidRemove;			// 移除者
};

// 房间加载界面
#define MSG_ROOM_LOADING										3
//  s32	nBattleCreatureID;		// 战斗怪物ID
struct SMsgRoomLoading_SC
{
	u8		bType;				// 类型
	char		strName[13];		// 名称
	u8		bLevel;				// 等级
	u32		nBattleTimes;		// 战斗次数
	u32		nWinTimes;			// 胜利次数
	u32		bHeadId;			// 外观id
	u8		bPetHeadId;			// 宠物外观id
};

// 初始化关卡
#define MSG_ROOM_INIT_INSTANCE_INFO								4
struct SMsgRoomInitInstance_SC
{
	s16		nInstanceID;		// 关卡ID
	u16		nFinishFlag;		// 完成情况
	u16		nFirstBattleFlag;	// 第一次打怪信息
};

// 移动
#define MSG_ROOM_MOVE_ARRAY										5
struct SMsgRoomGotoInstanceStep_CS
{
	s32		nCreatureID;		// 怪物ID
};

// 退出
#define MSG_ROOM_EXIT_ROOM										6

// 更新进度
#define MSG_ROOM_UPDATA_INSTANCE_STEP							7
struct SMsgRoomUpdataInstanceStep_SC
{
	s32		nCreatureID;		// 战斗怪物ID
	s8		bIsWin;				// 赢还是输
};

// 刷新房间
#define MSG_ROOM_REFRESH_ROOM									8

/***************************************************************/
///////////////////// 场景服的实体类的消息码/////////////////////
// 主消息码必定是CMD_ROOT_THING
/***************************************************************/
// 通知客户端创建实体
#define MSG_PROP_CREATEENTITY									1
struct SMsgActionCreateNum_SC
{
	WORD		wCreateNum;			// 创建实体的数目
	// ...wCreateNum个(SMsgPropCreateEntity_SC+创建实体的上下文)
};
// 消息体
struct SMsgPropCreateEntity_SC
{
	s64	uidEntity;
	char		nEntityClass;	// 实体类型
	char		nIsHero;		// 是否客户端主角：1：是，2：否
	WORD		wContextLen;	// 创建实体现场上下文长度

	// ......................   // 创建现场
};

///////////////////////////////////////////////////////////////////
// 通知客户端删除实体
#define MSG_PROP_DESTROYENTITY									2
struct SMsgActionDestroyNum_SC
{
	WORD		wDestroyNum;		// 销毁实体的数目
	// ....wDestroyNum个SMsgPropDestroyEntity_SC
};
struct SMsgPropDestroyEntity_SC
{
	s64	uidEntity;
};

///////////////////////////////////////////////////////////////////
// 同步客户端实体属性
#define MSG_PROP_UPDATEPROP										3
struct SMsgPropUpdateProp_SC
{
	s64	uidEntity;
	char		nUpdateMode;	// 更新模式：1、单个数值属性更新，2：整个属性更新
	//       3：单个字符属性更新，4：多个数值属性更新
	// ......................   // 更新现场
};


///////////////////////////////////////////////////////////////////
// 冷却初始化数据
#define MSG_ACTION_INITCOLD									4
// 消息体
struct SMsgActionInitCold_SC
{
	struct SNodeContext
	{
		BYTE		byClassID;	// 冷却类ID	
		int			nColdID;	// 冷却ID
		int			nColdTime;	// 冷却剩余时间（毫秒）
	};
	// .................		// 多个SNodeContext
};


///////////////////////////////////////////////////////////////////

typedef struct tagWSPOINT
{
	WORD x;
	WORD y;
} WSPOINT;

// 生物移动消息
#define MSG_ACTION_MOVE											5

// 怪物移动事件
struct SMsgActionMonsterMove_SS
{
	POINT		ptFrom;			// 起点
	POINT		ptTo;			// 终点
};

struct SMsgActionMove_SS
{
	DWORD		dwPathLen;		// 路径长度
	// ......................   // 路径节点，WSPOINT * dwPathLen
};
// 消息体(包括所有移动路径点)
struct SMsgActionMove_SC
{
	DWORD		dwPathLen;		// 路径长度
	// ......................   // 路径节点，WSPOINT * dwPathLen
};

///////////////////////////////////////////////////////////////////
// 客户端操作移动消息
#define MSG_CS_ACTION_CLIENTOPT_MOVE								6
// 消息体
struct SMsgActionClientOptMove_CS
{
	DWORD		dwPathLen;		// 路径长度
	// ......................   // 路径节点，WSPOINT * dwPathLen
};

struct SMsgActionSCHead
{
	s64	uidEntity;			// Object的guid
};

//////////////////////////////////////////////////////////////////////////
// 停止移动消息
#define MSG_ACTION_STOPHERE										7
struct SMsgActionStopHere_SC
{
	WORD		ptHereX;		// X坐标
	WORD		ptHereY;		// Y坐标
	BYTE		byOri;			// 方向
	BYTE		byForceSync;	// 是否强制拉人 0:不强制， 1:强制
};

//////////////////////////////////////////////////////////////////////////
// 传送消息
#define MSG_ACTION_NEW_WORLD									8
struct SMsgActionNewWorld_SC
{
	DWORD		dwMapId;		// 地图Id
};

//////////////////////////////////////////////////////////////////////////
// 状态改变  比如 移动到 坐下
#define  MSG_ACTION_CHANAGEMOVESTYLE							9

/***************************************************************/
/////////////////// 通用物品类消息码 ////////////////////////////
/***************************************************************/
// 交换物品
#define MSG_ACTION_SWAP_ITEM									10
struct SMsgActionSwapItem_CS
{
	BYTE		byDestBag;	// 目标背包编号
	BYTE		byDestSlot;	// 目标背包中的格子
	BYTE		bySrcBag;	// 源背包编号
	BYTE		bySrcSlot;	// 源背包中的格子
};

// 分割堆叠物品
#define MSG_ACTION_SPLIT_ITEM									11
struct SMsgActionSplitItem_CS
{
	BYTE		bySrcBag;	// 源背包编号
	BYTE		bySrcSlot;	// 源背包中的格子
	BYTE		byDestBag;	// 目标背包编号
	BYTE		byDestSlot;	// 目标背包中的格子
	BYTE		byCount;	// 切分物品的个数
};

///////////////////////////////////////////////////////////////////
// 跟商人买物品
#define MSG_ACTION_BUYGOODS										12
// 消息体
struct SMsgActionBuyGoods_CS
{
	s64		uidNPC;		// NPC商人
	DWORD			dwSkepID;	// 通用物品篮ID

	s64		uidGoods;	// 买入物品
	int				nBuyNum;	// 买个数

	SMsgActionBuyGoods_CS()
	{
		memset(this, 0, sizeof(*this));
	}
};

///////////////////////////////////////////////////////////////////
// 出售物品
#define MSG_ACTION_SALEGOODS									13
// 消息体
struct SMsgActionSaleGoods_CS
{
	s64		uidGoods;	// 出售的物品
	int				nSaleNum;	// 出售的物品数量

	SMsgActionSaleGoods_CS()
	{
		memset(this, 0, sizeof(*this));
	}
};

///////////////////////////////////////////////////////////////////
// 点击NPC对话
#define MSG_ACTION_MEETNPC										14
// 消息体
struct SMsgActionMeetNPC_CS
{
	s64		uidNPC;		// NPC的UID
};

///////////////////////////////////////////////////////////////////
// 物品列表
#define MSG_ACTION_LIST_INVENTORY								15
struct SMsgActionListInventory_SC
{
	s64		uidNPC;		// NPC的UID
	WORD			wItemCount;	// 物品个数
	// .......................	NPC商人物品列表
};

struct SMsgActionSCInvItem
{
	WORD			wIndex;		// 物品位置
	int			lItemEntry;	// 物品Entry
};

///////////////////////////////////////////////////////////////////
// 添加buff
#define MSG_ACTION_WORLD_OBJECT_ADD_BUFF						16
struct SMsgActionWorldObjectAddBuff_SC
{
	//DWORD			dwIndex;				// 索引	
	u16				dwBuffId;				// buff ID	
	s32				dwTime;					// 剩余时间
	s64		uidAdd;					// 添加者
};

// 添加buff
#define MSG_ACTION_WORLD_OBJECT_REMOVE_BUFF						17
struct SMsgActionWorldObjectRemoveBuff_SC
{
	//DWORD			dwIndex;		// 索引	
	u16				dwBuffId;				// buff ID	
	s64		uidRemove;				// 删除者
};

/////////////////////////////////////////////////////////
//// 描  述：服务器发给客户端的运行态消息码
/////////////////////////////////////////////////////////
// 服务器发给客户端的消息头
struct SC_THING_HEAD : public S2CMsgHead
{
	SC_THING_HEAD(void)
	{
		m_wMainCmd = CMD_ROOT_THING;
		m_wSubCmd = 0;
	}
};

///////////////////////////////////////////////////////////////////
//发布多个私有thing
#define MSG_ACTION_MAIN_PRIVATE_MULTI							18
// 服务器通过ROOTTHING_SC_MAIN_PRIVATE_MULTI发给客户端的消息头
struct SC_THING_PRIVATE_MULTI_HEAD : public SC_THING_HEAD
{
	WORD	m_wThingClassID;		//打包的Thing类型
	WORD	m_wNum;					//Thing的个数

	//... m_wNum个: UID + wLen + Thing数据

	SC_THING_PRIVATE_MULTI_HEAD(void)
	{
		m_wSubCmd = MSG_ACTION_MAIN_PRIVATE_MULTI;

		m_wThingClassID = 0;
		m_wNum = 0;
	}
};


///////////////////////////////////////////////////////////////////
// 学习技能（客户端<-->服务器） 
#define MSG_ACTION_UPGRADE_SKILL								19
// 消息体
// s16 nSkillID;


///////////////////////////////////////////////////////////////////
// 使用技能（客户端-->服务器）
#define MSG_ACTION_USE_SKILL									20
// 技能准备（服务器->客户端）
#define MSG_ACTION_SKILL_PREPARE								21
// 技能释放（服务器->客户端）
#define MSG_ACTION_SKILL_CAST									22
// 消息体
struct SkillContext
{
	s64	uidTarget;		/// 使用技能时鼠标点击的位置上的实体对象
	s8			ptTargetTile;	/// 使用技能时鼠标点击的位置
	s16			nSkillId;		/// 技能ID

	SkillContext()	
	{
		memset(this, 0, sizeof(SkillContext)); 
	}
};

///////////////////////////////////////////////////////////////////
// 取消技能（客户端-->服务器）
#define MSG_ACTION_SKILL_CANCEL									23

///////////////////////////////////////////////////////////////////
// 技能中断（服务器->客户端）
#define MSG_ACTION_BREAK_SKILL									24
// 消息体
struct SMsgActionSkillResult_SC
{
	int			result;			/// 技能结果
};

///////////////////////////////////////////////////////////////////
// 伤害（服务器->服务器）
#define MSG_ACTION_DAMAGE										25
// 消息体

///////////////////////////////////////////////////////////////////
// 治疗（服务器->服务器）
#define MSG_ACTION_CURE											26
// 消息体

///////////////////////////////////////////////////////////////////
// 治疗（服务器->客户端）
#define MSG_ACTION_PREPARE_DAMAGE								27
// 治疗（服务器->客户端）
#define MSG_ACTION_PREPARE_CURE									28

// 更新玩家外观资源
#define MSG_ACTION_PLAYER_CLEAN_SHOW							29
// 场景服
// SC_MSG_CLEAN_SHOW_CONTEXT

// 怪物或佣兵死亡
#define MSG_ACTION_DIE											30
struct SMsgActionDie_SC
{
	s64		uidMuderer;		//谋杀者的uid
};

// 通知自己创建背包部件消息
#define MSG_ACTION_BUILDPACKET									31

// 通知自己创建装备栏部件消息
#define MSG_ACTION_BUILDEQUIPPACKET								32

///////////////////////////////////////////////////////////////////
// 使用药品
#define MSG_ACTION_USELEECHDOM									33
// 消息体
struct SMsgActionUseLeechdom_SS
{	
	s64	uidLeechdom;	// 药品uid
};

///////////////////////////////////////////////////////////////////
#define MSG_ACTION_COLD_WORK									34
// 冷却通知（服务器->客户端）
struct SMsgActionColdWork_SC
{
	DWORD	dwClassID;		// 冷却大类（技能，物品，聊天等）
	DWORD	dwColdID;		// 冷却ID
	s32		nColdTime;		// 冷却剩余时间（毫秒）
};
// 领取物品（客户端->服务器）
struct SMsgActionColdWork_CS
{
	DWORD	dwClassID;		// 冷却大类（技能，物品，聊天等）
	DWORD	dwColdID;		// 冷却ID	
};



//////////////////////////////////////////////////////////////////////////
// 保存技能快捷栏
#define MSG_ACTION_SHORTCUT										35
struct CS_MSG_SHORTCUT_CONTEXT
{
	BYTE	byHeroIndex;	//佣兵INDEX
	BYTE	byIndex;		//快捷栏索引
	DWORD	dwSkillInfo;	//(0~2位)技能或物品Id 3位(1:表示技能 0:表示物品)

	CS_MSG_SHORTCUT_CONTEXT()
	{
		memset(this, 0, sizeof(*this));
	}
};

///////////////////////////////////////////////////////////////////
// CS : 请求复活点复活
// SC : 复活倒计时
#define MSG_ACTION_ORIGINAL_RELIVE								36
// 消息体
struct SMsgActionOriginalRelive_SC
{
	POINT				coordinate;				//坐标
	int					nReliveCountDown;		//需要等待总秒数
	DWORD				dwReliveMapID;			//地图ID
	int					nTimes;					//次数

};

// 客户端复活点复活请求
struct SMsgActionOriginalRelive_CS
{

};

///////////////////////////////////////////////////////////////////
// 移除冷却
#define MSG_ACTION_COLD_REMOVE									37
// 冷却通知（服务器->客户端）
struct SMsgActionColdRemove_SC
{
	DWORD	dwClassID;		// 冷却大类（技能，物品，聊天等）
	DWORD	dwColdID;		// 冷却ID
};

///////////////////////////////////////////////////////////////////
// 实体复活
#define MSG_ACTION_RELIVE										38
// 消息体
struct SMsgActionRelive_SC
{
	//.................
};

///////////////////////////////////////////////////////////////////
// 打开宝箱
#define MSG_ACTION_OPENBOX										39
// 消息体
struct SMsgActionOpenBox_CS
{
	s64		uidBox;		// 宝箱
};

///////////////////////////////////////////////////////////////////
// 关闭宝箱
#define MSG_ACTION_CLOSEBOX										40
// 消息体
struct SMsgActionCloseBox_CS
{
	s64		uidBox;		// 宝箱
};

///////////////////////////////////////////////////////////////////
// 点击旗标实体
#define MSG_ACTION_CLICKMAST									41
// 消息体
struct SMsgActionClickMast_CS
{
	s64		uidMast;		// 旗标的uid
};

// 技能初始化（服务器->客户端）
#define MSG_ACTION_SKILL_INIT									42

/////////////////////////////////////////////////////////////////
// 创建物品篮
#define MSG_ACTION_CREATESKEP									43
// 现场为 SBuildSkepClientContext

// 技能失败信息（服务器->客户端）
#define MSG_ACTION_SKILL_FAILED									44
// 消息体
struct SMsgActionSkillFaile_SC
{
	DWORD		dwResult;			// 失败原因
};

// 技能失败信息（服务器->客户端）
#define MSG_ACTION_CHANGE_FIGHT_STATUS							45
// 消息体
struct SMsgActionChangeFightStatus_SC
{
	s64	guid;				// 目标
	BOOL		bStatus;			// 改变后状态
};

// 更新技能点（服务器->客户端）
#define MSG_ACTION_UPDATA_SKILL_POINT							46

// 切换状态（CS or SC）
#define MSG_ACTION_SWITCHSTATE									47
// 消息体
struct SMsgActionSwitchState_SC
{
	SMsgActionSwitchState_SC()
	{
		byState = 0;
		byLastState = 0;
		uidGood = 0;
	}
	BYTE		byState;			// 状态(移动、站立、打坐等状态)
	BYTE		byLastState;		// 之前的状态
	s64	uidGood;			// 物品ID（用于状态改变为骑乘状态时，传给客户端的物品ID）
};

struct SMsgActionSwitchState_CS
{
	SMsgActionSwitchState_CS()
	{
		byState = 0;
		/// uidGood = 0;
	}
	BYTE		byState;			// 状态(移动、站立、打坐等状态)
	/// s64	uidGood;			// 物品ID（用于状态改变为骑乘状态时，传给客户端的物品ID）
};

// 通知客户端播音效
#define MSG_ACTION_PLAYSOUND									48
struct SMsgActionPlaySound_SS
{
	DWORD		dwSoundId;			// 音效Id
	BYTE		bySendType;			// 0:单播 1:九宫格广播
};

struct SMsgActionPlaySound_SC
{
	DWORD		dwSoundId;			// 音效Id
};

// 使用技能（服务器-->服务器）
#define MSG_ACTION_USE_SKILL_UNCHECK							49
// 消息体
// struct SkillContext2

//////////////////////////////////////////////////////////////////////////
//////////////////////////////ContianerServer///////////////////////////////
//////////////////////////////////////////////////////////////////////////
// 容器服务器相关消息包头结构
struct SContainerMsgHead : public S2CMsgHead
{
	SContainerMsgHead(WORD wMsg)
	{
		m_wMainCmd = CMD_ROOT_CONTAINER;
		m_wSubCmd = wMsg;
	}
};

// 服务器通过ROOTTHING_SC_MAIN_ACTION发给客户端的消息头
struct SC_THING_ACTION_HEAD : public SC_THING_HEAD
{
	s64		m_uidThing;

	SC_THING_ACTION_HEAD(void)
	{
		m_wMainCmd = CMD_ROOT_THING;
		m_wSubCmd = 0;
		m_uidThing = 0;
	}
};

struct SMsgSkepCSCHead
{
	DWORD			dwSkepID;	// 虚拟物品栏Id
};

// 玩家间交易服务器相关消息包头结构
struct STradeMsgHead : public S2CMsgHead
{
	STradeMsgHead(WORD wMsg)
	{
		m_wMainCmd = CMD_ROOT_TRADE;
		m_wSubCmd = wMsg;
	}
};

///////////////////////////////////////////////////////////////////
// 切换PK模式
#define MSG_ACTION_SWITCHPKMODE									50
// 消息体
struct SMsgActionSwitchPKMode_CS
{
	int				nPKMode;	// PK模式
};

struct SMsgActionSwitchPKMode_SC
{
	int				nPKMode;	// PK模式
};

///////////////////////////////////////////////////////////////////
// 修改PK名字颜色
#define MSG_ACTION_PKNAMECOLOR									51
// 消息体
struct SMsgActionPKNameColor_SC
{
	BYTE				nPKColor;	// 名字颜色
};

///////////////////////////////////////////////////////////////////
// 修理装备
#define MSG_ACTION_REPAIREQUIP									52
// 消息体
struct SMsgActionRepairEquip_CS
{
	s64		uidEquip;		// 装备
	// 如果为INVALID_UID，则表示修理装备栏所有装备

	BYTE			byPacketSkep;	// 包裹栏
	// 如果为1，则表示装备在包裹栏，反之装备栏
};

///////////////////////////////////////////////////////////////////
// npc 头顶标识符
#define MSG_ACTION_NPC_HEAD_FLAG								53
struct SMsgActionNpcHeadFlag_SC
{
	/************************************************************************
	优先级	显示类型	说明
	1（高）	黄色问号	可交付一般任务
	2			蓝色问号	可交付每日任务
	3			黄色叹号	可获取一般任务
	4			蓝色叹号	可获取每日任务
	5			白色问号	未完成任务
	************************************************************************/
	enum
	{
		TASKSTATE_NORMAL = 0,						//
		TASKSTATE_CAN_COMPLETE,					// 可完成; 可交付一般任务
		TASKSTATE_CAN_COMPLETE_DAILY,		// 可交付每日任务
		TASKSTATE_CAN_ACCEPTE,						// 可接; 可获取一般任务
		TASKSTATE_CAN_ACCEPTE_DAILY,			// 可接每日任务; 
		TASKSTATE_ACCEPTED,							// 已经接
		TASKSTATE_NUM,				
	};

	s64	uidMonsterID;		// 怪物/Npc的guid
	BYTE		byState;						// 取值范围：[TASKSTATE_NORMAL,TASKSTATE_NUM)

	SMsgActionNpcHeadFlag_SC()
	{
		memset(this,0,sizeof(SMsgActionNpcHeadFlag_SC));
	}
};

///////////////////////////////////////////////////////////////////
// 开始进度条状态
#define MSG_ACTION_STARTPROGRESS								54
// 消息体
struct SMsgActionStartProgress_CS
{
	BYTE byBarType;					// 进度条类型
	int nTime;						// 持续时间
	char szName[32];				// 进度条的名字

};
struct SMsgActionStartProgress_SC
{
	s64 m_uidMaster;			// 进度条的主人
	BYTE	 byBarType;				// 进度条类型
	int	 lActionId;				// 动作Id
	int nTime;						// 持续时间
	char szName[32];				// 进度条的名字
	char szParentWndName[64];		// 父窗口的名字
	int x;							// 窗口左上x坐标（像素单位）
	int y;							// 窗口左上y坐标（像素单位）
	int width;						// 窗口的宽（像素单位）
	int height;						// 窗口的高（像素单位）
};

///////////////////////////////////////////////////////////////////
// 结束进度条状态
#define MSG_ACTION_ENDPROGRESS									55
// 消息体
struct SMsgActionEndProgress_CS
{

};

struct SMsgActionEndProgress_SC
{
	s64 m_uidMaster;
	int		 nEndReason;			// 结束原因
};

// 场景盒子状态
#define MSG_ACTION_BOX_STATE_FLAG								56
struct SMsgActionBoxStateFlag_SC
{
	enum
	{
		ABSF_INVAILD = 0,		// 失效状态
		ABSF_ACTIVE,			// 激活状态
		ABSF_NUM,
	};
	
	int		lBoxID;			// 场景盒子的guid
	int		lType;			// 类型
	BYTE		byState;		// 取值范围：[ABSF_INVAILD,ABSF_NUM)

	SMsgActionBoxStateFlag_SC()
	{
		memset(this,0,sizeof(SMsgActionBoxStateFlag_SC));
	}
};

// 使用药品结果
#define MSG_ACTION_USELEECHDOMRESULT								57
struct SMsgActionUseLeechdomResult_SC
{
	enum UseLeechdomResult
	{
		USELEECHDOMRESULT_FAIL,		// 使用药品失败
		USELEECHDOMRESULT_SUCCESS,	// 使用药品成功
	};
	BYTE		byResult;		// 使用药品结果
};

// 错误码通道
#define MSG_ACTION_ERRORCODECHUNNEL									58
struct SMsgActionErrorCodeChunnel_SC
{
	BYTE		byErrorType;		// 错误类型
	WORD		wErrorCode;			// 错误码
	WORD		wErrorDespLen;		// 错误描述字符串长度
	//....错误描述
};

#define MSG_ACTION_CHANGELOCATION_FOR_SKILL							59
struct SMsgActionChangeLocationForSkill_SC
{
	POINT		ptTargetPos;		// 目标位置
	BYTE		byFlag;				// 技能改变位置类型
	int			nCostTime;			// 移动至目标点所需时间
};

///////////////////////////////////////////////////////////////////
// 丢物品
#define MSG_ACTION_THROWGOODS										60
// 消息体
struct SMsgActionThrowGoods_CS
{
	s64		uidGoods;
};

//////////////////////////////////////////////////////////////////
// 小退,切换角色
#define MSG_ACTION_CHANGEACTOR										61
// 消息体
struct SMsgActionChangeActor_CS
{

};
//玩家小退的消息结构
struct SC_Select : public SC_THING_HEAD
{
	DWORD ValidationCode[4];		//验证码，用于登陆服

	SC_Select()
	{
		m_wSubCmd = MSG_ACTION_CHANGEACTOR;
		memset(ValidationCode, 0, sizeof(ValidationCode));
	}
};


//////////////////////////////////////////////////////////////////
// 闪电链
#define MSG_ACTION_SKILL_CAST_CHAIN									62
// 消息体
struct SkillChainContext
{
	s64	uidTarget;		/// 使用技能时鼠标点击的位置上的实体对象
	POINT		ptTargetTile;	/// 使用技能时鼠标点击的位置
	s16			skillId;		/// 技能ID
	int			result;			/// 技能结果

	BYTE		bChainCount;	/// 闪电链目标数量
	// ..... s64	uidChainTarget; /// 闪电链目标 多个

	SkillChainContext()	
	{
		uidTarget		= 0;
		ptTargetTile.x	= 0;
		ptTargetTile.y	= 0;
		skillId			= 0;
		result			= 0;
		bChainCount		= 0;
	}
};

//////////////////////////////////////////////////////////////////////////
// 询问是否接受别人复活
#define MSG_ACTION_ASK_RELIVE										63
// 消息体
struct SMsgActionAskRelive
{
	s64		uidDoctor;		// 医生的GUID
	int				nFlagIndex;		// 复活标识

	SMsgActionAskRelive(void)
	{
		memset( this, 0, sizeof(SMsgActionAskRelive) );
	}
};

// 答复是否接受复活
#define MSG_ACTION_ANSWER_RELIVE									64
// 消息体
struct SMsgActionAnswerRelive
{
	BYTE			byAnswer;		// 1:接受 0:拒绝
	int				nFlagIndex;		// 复活标识

	SMsgActionAnswerRelive(void)
	{
		memset( this, 0, sizeof(SMsgActionAnswerRelive) );
	}
};

//////////////////////////////////////////////////////////////////////////
// 附加属性飘字（服务器->客户端）
#define MSG_ACTION_FEW_TEXT											65
// 消息体
struct MsgActionFewText
{
	s64			tarUID;			/// 需要飘字的人
	WORD				ProNum;			/// 属性ID
	int					nValue;			/// 数值
};


//////////////////////////////////////////////////////////////////////////
// 重置副本
#define MSG_ACTION_RESET_ECTYPE										66
// 消息体
struct MsgActionResetEctype
{
	// 暂无成员
};

//////////////////////////////////////////////////////////////////////////
// 冷却通知（服务器->客户端）
#define MSG_ACTION_SHARE_COLD_WORK									67
//struct SMsgActionColdWork_SC

//////////////////////////////////////////////////////////////////////////
// 取消小退
#define MSG_ACTION_CANCEL_CHANGEACTOR								68
// 消息体
struct SMsgActionCancelChangeActor_CS
{

};

//////////////////////////////////////////////////////////////////////////
// 小退开始倒计时
#define MSG_ACTION_CHANGEACTOR_INTERVAL								69
// 消息体
struct SMsgActionChangeActorInterval_CS
{

};

//////////////////////////////////////////////////////////////////////////
// 立即小退
#define MSG_ACTION_CHANGEACTOR_RIGHTNOW								70
// 消息体
struct SMsgActionChangeActorRightNow_CS
{

};

//////////////////////////////////////////////////////////////////////////
// 发送npc信息
#define MSG_ACTION_SYNC_NPC_INFO									71
// 消息体
struct SMsgActionSyncNpcInfo_CS
{
	struct SNpcInfo
	{
		int	lID; 
		POINT	position;
		char	szName[32];	

		SNpcInfo()
		{
			memset(this,0,sizeof(*this));
		}
	};

	BYTE	byPackNum;		// 本次发送总批数
	BYTE	byPackIndex;	// 当前第几批
	int	lMapID;			// 地图ID
	BYTE	byNum;			// npc 数量
	// ...  npc_data;		// 数据
};

//////////////////////////////////////////////////////////////////////////
// 打开Npc技能学习面板
#define MSG_OPEN_NPC_TRAINSKILL										72
// 消息体
struct SMsgActionTalkToTrainSkillNpc_SC
{
	s64	llNpcUID;		// Npc guid
};

//////////////////////////////////////////////////////////////////////////
// 通过NPC学习技能（服务器-->客户端）
#define MSG_LEARN_SKILL_FROM_NPC									73
// 消息体
struct SMsgActionLearnSkillFromNpc_CS
{
	s64	llNpcUID;		// Npc guid
	WORD		wSkillID;		// 技能id
};

//////////////////////////////////////////////////////////////////////////
// 遗忘技能（服务器-->客户端） 
#define MSG_ACTION_FORGET_SKILL										74
// 消息体
// WORD wSkillId;		/// 技能ID

//////////////////////////////////////////////////////////////////////////
// 遗忘所有潜能（服务器-->客户端） 
#define MSG_ACTION_FORGET_ALL_SKILL									75
// 消息体（无）


// 设置目标GUID
#define MSG_ACTION_SET_TARGET										76
// 消息体
struct SMsgActionSetTarget
{
	s64		uidTarget;

	SMsgActionSetTarget(void)
	{
		memset( this, 0, sizeof(SMsgActionSetTarget) );
	}
};

//////////////////////////////////////////////////////////////////////////
// 设置召唤兽模式（服务器<-->客户端） 
#define MSG_ACTION_CALLANIMAL_AIMODE								77
// 消息体
// BYTE bMode;			// AI模式

//////////////////////////////////////////////////////////////////////////
// 召唤兽攻击（客户端-->服务器） 
#define MSG_ACTION_CALLANIMAL_ATTACK								78
// 消息体
// s64	tarUID;    // 目标Guid

//////////////////////////////////////////////////////////////////////////
// 解散某只召唤兽（客户端-->服务器） 
#define MSG_ACTION_FREE_CALLANIMAL									79
// 消息体
// s64	tarUID;    // 召唤兽Guid

///////////////////////////////////////////////////////////////////
// 点击场景物件
#define MSG_ACTION_CLICK_GAMEOBJ									80
// 消息体
struct SMsgActionClickGameObj_CS
{
	s64		uidGameObj;		// GameObj的UID

	SMsgActionClickGameObj_CS(void)
	{
		memset( this, 0, sizeof(*this) );
	}
};

//////////////////////////////////////////////////////////////////////////
// 同步服务器时钟
#define MSG_ACTION_SYNC_SERVERTICKS									81
// 消息体
struct SMsgActionSyncServerTicks_SC
{
	DWORD			dwServerTicks;	// 玩家登录后流失的时间(ms)

	SMsgActionSyncServerTicks_SC(void)
	{
		memset( this, 0, sizeof(*this) );
	}
};

//////////////////////////////////////////////////////////////////////////
// 添加buff
#define MSG_ACTION_WORLD_OBJECT_INIT_BUFF							82

// 查看别人装备（服务器->客户端）
#define MSG_ACTION_LOOK_ACTOR_EQUIP									83

// 请求创建客户端仓库部件消息（客户端->服务器）
// 通知自己创建仓库部件消息（服务器->客户端）
#define MSG_ACTION_BUILDSTORAGE										84

// 通知客户端打开仓库界面（服务器->客户端）
#define MSG_ACTION_OPENSTORAGE										85

// 更新气点（服务器->客户端）
#define MSG_ACTION_UPDATA_AIR_POINT									86

// 整理普通包裹(服务器->客户端)
#define MSG_ACTION_SORT_PACKET										87
struct SMsgActionSortedGoodsInfo_CS
{
	s64		uidGoods;		//被重排的物品的GUID
	BYTE			byPacketIdx;	//重排之后在哪个背包中
	BYTE			byLoc;			//重排之后在容器中的位置
};
struct SMsgActionSortedInfo_CS
{
	BYTE			bySortedNum;	//重排物品的数量
};

// 整理任务包裹(服务器->客户端)
#define MSG_ACTION_SORT_TASK_PACKET									88

// 请求延迟删除实体(服务器->服务器)
#define MSG_ACTION_RELAY_DELETE_ENTITY								89
struct SMsgActionRelayDeleteEntity_SS
{
	s64		uidEntity;			// 实体UID
};

//怪物无视障碍移动
#define MSG_ACTION_IGNORE_OBSTALE_MOVE								113


////////////////////////////////////////////////////////////////////////////////////
/// 宠物相关
/// 
/// 通知自己创建宠物装备栏部件消息
/// 消息本身为S2CMsgHead
#define MSG_ACTION_BUILD_PET_EQUIPPACKET							114
struct SMsgActionBuildHeroEquipPacket_SC
{
	s64		uidHero;		// 佣兵UID
};

/// 宠物列表（服务器->客户端）
#define MSG_ACTION_PET_DATA_LIST									115

/// 宠物操作（客户端->服务器，服务器->客户端），包括了出战、休息、放弃
#define MSG_ACTION_PET_OP											116

/// 宠物修改名称（客户端->服务器，服务器->客户端）
#define MSG_ACTION_PET_MOD_NAME										117

/// 宠物修改名称广播给客户端（服务器->客户端）
#define MSG_ACTION_PET_NAME											118

/// 设置宠物AI（服务器->客户端
#define MSG_ACTION_SET_PET_AI										119
////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////

// 使用技能（客户端-->服务器）
#define MSG_ACTION_USE_SKILL_PET									120

//////////////////////////////////////////////////////////////////////////
// 学习技能（服务器-->客户端） 
#define MSG_ACTION_UPGRADE_SKILL_PET								121

//////////////////////////////////////////////////////////////////////////
// 遗忘技能（服务器-->客户端） 
#define MSG_ACTION_FORGET_SKILL_PET									122
// 消息体
// int lPetID;			/// 宠物ID
// WORD wSkillId;		/// 技能ID

//////////////////////////////////////////////////////////////////////////
// 遗忘所有潜能（服务器-->客户端） 
#define MSG_ACTION_FORGET_ALL_SKILL_PET								123
// 消息体（无）

//////////////////////////////////////////////////////////////////////////
// 冷却初始化数据
#define MSG_ACTION_INITCOLD_PET										124
// 消息体
//struct SMsgActionInitCold_SC

//////////////////////////////////////////////////////////////////////////
// 冷却通知（服务器->客户端）
#define MSG_ACTION_SHARE_COLD_WORK_PET								125
//struct SMsgActionColdWork_SC

//////////////////////////////////////////////////////////////////////////
// 冷却通知（服务器->客户端）
#define MSG_ACTION_COLD_WORK_PET									126
//struct SMsgActionColdWork_SC

// 技能初始化（服务器->客户端）
#define MSG_ACTION_SKILL_INIT_PET									127


/// 镶嵌套装宝石到装备上（客户端->服务器）
#define MSG_MAKE_SUIT_STONE_EQUIP									128
struct CMsgMakeSuitStoneEquipCmd
{
	s64 uidEquip;			/// 装备UID
	s64 uidStone;			/// 套装宝石UID

	CMsgMakeSuitStoneEquipCmd()
	{
		uidEquip = 0;
		uidStone = 0;
	}
};

/// 镶嵌套装宝石到装备上结果（服务器->客户端）
#define MSG_RET_MAKE_SUIT_STONE_EQUIP									129
struct CMsgRetMakeSuitStoneEquipCmd
{
	BYTE byRet;					/// 结果（0：失败，1：成功）
	BYTE byTp;					/// 类型（0：镶嵌，1：升级，2：取下宝石）

	CMsgRetMakeSuitStoneEquipCmd()
	{
		byRet = 0;
		byTp = 0;
	}
};

/// 镶嵌套装宝石界面打开（服务器->客户端）
#define MSG_OPEN_MAKE_SUIT_STONE_EQUIP									130
struct CMsgOpenMakeSuitStoneEquipCmd
{
	BYTE byTp;				/// 类型（0：镶嵌，1：升级，2：取下宝石）

	CMsgOpenMakeSuitStoneEquipCmd()
	{
		byTp = 0;
	}
};

/// 套装升级（客户端->服务器）
#define MSG_UPGRADE_SUIT_EQUIP											131
struct CMsgUpgradeSuitEquipCmd
{
	s64 uidEquip;			/// 装备UID

	CMsgUpgradeSuitEquipCmd()
	{
		uidEquip = 0;
	}
};

/// 套装宝石取下（客户端->服务器）
#define MSG_TAKE_DOWN_SUIT_STONE										132
struct CMsgTakeDownSuitStoneCmd
{
	s64 uidEquip;			/// 装备UID

	CMsgTakeDownSuitStoneCmd()
	{
		uidEquip = 0;
	}
};

// 解体（客户端-->服务器）
#define MSG_ACTION_RELEASE_PET											133

// 开启天赋系（客户端<-->服务器）
#define MSG_ACTION_UPDATA_QN_GROUP										134
// 结构体 
// BYTE	 byGroup;			/// 开启系

// 移除buff（客户端-->服务器）
#define MSG_ACTION_REMOVE_BUFF_REQUEST									135
// 结构体 
// WORD	 wBuffID;			/// buffID

/// 装备随机属性鉴定
#define MSG_ACTION_APPRAISE_RANDOM_EFFECT								136
struct CMsgActionAppraiseRandomEffectCmd
{
	s64 uidEquip;			/// 装备UID
	s64 uidAppraise;		/// 鉴定卷轴UID

	CMsgActionAppraiseRandomEffectCmd()
	{
		uidEquip = 0;
		uidAppraise = 0;
	}
};

///////////////////////////////////////////////////////////////////
// 服务器广播玩家移动消息给九宫格内其他玩家
#define MSG_SC_ACTION_CLIENT_MOVE										138
// 消息体
struct SMsgActionClientMove_SC
{
	WSPOINT		ptFrom;			// 起点
	WSPOINT		ptTo;			// 终点
};

/// 网络ping包
#define MSG_ACTION_NETWORK_PING											139
struct SMsgActionNetworkPingCmd
{
	// ping包索引
	DWORD dwPingIndex;
};

//////////////////////////////////////////////////////////////////////////
// 退出战斗（客户端-->服务器）
#define MSG_ACTION_EXIT_BATTLE											140

//////////////////////////////////////////////////////////////////////////
// 请求战斗（客户端-->服务器）
#define MSG_ACTION_REQ_BATTLE											141
struct SMsgActionReqBattle
{
	s32	nMatchType;			// 匹配类型

	SMsgActionReqBattle()
	{
		nMatchType = 0;
	}
};

//////////////////////////////////////////////////////////////////////////
// 请求创建佣兵（客户端-->服务器）
#define MSG_ACTION_REQ_NEWHERO											142
struct SMsgActionNewHero
{
	s32 nHeroTemplateID;		// 英雄模板ID
	s32 nHeroLv;				// 英雄等级

	SMsgActionNewHero()
	{
		nHeroTemplateID = 0;
		nHeroLv = 0;
	}
};

//////////////////////////////////////////////////////////////////////////
// 请求退出战斗（客户端-->服务器）
#define MSG_ACTION_REQ_EXIT_ROOM										 143

//////////////////////////////////////////////////////////////////////////
// 请求交换宝石（客户端-->服务器）
#define MSG_ACTION_SWAP_GEM												 144
struct SMsgActionSwapGem
{
	s8 nSwapSrc;		// 交换源
	s8 nSwapDst;		// 交换目标

	SMsgActionSwapGem()
	{
		nSwapSrc = 0;
		nSwapDst = 0;
	}
};
// 请求交换宝石（服务器-->客户端）
struct SMsgActionSwapGemSvr
{
	s64 nSwapUID;		// 交换者UID
	s8 nSwapSrc;			// 交换源
	s8 nSwapDst;			// 交换目标
	// s8 bGemType;			// 宝石 * n

	SMsgActionSwapGemSvr()
	{
		nSwapUID = 0;
		nSwapSrc = 0;
		nSwapDst = 0;
	}
};

//////////////////////////////////////////////////////////////////////////
// 宝石棋盘创建（服务器-->客户端）
#define MSG_ACTION_NEW_GEM_MAP											  145

//////////////////////////////////////////////////////////////////////////
// 开始加载资源（服务器-->客户端）
#define MSG_ACTION_BEGIN_LOAD											  146

//////////////////////////////////////////////////////////////////////////
// 游戏开始（服务器<-->客户端）
#define MSG_ACTION_ROOM_BEGIN											  147
struct SMsgActionRoomBegin
{
	char	arrSitIDTurns[6];		// 游戏开始时,每个座位上的玩家的先后手顺序

	SMsgActionRoomBegin()
	{
		memset(arrSitIDTurns, -1, sizeof(arrSitIDTurns));
	}
};

//////////////////////////////////////////////////////////////////////////
// 回合结束（服务器-->客户端）
#define MSG_ACTION_ROUND_END											  148
// 回合结束（服务器-->客户端）
struct SMsgActionRoundEnd
{
	s8 nUseTime;		// 花费时间

	SMsgActionRoundEnd()
	{
		nUseTime = 0;
	}
};

//////////////////////////////////////////////////////////////////////////
// 同步加载进度（服务器<-->客户端）
#define MSG_ACTION_SYNCLOAD												  149
// 同步加载进度（服务器<--客户端）
struct SMsgActionSyncLoad_CS
{
	u8	byLoadState;	// 加载进度

	SMsgActionSyncLoad_CS()
	{
		byLoadState = 0;
	}
};
// 同步加载进度（服务器-->客户端）
struct SMsgActionSyncLoad_SC
{
	u32 dwActorId;		// 玩家角色ID
	u8	byLoadState;	// 加载进度

	SMsgActionSyncLoad_SC()
	{
		dwActorId = 0;
		byLoadState = 0;
	}
};

//雇佣佣兵返回结果（S2C）
#define MSG_ACTION_RES_BUYHERO											150
struct SMsgActionBuyHeroRes
{
	DWORD res;
};

//佣兵升级
#define MSG_ACTION_HERO_LVUP											151
struct SMsgActionHeroLevelUp
{
	s32 nHeroIdx;		// 英雄位置
	s32 nHeroDstLv;		// 英雄要转换的目标等级
	SMsgActionHeroLevelUp()
	{
		nHeroDstLv = 0;
		nHeroIdx = 0;
	}


};

struct SMsgActionHeroLevelUpRes
{
	DWORD res;
};

//佣兵升级
#define MSG_ACTION_LEARN_SKILL											152
struct SMsgActionHeroLearnSkill
{
	s32 nSkillIdx;		// 技能类型
	s32 nHeroDstLv;		// 英雄要转换的目标等级
	SMsgActionHeroLearnSkill()
	{
		nHeroDstLv = 0;
		nSkillIdx = 0;
	}
};

struct SMsgActionHeroLearnSkillRes
{
	DWORD res;
};

///////////////////////////////////////////////////////////////////
// 添加buff
#define MSG_ACTION_WORLD_OBJECT_INIT_TOTEM_BUFF							153

// 添加buff
#define MSG_ACTION_WORLD_OBJECT_ADD_TOTEM_BUFF							154
struct SMsgActionWorldObjectAddTotemBuff_SC
{
	s8				dwIndex;				// 索引	
	u16				dwBuffId;				// buff ID	
	s16				dwTime;					// 剩余时间	
	s64		uidAdd;					// 添加者
};

// 添加buff
#define MSG_ACTION_WORLD_OBJECT_REMOVE_TOTEM_BUFF						155
struct SMsgActionWorldObjectRemoveTotemBuff_SC
{
	s8				dwIndex;				// 索引	
	u16				dwBuffId;				// buff ID	
	s64		uidRemove;				// 删除者
};

#define MSG_ACTION_GAME_END_RESULT										156

struct SMsgActionGameEndResult
{
	u32 nPNum;
	struct HeroGameEndResult
	{
		u32 nbTotalMage;	//受到总伤害的数值
		u32 ndTotalMage;	//造成总伤害的数值
		u32 nOneMage;		//单次最高伤害的数值
		u32 nFourStraNum;	//四连星
		u32 nFiveStraNum;	//五连星
		u32 nSixStraNum;	//六连星
		u32 nSevenStraNum;  //七连星
		u32 nMaxComBoxs;	//最高连击数
		u32 nTotalGem;		//总消宝石数
		u32 nExp;
		u32 nMoney;
		HeroGameEndResult()
		{
			nbTotalMage = 0;	
			ndTotalMage = 0;	
			nOneMage = 0;		
			nFourStraNum = 0;
			nFiveStraNum = 0;
			nSixStraNum = 0;	
			nSevenStraNum = 0;
			nMaxComBoxs = 0;	
			nTotalGem = 0;		
			nExp = 0;
			nMoney = 0;
		}
	};
	HeroGameEndResult endResult[6];
};

///////////////////////////////////////////////////////////////////
// 普通攻击（服务器-->客户端）
#define MSG_ACTION_NOMAL_ATTACK											158
struct SAttackContext
{
	s64	uidTarget;

	SAttackContext()	
	{
		memset(this, 0, sizeof(SAttackContext)); 
	}
};

// 本连击结束（服务器-->客户端）
#define MSG_ACTION_NOMAL_ATTACK_END										159

//卡片强化
#define MSG_ACTION_STRENGTHEN_CARD										160
struct StrengthenCard_CS
{
	s32		 type;
	s32		 createGoodsID;		//产物ID
	s64 uidCard1;			//卡片1
	s64 uidCard2;			//卡片2
	s64 luckyStoneID;		//幸运石
	s64 uidGoods1;			//卡片2
	s64 uidGoods2;			//卡片2
	s64 uidGoods3;			//卡片2
};
struct Strengthen_CS
{
	s32		 type;
	s32		 StrengthenID;		//产物ID
	s64 uidGoodsMain;		//主材料
	s64 uidGoods1;			//物品1
	s64 uidGoods2;			//物品2
	s64 uidGoods3;			//物品3
	s64 uidGoods4;			//物品4
	s64 uidGoods5;			//物品5
};
struct StrengthenEquip_CS
{       
        s32              type;
        s32              StrengthenID;         //产物ID
        s64 uidEquip;                   //装备
        s64 uidStone;                   //强化石
        s32 nRmbCount;               	//点击了几次钻石
};  

#define MSG_ACTION_STRENGTHEN_CARD_RES									161
struct StrengthenCardRes_SC
{
	s32   type;
	DWORD res;
};

// 通知前端打开抽奖界面（服务器-->客户端）
#define MSG_ACTION_ADD_A_DROP											162
struct SMsgActionAddADrop_SC
{
	u8	bDropIndex;			// 抽奖组编号
	s32 nGoodID[3];			// 物品ID
	s32 nGoodNum[3];		// 物品数量

	SMsgActionAddADrop_SC()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 抽奖（客户端-->服务器）
#define MSG_ACTION_ROLL_DROP											163
struct SMsgActionRollDrop_CS
{
	u8	bDropIndex;			// 抽奖组编号
	u8	bItemSlot;			// 抽奖物品位置
};

// 抽奖物品（服务器-->客户端）
struct SMsgActionRollDrop_SC
{
	u8	bDropIndex;			// 抽奖组编号
	u8	bItemSlot;			// 抽奖物品位置
	s32	nGoodID;			// 物品ID
	s32 nGoodNum;			// 物品数量
};

// 获取奖励（客户端<-->服务器）
#define MSG_ACTION_GET_DROP_PRIZE										164
// 结构体 SMsgActionRollDrop_CS

// 初始化抽奖（服务器-->客户端）
#define MSG_ACTION_INIT_A_DROP											165
// struct SMsgActionAddADrop_SC

//////////////////////////////////////////////////////////////////////////
// 请求训练（客户端-->服务器）
#define MSG_ACTION_TRAIN_DUMMY											166
struct SMsgActionTrainDummy
{
	SMsgActionTrainDummy()
	{
	}
};

struct SMsgRankInfo
{
	s32		nRank;		// 排名
	s64		qwUserID;	// 账号ID
	s32		lLevel;		// 等级

	SMsgRankInfo()
	{
		memset(this, 0, sizeof(*this));
	}
};

struct SMsgActionTrainRank
{
  SMsgRankInfo	arrRankInfo[6];	// 大赛玩家信息

  SMsgActionTrainRank()
  {
    memset(this, 0, sizeof(*this));
  }
};

///////////////////////////////////////////////////////////////////////////////

// 新手引导进度（客户端-->服务器）
#define MSG_ACTION_GUIDER_STEP											167
struct SMsgActionGuiderStep
{
	u8	bStepID;			// 步骤编号
	SMsgActionGuiderStep()
	{
		bStepID = 0;
	}
};

// 控制台命令（客户端-->服务器）
#define MSG_ACTION_CONSOLE_CMD											168

//// 请求关卡（客户端-->服务器）
//#define MSG_ACTION_TRAIN_INSTANCE										169

struct SBoxDropGoodsInfo
{
	s32		nGoodsID;		// 物品ID
	s32		nGoodsNum;		// 物品数量

	SBoxDropGoodsInfo()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 通知前端打开开宝箱界面（服务器-->客户端）
#define MSG_ACTION_ADD_BOX_DROP											170
struct SMsgActionAddBoxDrop_SC
{
	s32		nTotalNum;		// 多少个物品信息

	SMsgActionAddBoxDrop_SC()
	{
		memset(this, 0, sizeof(*this));
	}
};

//////////////////////////////////////////////////////////////////////////
// 请求训练返回（服务器-->客户端）
#define MSG_ACTION_RESULT_TRAIN_DUMMY									171
struct SMsgActionResultTrainDummy_SC
{
	u8		byObjectType;					// 对象类型
	s64		qwUnitID;						// 生物ID（假人为账号ID, 怪物为模板ID）
	s8		bySex;							// 性别
	s8		byHeadPortraitId;				// 头像ID
	u8		byLevel;						// 等级

	SMsgActionResultTrainDummy_SC()
	{
		memset(this, 0, sizeof(*this));
	}
};

//////////////////////////////////////////////////////////////////////////
// 请求攻击假人（客户端-->服务器）
#define MSG_ACTION_ATTACK_DUMMY											172
struct SMsgActionAttackDummy
{
	s64		qwUserID;					// 账号ID
	s32		nFightCountRMB;		// 花钱购买1次战斗次数
	s32		nCDTimeRMB;		    // 花钱购买1次战斗CD

	SMsgActionAttackDummy()
	{
	}
};

//通知客户端发送新鲜事儿（服务器-->客户端-->服务器）
#define MSG_ACTION_SEND_FEED											173
struct SMsgActionSendFeed_SC
{
	s32 nFeedTempID;
	SMsgActionSendFeed_SC()	
	{
		memset(this, 0, sizeof(SMsgActionSendFeed_SC)); 
	}

};
struct SMsgActionSendFeed_CS
{
	s32 nFeedID;
	s32 nFeedTempID;//平台新鲜事儿生成的ID
	SMsgActionSendFeed_CS()	
	{
		memset(this, 0, sizeof(SMsgActionSendFeed_CS)); 
	}

};

// 请求升级声望称号(客户端-->服务器）
#define MSG_ACTION_REPUTATION_TITLE_UPDATA						174

// 请求每日声望奖励（客户端-->服务器）
#define MSG_ACTION_REQUEST_TITLE_PRIZE								175

//初始化炼金列表
#define MSG_ACTION_INIT_STRENGTHEN_LIST									177

#define MSG_ACTIO_WORKFINISH_GETGOOD									178
struct SMsgActionWorkFinishGetGood_SC
{
	DWORD	dwClassID;		// 冷却大类（技能，物品，聊天等）
	DWORD	dwColdID;		// 冷却ID

	SMsgActionWorkFinishGetGood_SC()
	{
		memset(this, 0, sizeof(*this)); 
	}
};

// 购买商店物品
#define MSG_ACTION_BUY_SHOP_ITEM										179
struct SMsgActionBuyShopItem_CS
{
	s16		nShopIndex;		// 商店物品唯一ID
	s16		nCount;			// 数量

	SMsgActionBuyShopItem_CS()
	{
		memset(this, 0, sizeof(*this)); 
	}
};

// 获取大赛奖励物品
#define MSG_ACTION_GET_REWARDGOODS										183
struct SMsgActionGetRewardGoods_CS
{
	s32 lRewardType;      // 奖励类型（1：昨天的奖励，2：前天未领的奖励）
	SMsgActionGetRewardGoods_CS()
	{
		memset(this,0,sizeof(*this));
	}
};

#define MSG_ACTION_GET_REWARDGOODS_RES									184
struct SMsgActionSetRewardGoodsRes_SC
{
	s32 lRewardType;      // 奖励类型（1：昨天的奖励，2：前天未领的奖励）
	DWORD lGetRewardRes;      // 领取奖励结果
	SMsgActionSetRewardGoodsRes_SC()
	{
		memset(this,0,sizeof(*this));
	}
};

// 购买精力值
#define MSG_ACTION_BUY_ENERGY_POINT										186
struct SMsgActionBuyEnergyPoint_CS
{
	s16		nCount;			// 数量

	SMsgActionBuyEnergyPoint_CS()
	{
		memset(this, 0, sizeof(*this)); 
	}
};

// 获取连续登陆奖励
#define MSG_ACTION_GET_LOGIN_PRIZE										187

// 获取邀请好友奖励
#define MSG_ACTION_GET_FRIEND_PRIZE										188
struct SMsgActionGetFriendPrize_CS
{
	s16		nCount;			// 邀请好友数量
	s16		nVCount;		// 邀请V达人数量
	
	SMsgActionGetFriendPrize_CS()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 设置账号头像URL
#define MSG_ACTION_SET_HEAD_URL											189
struct SMsgActionSetHeadURL_CS
{
	char		szHeadURL[256];			// 设置自己的账号头像URL

	SMsgActionSetHeadURL_CS()
	{
		memset(this, 0, sizeof(*this)); 
	}
};


// 获取账号头像URL
#define MSG_ACTION_GET_HEAD_URL											190
struct SMsgActionGetHeadURL_CS
{
	s64			qwUserID;				// 账号ID

	SMsgActionGetHeadURL_CS()
	{
		memset(this, 0, sizeof(*this)); 
	}
};

struct SMsgActionGetHeadURL_SC
{
	s64			qwUserID;				// 账号ID
	char		szActorName[13];		// 角色名
	char		szHeadURL[256];			// 账号头像URL
	char			sOpenId[64];			// OpenID

	SMsgActionGetHeadURL_SC()
	{
		memset(this, 0, sizeof(*this)); 
	}
};

//////////////////////////////////////////////////////////////////////////
// 请求获取切磋好友（客户端-->服务器）
#define MSG_ACTION_PK_FRIEND											191
struct SMsgActionPKFriend
{
	s64			qwUserID;				// 账号ID

	SMsgActionPKFriend()
	{
	}
};

// 新鲜事积分抽奖（客户端-->服务器）
#define MSG_ACTION_FEED_SCORE_ROLL										192
struct SMsgActionFeedScoreRoll_CS
{
	u8	bScoreIndex;		// 领奖编号
	u8	byRollType;			// 抽奖类型
};

// 新鲜事积分抽奖（服务器-->客户端）
struct SMsgActionFeedScoreRoll_SC
{
	u8	byResult;			// 抽奖是否成功(0:失败, 1:成功)
	u8	bItemSlot;			// 抽奖物品位置
};

// 领取每日奖励（客户端-->服务器）
#define MSG_ACTION_GET_EVERYDAY_PRIZE									193
// u8 bType;				// 类型

// 购买vip（客户端-->服务器）
#define MSG_ACTION_BUY_VIP												194
// u8 bCount;				// 数量

// 契约卡片( 客户端-->服务器 )
#define MSG_ACTION_BUY_CARD_ENDURE										195
struct SMsgActionBuyCardEndure_CS
{
	s64				uidEquip;		// 装备
	u8				byPacketSkep;	// 包裹栏
	// 如果为1，则表示装备在包裹栏，反之装备栏
};

// 契约卡片（服务器-->客户端）
struct SMsgActionBuyCardEndure_SC
{
	u8	byResult;			// 契约是否成功(0:失败, 1:成功)
};

// 强化升级( 客户端-->服务器 )
#define MSG_ACTION_STRENGTH_LEVELUP										196
struct SMsgActionStrengthLevelUp_CS
{
	s32				lType;			// 强化类型
	s32				lLevelUpType;	// 升级方式
};

// 强化购买( 客户端-->服务器 )
#define MSG_ACTION_STRENGTH_BUY											197
struct SMsgActionStrengthBuy_CS
{
	s32				arrGoodsID[6];			// 购买物品ID
	s32				arrGoodsNum[6];			// 购买物品数量
};

// 立即完成( 客户端-->服务器 )
#define MSG_ACTION_STRENGTHOVER_RIGHTNOW                                                                        198
struct SMsgActionStrengthOverRightNow_CS
{
	s32				nColdClass;			// 冷却类型
        s32                             nColdID;			// 冷却ID
};

// 卡片消耗情况( 服务器-->客户端 ) 
#define MSG_ACTION_CARD_ENDURE_INFO										199
// 消息体
struct SMsgActionCardEndureInfo_SC
{
	struct SCardEndureInfo
	{
		s32			nCardSlot;			// 卡片所在槽位
		s32			nCardID;			// 卡片模板ID
	};
};

// 购买已消耗卡片( 客户端-->服务器 )
#define MSG_ACTION_BUY_LOST_CARD										200
// 消息体
struct SMsgActionBuyLostCard_CS
{
	s32	nCardSlot;						// 卡片所在槽位
	s32	nCardID;						// 卡片模板ID
};

// 请求平台好友的收集初始化数据（客户端->服务器）
#define MSG_ACTION_REQUEST_COLLECT_DATA             201
struct SMsgActionRequestCollectData_CS
{
  SMsgActionRequestCollectData_CS() :
    wSize(0) {}
  s16 wSize;                // 数据个数
  u64 qwUserIDs[0];         // 用户ID组
};

// 返回没有收集过的平台好友的收集初始化数据（服务器->客户端）
#define MSG_ACTION_RESPONSE_COLLECT_DATA            202
struct SMsgActionResponseCollectData_SC
{
  SMsgActionResponseCollectData_SC() :
    wSize(0) {}
  u16 wSize;                   // 数据个数
  u64 friendUserIDs[0];        // 好友的用户ID数据
};

// 客户端请求同步时间（客户端->服务器）
#define MSG_ACTION_REQUEST_SYNC_TIME                203

// 向客户端同步时间（服务器->客户端）
#define MSG_ACTION_SYNC_TIME                        204
struct SMsgActionSyncTime_SC
{
  SMsgActionSyncTime_SC() : qwTime(0) {}
  s64 qwTime;                 // 时间
};

// 客户端发送平台好友收集开始（客户端->服务器）
#define MSG_ACTION_REQUEST_COLLECT_START            205
struct SMsgActionRequestCollectStart_CS
{
  SMsgActionRequestCollectStart_CS() : qwFriendUserID(0) {}
  u64 qwFriendUserID;         // 好友用户ID
};

// 回复客户端是否可以开始收集（服务器->客户端）
#define MSG_ACTION_RESPONSE_COLLECT_START            206
struct SMsgActionResponseCollectStart_CS
{
  SMsgActionResponseCollectStart_CS() : qwFriendUserID(0) {}
  u64 qwFriendUserID;         // 好友用户ID
  u8 result;                  // 0:不可以，1：可以
};

// 客户端发送平台好友收集结束（客户端->服务器）
#define MSG_ACTION_REQUEST_COLLECT_END              207
struct SMsgActionRequestCollectEnd_CS
{
  SMsgActionRequestCollectEnd_CS() :
    qwFriendUserID(0), dwMoneyNum(0) {}
  u64 qwFriendUserID;         // 好友USERID
  u32 arrGoodNum[5];          // 地、水、火、风、雷对应奖励物品个数
  u32 dwMoneyNum;             // 金钱数量
  u8 isDoubleAward;           // 是否加倍奖励，0：不加倍，1：加倍
};

// 服务器发送抽奖结果（客户端<--服务器）
#define MSG_ACTION_DAY_ROLL_RESULT                  208
// u8 bIdx;                   // 抽中第几个（1~8）

#define MSG_ACTION_ONLINE_TIME			                209
// 客户端->服务器 设置服务器当日累计在线时长
struct SMsgActionSetRemoteOnlineTime_CS
{
	s32	nOnlineTime;	// 平台统计的在线时长
	SMsgActionSetRemoteOnlineTime_CS()
	{
		memset(this, 0, sizeof(*this));	
	}
};

// 服务器->客户端 请求平台统计当日累计在线时长
struct SMsgActionGetOnlineTime_SC
{
	SMsgActionGetOnlineTime_SC()
	{
	}
};

#define MSG_ACTION_GET_PVPPRIZE                                  210
// 客户�->服务器 领取PVP活动奖励
struct SMsgActionGetPVPPrize_CS
{
	s32	lType;		// 0:PVP战斗次数 1:PVP胜利次数

	SMsgActionGetPVPPrize_CS()
	{
		memset(this, 0, sizeof(*this));
	}
};

#define MSG_ACTION_OPEN_SURFACE                 211
// 客户端->服务器 打开界面
struct SMsgActionOpenSurface_CS
{
  u32 dwSurfaceID;    // 界面ID

  SMsgActionOpenSurface_CS() : dwSurfaceID(0) {}
};

#define MSG_ACTION_GET_INSTANCE_PRIZE		212
// 客户端->服务器 领取碎片奖励
struct SMsgActionGetInstancePrize_CS
{
	s32	nMapID;		// 大地图ID
	s32	nPrizeID;	// 奖励ID

	SMsgActionGetInstancePrize_CS()
	{
		memset(this, 0, sizeof(*this));
	}
};

#define MSG_ACTION_GET_INSTANCE_MONEY		213
// 客户端->服务器 收获游戏币或者强制征收游戏币
struct SMsgActionGetInstanceMoney
{
	s32	nType;		// 0 : 征收; 1 : 强制征收

	SMsgActionGetInstanceMoney()
	{
                memset(this, 0, sizeof(*this));
        }
};

// 宝石伤害（服务器-->客户端）
#define MSG_ACTION_DAMAGE_PREPARE		214
struct SDamageContext
{
	s32	nValue;
  s32 nCombCount;
  s32 nIsCrit;

	SDamageContext()	
	{
		memset(this, 0, sizeof(SDamageContext)); 
	}
};

// 客户端->服务器 获取好友礼物
#define MSG_ACTION_GET_GOODSGIFT                215
struct SMsgActionGetGoodsGift_CS
{
        SMsgActionGetGoodsGift_CS()
        {
                memset(this, 0, sizeof(*this));
        }
};

// 获取Q点充值(客户端--->服务器)
#define MSG_ACTION_QQPOINT_PRIZE		254
struct SMsgActionQQPointPrize_CS
{
	SMsgActionQQPointPrize_CS()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 客户端->服务器 获取大赛挑战记录
#define MSG_ACTION_GET_RANKRECORD                216
struct SMsgActionGetRankRecord_CS
{
	SMsgActionGetRankRecord_CS()
        {
                memset(this, 0, sizeof(*this));
        }
};
// 服务器->客户端 大赛挑战记录
struct SMsgActionGetRankRecord_SC
{
	s64	qwAttUserID;
	s64	qwDefUserID;
	s8	lResult;
	s32	nAttRank;
	s32	nDefRank;
	s32	lLogTime;

	SMsgActionGetRankRecord_SC()
        {
                memset(this, 0, sizeof(*this));
        }
};

// 客户端->服务器 分解卡片
#define MSG_ACTION_DECOMPOSECARD		217
struct SMsgActionDecomposeCard_CS
{
	s8	byType;		// 0:花金币, 1:花符文
	s64	guidCard;	// 卡片GUID

	SMsgActionDecomposeCard_CS()
	{
                memset(this, 0, sizeof(*this));
        }
};

// 客户端->服务器 抽卡
#define MSG_ACTION_ROLLCARDPRIZE		218
struct SMsgActionRollCardPrize_CS
{
	s32	lRollID;	// 抽卡编号

	SMsgActionRollCardPrize_CS()
        {
                memset(this, 0, sizeof(*this));
        }
};

// 服务器->客户端 返回中奖物品列表
struct SMsgActionRollCardPrize_SC
{
	s32	arrGoodsList[5];	// 中奖物品列表

	SMsgActionRollCardPrize_SC()
        {
                memset(this, 0, sizeof(*this));
        }
};

// 服务器->客户端 新增抽卡中奖名单
#define MSG_ACTION_ADDCARDROLL			219
struct SMsgActionAddCardRoll_SC
{
	s64	qwUserID;	// 中奖者账号ID
	char	szActorName[32];// 中奖者名字
	s32	lGoodsID;	// 中奖道具ID

	SMsgActionAddCardRoll_SC()
        {
                memset(this, 0, sizeof(*this));
        }
};

#define MSG_ACTION_GETCARDROLLLIST		220
// 客户端->服务器 获取中奖者列表
struct SMsgActionGetCardRollList_CS
{
	SMsgActionGetCardRollList_CS()
	{
                memset(this, 0, sizeof(*this));
        }
};

// 服务器->客户端 返回中奖者列表
struct SMsgCardRollResult
{
	s64     qwUserID;       // 中奖者账号ID
        char    szActorName[32];// 中奖者名字
        s32     lGoodsID;       // 中奖道具ID

	SMsgCardRollResult()
	{
                memset(this, 0, sizeof(*this));
        }
};

struct SMsgActionGetCardRollList_SC
{
	u16	wCount;		//个数
	//多个SMsgCardRollResult

	SMsgActionGetCardRollList_SC()
	{
		memset(this, 0, sizeof(*this));
	}
};

#define MSG_ACTION_VIPEXCHANGE			221
// 客户端->服务器 符文兑换道具
struct SMsgActionVIPExchange_CS
{
	s32	lExchangeID;	// 兑换ID
	s32	lExchangeNum;	// 兑换数量

	SMsgActionVIPExchange_CS()
        {
                memset(this, 0, sizeof(*this));
        }
};

#define MSG_ACTION_ACTIVITY_FEEDBACK    222
// 客户端->服务器 活动消费返利

// 最大消息码
#define MSG_ACTION_MAXID												256

#pragma pack(pop)

#endif //_DMSGKEYROOT_H__
