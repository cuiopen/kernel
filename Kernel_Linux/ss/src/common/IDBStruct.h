#ifndef _IDBSTRUCT_H_
#define _IDBSTRUCT_H_

#include "include/GameType.h"

#define REQUESTID_CENTERDB_LOGIN			1	// 帐号登录
#define REQUESTID_CENTERDB_CREATEACTOR  	2	// 角色中心数据库生成角色ID
#define REQUESTID_CENTERDB_DELETEACTOR  	3	// 角色中心数据库删除角色ID
#define REQUESTID_CENTERDB_UPDATEHEADURL	4	// 角色中心数据库更新账号头像URL
#define REQUESTID_CENTERDB_UPDATEACTOR		5	// 角色中心数据库更新角色数据
#define REQUESTID_CLEAR_UPDATE_DAY_DATA		6   // 清除当天数据
#define REQUESTID_CLEAR_UPDATE_PERIOD_DATA	7   // 刷新当届数据
#define REQUESTID_ACTOR_LAST_ARRANGE_GET	8	// 获取上届排行列表
#define REQUESTID_CENTERDB_GETHEADURL		9	// 角色中心数据库获取账号头像URL

#define	REQUESTID_ACTOR_GET					10	// 获取角色
#define REQUESTID_ACTOR_CREATE  			11	// 创建角色
#define REQUESTID_ACTOR_DELETE  			12	// 删除角色
#define REQUESTID_INVITATION_NUM_GET		13  // 获取玩家邀请


#define REQUESTID_ACTOR_LOGIN				20	// 角色登录
#define REQUESTID_ACTOR_UPDATE				21	// 更新角色数据
#define REQUESTID_GOODS_GET					22	// 获取角色物品
#define REQUESTID_GOODS_UPDATE				23	// 更新角色物品
#define REQUESTID_ACTOR_LOGOUT				24	// 角色下线解锁
#define REQUESTID_GOODS_GET_GIFT			25	// 获取收到礼物
#define REQUESTID_PAYREWARD_GET                         26      // 获取充值送礼道具

#define REQUESTID_INTERACT_LOAD				30	// 读取交互数据
#define REQUESTID_INTERACT_SAVE				31	// 保存交互数据


#define REQUESTID_RELATION_GETLIST			40	// 获取我和谁有关系的玩家列表
#define REQUESTID_RELATION_GETLIST2			41	// 获取谁和我有关系的玩家列表
#define REQUESTID_RELATION_ADD				42	// 添加关系
#define REQUESTID_RELATION_UPDATE			43	// 更新关系
#define REQUESTID_RELATION_DELETE			44	// 删除关系

//游戏事件相关
#define REQUESTID_GAMEEVENT_SEND			50	// 发送游戏事件
#define REQUESTID_GAMEEVENT_GETLIST			51	// 获取游戏事件列表
#define REQUESTID_GAMEEVENT_UPDATE			52	// 更新游戏事件(领取奖励)
#define REQUESTID_GAMEEVENT_DEL				53	// 删除游戏事件

// 大赛排名相关
#define REQUESTID_RANK_GET				60	// 获取所有大赛排名信息
#define REQUESTID_RANK_UPDATE				61	// 修改大赛排名信息
#define REQUESTID_RANKPRIZE_GET				62	// 获取大赛日排名奖励
#define REQUESTID_RANKPRIZE_UPDATE			63	// 领取指定大赛奖励
#define REQUESTID_RANKPRIZE_INSERT			64	// 生成本次大赛排名结果
#define REQUESTID_RANKRECORD_INSERT			65	// 生成战斗记录
#define REQUESTID_RANKRECORD_GET			66	// 获取战斗记录

/// 家族相关
#define REQUESTID_UNION_CREATE_ID			70	// 请求家族中心数据库分配家族ID
#define REQUESTID_UNION_DELETE_ID			71	// 请求家族中心数据库删除家族ID
#define REQUESTID_UNION_REQUEST				72	// 请求家族数据
#define REQUESTID_UNION_INSERT				73	// 请求插入家族数据
#define REQUESTID_UNION_UPDATE				74	// 请求更新家族数据
#define REQUESTID_UNION_DELETE				75	// 请求删除家族数据
#define REQUESTID_UNIONMMEBER_REQUEST		76	// 请求族员数据
#define REQUESTID_UNIONMEMBER_INSERT		77	// 请求插入族员数据
#define REQUESTID_UNIONMEMBER_UPDATE		78	// 请求更新族员数据
#define REQUESTID_UNIONMEMBER_DELETE		79	// 请求删除族员数据

// 假人相关
#define REQUESTID_DUMMY_BASE_GET			80	// 获取假人基本信息
#define REQUESTID_DUMMY_ALL_GET				81	// 获取假人完备信息
#define REQUESTID_FRIEND_BASE_GET			82	// 获取好友基本信息

/// 佣兵
#define REQUESTID_HERO_REQUEST				90	// 佣兵数据请求
#define REQUESTID_HERO_UPDATE				91	// 佣兵数据更新
#define REQUESTID_HERO_DELETE				92	// 佣兵数据删除
#define REQUESTID_HERO_INSERT				93	// 佣兵数据插入
#define REQUESTID_ONE_HERO_REQUEST			94  // 请求单个佣兵数据

#define REQUESTID_QQ_GETBUYGOODS			100	// 获取Q点购买道具
#define REQUESTID_QQ_GETYELLOWVIP                       101     // 获取充黄钻信息
#define REQUESTID_QQ_GETPOINTPRIZE			102	// 获取Q点充值信息


// OSS 监控
#define REQUESTID_MONITOR_ACTORVALUE		200 // 玩家数值监控(金钱、经验等)
#define REQUESTID_MONITOR_LEVEL				201	// 玩家等级监控
#define REQUESTID_MONITOR_MONSTER			202	// 怪物监控
#define REQUESTID_MONITOR_TASK				203	// 任务监控
#define REQUESTID_MONITOR_GOODS_CREATE		204	// 物品产生监控
#define REQUESTID_MONITOR_GOODS_DESTROY		205	// 物品消耗监控
#define REQUESTID_MONITOR_ACTORGOODS		206	// 玩家物品转移日志
#define REQUESTID_MONITOR_WARNING			207	// 报警监控

#define REQUESTID_MONITOR_LEVEL_DISTRIBUTE	208	// 地图玩家等级分布监控
#define REQUESTID_MONITOR_MONSTER_KILL		209	// 怪物杀死玩家等级监控
#define REQUESTID_MONITOR_PLAYER_INFO		210	// 玩家实时信息监控

#define REQUESTID_MONITOR_BATTLE			145	// 玩家战场模式分布监控
#define REQUESTID_MONITOR_GAME_DATA			150	// 游戏数据监控

#define REQUESTID_UPDATE_PLAYER_DATA_COUNT   151 // 更新玩家数据统计
#define REQUESTID_REQUEST_PLAYER_DATA_COUNT  152 // 请求玩家数据统计

#define REQUESTID_MAX						1000
#pragma pack(push,1)	

//////////////////////////////////////////////////////////////////////////
// REQUESTID_CENTERDB_LOGIN
// 帐号登录 - 输入结构体
struct SCenterDBLogin_Set
{
	char	szUserName[33];		// 用户名
	char	szPassword[41];		// 用户密码(不可逆加密sha1)

	char	szGameWorld[16];	// 游戏世界名
	char	szIP[16];			// 用户IP
	char	szSerialNO[20];		// 网卡序列号

	SCenterDBLogin_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 帐号登录 - 输出结构体
struct SCenterDBLogin_Get
{
	int	lReturn;			// 返回值
	char	szDes[128];			// 描述信息

	s64 qwUserID;			// 用户ID
	int	lUserType;			// 玩家类型, 0: 玩家帐号; 1: GM帐号
	char	szSecPsw[41];		// 二级密码(不可逆加密sha1)

	int lPromptFlag;			// 默认值返回0，返回1表示要弹出提示信息的窗口，具体内容会通过szDes提供
 
	SCenterDBLogin_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_CENTERDB_LOGIN
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_CENTERDB_CREATEACTOR
// 生成角色ID
struct SCenterDBCreateActor_Set
{
	s64   qwUserID;							// 用户ID
	char	szName[13];							// 角色名
	char	bySex;								// 性别
	char	byHeadPortraitId;					// 头像ID
	char	szIP[16];							// 用户IP
	char	szGameWorld[32];					// 游戏世界名

	SCenterDBCreateActor_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 生成角色ID
struct SCenterDBCreateActor_Get
{
	int	lReturn;			// 返回值
	int	lActorID;			// 角色ID

	SCenterDBCreateActor_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_CENTERDB_CREATEACTOR
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_CENTERDB_DELETEACTOR
// 中心DB删除角色ID
struct SCenterDBDeleteActor_Set
{
	s64 qwUserID;			// 用户ID
	int	lActorID;			// 删除

	SCenterDBDeleteActor_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 生成角色ID
struct SCenterDBDeleteActor_Get
{
	int		lReturn;			// 返回值
	char	szDes[128];			// 描述信息


	SCenterDBDeleteActor_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_CENTERDB_DELETEACTOR
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_CENTERDB_UPDATEHEADURL
// 角色中心数据库更新账号头像URL
struct SCenterDBUpdateHeadURL_Set
{
	s32		lActorID;			// 角色ID
	char	szHeadURL[256];		// 账号头像URL

	SCenterDBUpdateHeadURL_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 生成角色ID
struct SCenterDBUpdateHeadURL_Get
{
	s32		lReturn;			// 返回值

	SCenterDBUpdateHeadURL_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_CENTERDB_UPDATEHEADURL
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_CENTERDB_GETHEADURL
// 角色中心数据库获取账号头像URL
struct SCenterDBGetHeadURL_Set
{
	s32		lActorID;			// 请求者角色ID
	s64		qwUserID;			// 请求对象账号ID

	SCenterDBGetHeadURL_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 生成角色ID
struct SCenterDBGetHeadURL_Get
{
	s32		lReturn;			// 返回值
	s32		lActorID;			// 请求者角色ID
	s64		qwUserID;			// 请求对象账号ID
	char	szActorName[13];	// 角色名
	char	szHeadURL[256];		// 账号头像URL
	char		sOpenId[64];			// OpenID

	SCenterDBGetHeadURL_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_CENTERDB_GETHEADURL
//////////////////////////////////////////////////////////////////////////

// 0点清除当天数据
struct SCenterDBClearDayData
{
	s64	qwUserID;			// 用户ID

	SCenterDBClearDayData()
	{
		memset(this, 0, sizeof(*this));
	}
};

//获取排行列表输入结构体
struct SCenterDBActorArrange_Set
{
	s32 arrangeType;
	SCenterDBActorArrange_Set()
	{
		memset(this,0,sizeof(*this));
	}
};

//获取排行列表输出结构体
struct SCenterDBActorArrange_Get
{
	s32 lReturn;
	s64 qwUserID;
	s32 lTrainScore;
	SCenterDBActorArrange_Get()
	{
		memset(this,0,sizeof(*this));
	}
};

//获取历届冠军列表输出结构体
struct SCenterDBChampionList_Get
{
	s32 lReturn;
	s32 lPeriodID;
	s64 qwUserID;
	s32 lScore;
	s32 logTime;
	SCenterDBChampionList_Get()
	{
		memset(this,0,sizeof(*this));
	}
};


//////////////////////////////////////////////////////////////////////////
// REQUESTID_CENTERDB_UPDATEACTOR
// 更新角色中心角色信息 - 输入结构体
struct SCenterActorUpdate_Set
{
	int	lActorID;			// 角色ID
	u8		lLevel;				// 角色等级

	SCenterActorUpdate_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 更新角色中心角色信息 - 输出结构体
struct SCenterActorUpdate_Get
{
	int	lReturn;			// 返回值

	SCenterActorUpdate_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 获取每个游戏世界的角色数量- 输出结果集结构体
struct SCenterActorGet_GetSet
{

	WORD	wGameWorldID;		// 游戏世界编号
	BYTE	byNum;				// 角色数量

	SCenterActorGet_GetSet()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_CENTERDB_UPDATEACTOR
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_ACTOR_GET
// 获取角色 - 输入结构体
struct SActorGet_Set
{
	s64	qwUserID;			// 用户ID

	SActorGet_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 获取角色 - 输出结构体
struct SActorGet_Get
{
	int	lReturn;			// 返回值
	int	lActorNum;			// 角色数量
	int	lActorID;			// 角色Id
	char	szActorName[13];	// 角色名
	char	bySex;				// 性别
	char	byHeadPortraitId;	// 头像ID
	int	lFlag;				// 封号标志，0：正常，1：封号

	SActorGet_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_ACTOR_GET
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_ACTOR_CREATE
// 创建角色 - 输入结构体
struct SActorCreate_Set
{
	s64	qwUserID;			// 用户ID
	int	lActorID;			// 角色ID
	char	szName[13];			// 角色名
	char	bySex;				// 性别
	char	byHeadPortraitId;	// 头像ID

	SActorCreate_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 创建角色 - 输出结构体
// 在这里使用了上面的 SActorGet_Get

// 创建角色 - 输出结果集结构体
// 在这里使用了上面的 SActorGet_GetSet
// REQUESTID_ACTOR_CREATE
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_ACTOR_DELETE
// 删除角色 - 输入结构体
struct SActorDelete_Set
{
	s64	qwUserID;			// 用户ID
	int	lActorID;			// 角色ID

	SActorDelete_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 删除角色 - 输出结构体
// 在这里使用了上面的 SActorGet_Get

// 删除角色 - 输出结果集结构体
// 在这里使用了上面的 SActorGet_GetSet
// REQUESTID_ACTOR_DELETE
//////////////////////////////////////////////////////////////////////////



/////////////////////////////////////////////////////////
// REQUESTID_ACTOR_LOGIN
// 角色登录 - 输入结构体
struct SActorLogin_Set
{
	u32		lIdenID;			// 识别ID(DB不用关心)
	s64		qwUserID;			// 用户ID
	s32		lActorID;			// 角色ID
	char	szIP[16];			// 用户IP
	char	szSerialNO[20];		// 网卡序列号

	SActorLogin_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

//获取要请好友数量输入结构体
struct SActorInvitationNum_Set
{
	s64 qwUserId;
	SActorInvitationNum_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

//获取要请好友数量输出
struct SActorInvitationNum_Get
{
	s32		lReturn;
	s32		lInvitationNum;
	SActorInvitationNum_Get()
	{
		memset(this,0,sizeof(*this));
	}
};

struct SActorLogin_Get
{
	s32		lReturn;				// 结果返回
	char		ActorName[13];			// 角色名字
	char	szHeadURL[256];			// 账号头像URL
	s8		bySex;					// 性别
	s8		byHeadPortraitId;		// 头像ID
	u8		lLevel;					// 等级
	u32		lExp;					// 经验
	u32		lMoney;					// 金钱
	u32		lRmb;					// 商城币
	s32		lRoomID;				// 房间ID
	u32		lEnergy;				// 当前精力值
	u32		lGoodsEnergy;			// 通过道具获取的精力值
	u32		lPVPTimes;				// 打竞技场次数
	u32		lPVPWinTimes;			// 打竞技场赢的次数
	u8		lGuiderStep;			// 新手引导进度
	char		pszDropContext[106];	// 掉落部件上下文
	char		StatusBuffer[104];		// 状态数据区(8 + 16 * sizeof(SExportDBContext))
	s32		lGMPurview;				// GM权限字段
	char		szLastDate[11];			// 上次下线时间
	u32		lLastTime;				// 上次下线时间
	u8		bBuyEnergyPoint;		// 当天购买精力点数量
	s32		lCardRollFlg;			// 每日抽卡标识
	s32		lNull2;		        // (舍弃）
	s32		lNull3;		        // (舍弃）
	s32		lTrainCount;			// 大赛领取标示和挑战次数(0:昨日排名领取标志 1:前天排名领取标志 2:挑战次数 3:当前声望等级)
	s32		lTrainCDTime;		  // 大赛CD时间
	s32		lReputation;			// 声望
	s32		lInvitationNum;			// 邀请好友有效数量
	s32		lInviteRewardNum;		// 邀请好友抽奖次数
	u8		lCDTimeBuffer[176];		// 冷却数据区(8 + 24 * sizeof(SNodeExportContext))
	u8		lWorkSkillBuffer[32];   // 生活技能产物数据区
	u8		byContinueLoginCount;	// 连续登陆次数
	u8		byGetLoginPrize;		// 连续登陆奖励
	u8		byGetFriendPrize;		// 邀请好友奖励
  	u8    		byGetFriendCollect; // 每天好友收集次数
	s8		byFeedScore;			// 新鲜事分享积分
	s8		byFeedRewardFlg;		// 积分领奖标识
	u32		lVIPtime;				// VIP到期时间
	u32		lDayPrizeFlag;			// 每日领取标志位（1~32位 1：VIP 2:每日黄钻 3:年付费用户 4:开通黄钻）
	s32		lStrengthLevel;			// 强化等级
	s32		lPayMoney;				// 最近活动充值数
	s32		lPVPPrize;			// PVP活动奖励
	s64             qwAnotherUserID;                // 大赛战胜对手账号ID
	s8              lResult;                        // 大赛结果
	s32             lEnforceCollect;                // 强制征收次数
	s32		lTotalVIPInfo;			// QQ所有VIP信息
	s32		lQQVIPLevel;			// QQ黄钻等级
  s32   nDayConsumeRunes;       // 当天消耗符文数量
  u8    byDayFeedbackNumber;    // 当天符文返还次数

	SActorLogin_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};


// REQUESTID_ACTOR_LOGIN
/////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////
// REQUESTID_ACTOR_UPDATE
// 更新角色信息 - 输入结构体
struct SActorUpdate_Set
{
	s64	qwUserID;				// 用户ID
	s32	lActorID;				// ActorID
 
	char	ActorName[13];			// 角色名字
	char szHeadURL[256];		// 玩家头像URL
	s8	bySex;					// 性别
	s8	byHeadPortraitId;		// 头像ID
	u8	bLevel;					// 等级
	u32	lExp;					// 经验
	u32 lMoney;					// 金钱
	u32 lRmb;					// 商城币
	s32	lRoomID;				// 房间ID
	u32	lEnergy;				// 当前精力值
	u32 lGoodsEnergy;			// 通过道具获取的精力值
	u32	lPVPTimes;				// 打竞技场次数
	u32	lPVPWinTimes;			// 打竞技场赢的次数
	u8	lGuiderStep;			// 新手引导进度
	char	pszDropContext[106];	// 掉落部件上下文
	char	StatusBuffer[104];		// 状态数据区(8 + 16 * sizeof(SExportDBContext))
	s32	lGMPurview;				// GM权限字段
	char	szLastDate[11];			// 上次下线时间
	u32	lLastTime;				// 上次下线时间
	u8	bBuyEnergyPoint;		// 当天购买精力点数量
  	s32	lCardRollFlg;			// 每日抽卡标识
	s32		lNull2;		        // (舍弃）
	s32		lNull3;		        // (舍弃）
	s32		lTrainCount;			// 大赛领取标示和挑战次数(0:昨日排名领取标志 1:前天排名领取标志 2:挑战次数 3:当前声望等级)
	s32		lTrainCDTime;		  // 大赛CD时间
	s32		lReputation;			// 声望
	s32 lInvitationNum;			// 邀请好友有效数量
	s32	lInviteRewardNum;		// 邀请好友抽奖次数
	u8  lCDTimeBuffer[176];		// 冷却数据区(8 + 24 * sizeof(SNodeExportContext))
	u8	lWorkSkillBuffer[32];   // 生活技能产物数据区
	u8	byContinueLoginCount;	// 连续登陆次数
	u8	byGetLoginPrize;		// 连续登陆奖励
	u8	byGetFriendPrize;		// 邀请好友奖励
  u8  byGetFriendCollect; // 每天好友收集次数
	s8	byFeedScore;			// 新鲜事分享积分
	s8	byFeedRewardFlg;		// 积分领奖标识
	u32 lVIPtime;				// VIP到期时间
	u32	lDayPrizeFlag;			// 每日领取标志位（1~32位 1：VIP 2:每日黄钻 3:年付费用户 4:开通黄钻）
	s32	lStrengthLevel;			// 强化等级
	s32	lPayMoney;				// 最近活动充值数
	s32	lPVPPrize;			// PVP活动奖励
	s64     qwAnotherUserID;                // 大赛战胜对手账号ID
	s8	lResult;			// 大赛结果
	s32     lEnforceCollect;                // 强制征收次数
	s32	lTotalVIPInfo;			// QQ所有VIP信息
	s32	lQQVIPLevel;			// QQ黄钻等级
  s32   nDayConsumeRunes;       // 活动中当天消耗符文数量
  u8    byDayFeedbackNumber;    // 活动中当天符文返还次数

	SActorUpdate_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 更新角色信息 - 输出结构体
struct SActorUpdate_Get
{
	int	lReturn;		// 结果返回

	SActorUpdate_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_ACTOR_UPDATE
/////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_GOODS_GET
// 获取角色物品 - 输虢峁固�
struct SGoodsGet_Set
{
	int	lActorID;		// 角色ID
	BYTE	byContainerID;	// 容器ID

	SGoodsGet_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 获取角色物品 - 输出结构体
struct SGoodsGet_Get
{
	int	lReturn;		// 结果返回
	BYTE	lGoodsNum;		// 物品个数, 最大不能超过40个

	SGoodsGet_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};



//获取玩家收到的物品
struct SGoodsGet_Set_Gift
{
	s64 qwUserId;
	s32 lActorID;
	SGoodsGet_Set_Gift()
	{
		memset(this, 0, sizeof(*this));
	}
};

//获取玩家收到的物品
struct SGoodsGet_Get_Gift
{
	s32  lReturn;
	int lGoodsID;
	SGoodsGet_Get_Gift()
	{
		memset(this, 0, sizeof(*this));
	}
};

//获取玩家充值送礼奖励物品
struct SGoodsGet_Set_PayReward
{                       
        s64 qwUserId;   
        SGoodsGet_Set_PayReward()    
        {                       
                memset(this, 0, sizeof(*this));
        }                               
};

//获取玩家充值送礼奖励物品
struct SGoodsGet_Get_PayReward
{
        s32	lReturn; 
        s32	lGoodsID;
	s32	lNum;
        SGoodsGet_Get_PayReward()
        {
                memset(this, 0, sizeof(*this));
        }
};

// 获取角色物品 - 输出结果集结构体
struct SGoodsGet_GetSet
{
	int	lGoodsID;		// 物品ID
	BYTE	byContainerID;	// 所属容器ID
	BYTE	byPlace;		// 在容器中的位置
	short	wGoodsNum;		// 数量
	int	lExistsTime;	// 物品存在时间 (游戏时间或者现实时间)
	BYTE	byFlag;			// 0x1:是否绑定，0x2:是否鉴定，0x3:是否激活，0x4:能否出售给NPC
	WORD	wCurEndure;		// 当前耐久（魔灵：当前经验）
	WORD	wCurMaxEndure;	// 当前最大耐久上限
	BYTE	lSmeltLevel;	// 凹槽数量2+升级次数6
	BYTE	EffectBuf[26];	// 随机效果(8) + 镶嵌魂晶(6) + 制造效果(6) + 套装宝石ID(4) + 随机效果是否激活(1)
	BYTE	szItemName[16];	// 唯一ID (时间6+角色ID4+静态地图ID2+唯一2+场景服ID1+产出1)

	// 60B
	SGoodsGet_GetSet()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_GOODS_GET
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_GOODS_UPDATE
// 更新角色物品 - 输入结构体
struct SGoodsUpdate_Set
{
	int	lActorID;		// 角色ID
	BYTE	byContainerID;	// 容器ID
	BYTE	lGoodsNum;		// 物品格式，最大不能超过40个
	BYTE	szGoodsBuf[2400];	// 物品Buffer, 由lGoodsNum个SGoodsGet_GetSet结构组成

	SGoodsUpdate_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 更新角色物品 - 输出结构体
struct SGoodsUpdate_Get
{
	int	lReturn;		// 结果返回

	SGoodsUpdate_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_GOODS_UPDATE
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_ACTOR_LOGOUT
// 角色下线解锁 - 输入结构体
struct SActorLogout_Set
{
	s64	qwUserID;				// 用户ID
	int	lActorID;				// ActorID
	char	ipAddress[16];		// 用户IP


	SActorLogout_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 角色下线解锁 - 输出结构体
struct SActorLogout_Get
{
	int	lReturn;		// 结果返回
	char	szDes[128];		// 结果描述

	SActorLogout_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_ACTOR_LOGOUT
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_INTERACT_LOAD
// 读取交互数据
struct SInteractLoad_Set
{
	BYTE	lTypeID;	// 类型ID
	BYTE	lServerID;	// 服务器ID
	int	lOwnerID;	// 所属ID

	SInteractLoad_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 读取交互数据
struct SInteractLoad_Get
{
	int	lReturn;	// 返回值

	BYTE	DataBuffer[2048];	// 交互二进制数据块

	SInteractLoad_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_INTERACT_LOAD
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_INTERACT_SAVE
// 保存交互数据
struct SInteractSave_Set
{
	BYTE	lTypeID;	// 类型ID
	BYTE	lServerID;	// 服务器ID
	int	lOwnerID;	// 所属ID
	BYTE	DataBuffer[2048];	// 交互二进制数据块

	SInteractSave_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 保存交互数据
struct SInteractSave_Get
{
	int	lReturn;	// 返回值
	char	szDes[128];	// 返回描述

	SInteractSave_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_INTERACT_SAVE
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// REQUESTID_LOG_ACTORLOG
struct SActorLogin_Log_Set
{
	s64	qwUserID;
	int	lActorID;
	char	szActorName[19];

	BYTE	lSex;				// 性别
	BYTE	lNation;			// 国家ID
	BYTE	lProfession;		// 职业
	BYTE	lLevel;				// 级别

	char	ipAddress[16];	// 登录Ip地址
	char	szSerialNO[20]; // 网卡MAC

	SActorLogin_Log_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 保存交互数据
struct SActorLogin_Log_Get
{
	int	lReturn;	// 返回值
	char	szDes[128];	// 返回描述

	SActorLogin_Log_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};

// REQUESTID_LOG_ACTORLOG
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// REQUESTID_MONITOR_ACTORVALUE
// 玩家数值监控 - 输入结构体
struct SMonitorActorValue_Set
{
	s32		lActorId;		// 玩家ID
	s32		lReserveId;		// 保留ID
	u8		lValueType;		// 数值种类(1金钱、2绑定金钱、3元宝、4绑定元宝、5身上全部金钱、6身上全部绑定金钱、7身上全部元宝、8身上全部绑定元宝、9身上全部绑定元宝)
	s32		lNum;			// 数值数量
	u8		lOpType;		// 操作类型(消耗、产生、转移等)
	u8  	lApproach;		// 途径
	s32		lReserveTime;	// 保留时间
	char	szDesc[32];		// 描述字符串

	SMonitorActorValue_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 玩家数值监控 - 输出结构体
struct SMonitorActorValue_Get
{
	s32		lReturn;		// 返回值

	SMonitorActorValue_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_MONITOR_ACTORVALUE
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_MONITOR_LEVEL
// 玩家等级监控 - 输入结构体
struct SMonitorLevel_Set
{
	int	lActorID;		// 角色ID
	BYTE	lLevel;			// 当前级别 
	int	lTime;			// 达到本级所用时间长度(秒)

	SMonitorLevel_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 玩家等级监控 - 输出结构体
struct SMonitorLevel_Get
{
	int	lReturn;	// 返回值
	char	szDes[128];	// 返回描述

	SMonitorLevel_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_MONITOR_LEVEL
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_MONITOR_MONSTER
// 怪物监控 - 输入结构体
struct SMonitorMonster_Set
{
	int	lNum;				// 记录数, 最多450个
	BYTE	MonsterBuf[3600];	// 数据缓冲区，每个记录格式为: 怪物ID(4字节) + 死亡次数(4字节)

	SMonitorMonster_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 怪物监控 - 输出结构体
struct SMonitorMonster_Get
{
	int	lReturn;		// 返回值
	char	szDes[128];		// 返回描述

	SMonitorMonster_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_MONITOR_MONSTER
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_MONITOR_TASK
// 任务监控 - 输入结构体
struct SMonitorTask_Set
{
	int	lNum;				// 记录数, 最多225个
	BYTE	TaskBuf[3600];		// 数据缓冲区，每个记录格式为: 任务ID(4字节) + 接任务次数(4字节) + 完成次数(4字节) + 放弃次数(4字节)

	SMonitorTask_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 任务监控 = 输出结构体
struct SMonitorTask_Get
{
	int	lReturn;		// 返回值

	SMonitorTask_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_MONITOR_TASK
//////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////
// REQUESTID_MONITOR_GOODS_CREATE
// 物品产生监控 - 输入结构体
struct SMonitorGoodsCreate_Set
{
	int	lNum;				// 记录数, 最多400个
	BYTE	GoodsBuf[3600];		// 数据缓冲区，每个记录格式为: 物品产生途径(1字节) + 物品ID(4字节) + 物品个数(4字节)

	SMonitorGoodsCreate_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 物品产生监控 - 输出结构体
struct SMonitorGoodsCreate_Get
{
	int	lReturn;	// 返回值
	char	szDes[128];	// 返回描述

	SMonitorGoodsCreate_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_MONITOR_GOODS_CREATE
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_MONITOR_GOODS_DESTROY
// 物品消耗监控 - 输入结构体
struct SMonitorGoodsDestroy_Set
{
	int	lNum;				// 记录数, 最多400个
	BYTE	GoodsBuf[3600];		// 数据缓冲区，每个记录格式为: 物品消耗途径(1字节) + 物品ID(4字节) + 物品个数(4字节)

	SMonitorGoodsDestroy_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 物品消耗监控 - 输出结构体
struct SMonitorGoodsDestroy_Get
{
	int	lReturn;	// 返回值
	char	szDes[128];	// 返回描述

	SMonitorGoodsDestroy_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_MONITOR_GOODS_DESTROY
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_MONITOR_ACTORGOODS
// 玩家物品转移日志 - 输入结构体
struct SMonitorActorGoods_Set
{
	s32		lGoodsId;			// 物品ID(其中包括金钱ID)
	s16		lGoodsNum;			// 物品个数(如果上面为金钱ID，那么本参数为金钱数量)
	s16		lMapID;				// 关卡地图ID或者试炼之塔
	s32		lFrom;				// 物品原主Id  或者怪物的ID,任务Npc,Id
	BYTE	lFromType;			// 物品原主类型
	s32		lTo;				// 物品新主Id
	BYTE	lToType;			// 物品新主类型
	s16  	lApproach;			// 途径
	BYTE	aAssoc[20];			// 关联流水号
	s32		lTradeMoneyNum;		// 交易涉及的金钱数量
	s32		nMonitoTime;		// 交易时间

	SMonitorActorGoods_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

struct SMonitorActorGoodsBuff_Set
{
	s32		lNum;				// 记录数, 最多75个
	BYTE	GoodsBuf[3600];		// 数据缓冲区，每个记录格式为: sizeof(SMonitorActorGoods_Set) = 48 ,48 * 75 

	SMonitorActorGoodsBuff_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 玩家物品转移日志 - 输出结构体
struct SMonitorActorGoodsBuff_Get
{
	s32		lReturn;		// 返回值

	SMonitorActorGoodsBuff_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_MONITOR_ACTORGOODS
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_MONITOR_WARNING
// 报警监控 - 输入结构体
struct SMonitorWarning_Set
{
	BYTE	lType;			// 错误类型
	int	lActorID;		// 角色ID
	char	szErrMsg[128];	// 错误描述

	SMonitorWarning_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 报警监控
struct SMonitorWarning_Get
{
	int	lReturn;		// 返回值
	char	szDes[128];		// 返回描述

	SMonitorWarning_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_MONITOR_WARNING
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_MONITOR_GAME_DATA
// 游戏数据监控 - 输入结构体
struct SMonitorGameData_Set 
{
	short shNum;					// 记录数，最多248个，248 * 16 = 3968
	BYTE MoraleGoodsBuf[3968];		// 数据缓冲区，每个记录格式为：
	// Key1(4字节) + Key2(4字节) + Key3(4字节，用户来源) + Value(4字节)

	SMonitorGameData_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 游戏数据监控 - 输出结构体
struct SMonitorGameData_Get
{
	int lReturn;		// 返回值
	char szDes[128];	// 返回描述

	SMonitorGameData_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_MONITOR_GAME_DATA
//////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////
// REQUESTID_MONITOR_LEVEL_DISTRIBUTE	208	// 地图玩家等级分布监控
struct SMonitorLevelDistribute_Set
{
	short	wMapID;		/// 地图ID
	BYTE	byLevel;	/// 等级
	int	lNum;		/// 数量
	SMonitorLevelDistribute_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};
struct SMonitorLevelDistributeBuff_Set
{
	int	lNum;					// 记录数, 最多514个
	BYTE	datasBuff[3600];		// 数据缓冲区，sizeof(SMonitorLevelDistribute_Set) = 7

	SMonitorLevelDistributeBuff_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};
// 输出结构体
struct SMonitorLevelDistributeBuff_Get
{
	int	lReturn;		// 返回值
	char	szDes[128];		// 返回描述

	SMonitorLevelDistributeBuff_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_MONITOR_LEVEL_DISTRIBUTE
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_MONITOR_MONSTER_KILL		209	// 怪物杀死玩家等级监控
struct SMonitorMosterKill_Set
{
	int	lMosterID;		/// 怪物ID
	BYTE	byActorLevel;	/// 等级
	int	lNum;			/// 数量
	SMonitorMosterKill_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};
struct SMonitorMosterKillBuff_Set
{
	int	lNum;					// 记录数, 最多400个
	BYTE	datasBuff[3600];		// 数据缓冲区，sizeof(SMonitorMosterKill_Set)=9

	SMonitorMosterKillBuff_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};
// 输出结构体
struct SMonitorMosterKillBuff_Get
{
	int	lReturn;		// 返回值
	char	szDes[128];		// 返回描述

	SMonitorMosterKillBuff_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_MONITOR_LEVEL_DISTRIBUTE
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_MONITOR_PLAYER_INFO		210	// 玩家实时信息监控
struct SMonitorActorInfo_Set
{
	int	lActorID;			/// 玩家ID
	BYTE	byLevel;			/// 等级
	short	wMapID;				/// 地图ID
	int	lExp;				/// 玩家经验
	SMonitorActorInfo_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};
struct SMonitorActorInfoBuff_Set
{
	int	lNum;					// 记录数, 最多327个
	int	lTime;					/// 统计时间点
	BYTE	datasBuff[3600];		// 数据缓冲区，sizeof(SMonitorActorInfo_Set) = 11

	SMonitorActorInfoBuff_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};
// 输出结构体
struct SMonitorActorInfoBuff_Get
{
	int	lReturn;		// 返回值
	char	szDes[128];		// 返回描述

	SMonitorActorInfoBuff_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_MONITOR_LEVEL_DISTRIBUTE
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// REQUESTID_RELATION_GETLIST
// 获取我和谁有关系的玩家列表 - 输入结构体
struct SRelationGetList_Set
{
	int	lActorID;	// 玩家ID

	SRelationGetList_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 获取我和谁有关系的玩家列表 - 输出结构体
struct SRelationGetList_Get
{
	int	lReturn;		// 结果返回
	char	szDes[128];		// 结果描述

	int	lActorNum;			// 有关系的玩家个数

	SRelationGetList_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 获取我和谁有关系的玩家列表 - 输出结果集结构体
struct SRelationGetList_GetSet
{
	int	lRelationID;			// 玩家ID
	char	szActorName[19];		// 玩家名字 

	BYTE	wProfession;			//职业
	BYTE	bSex;					//性别
	BYTE	bNation;				//国家

	BYTE	bType;					//类型(0好友 1仇人)

	BYTE    bFriendType;            //与自己的关系  (好友类型才有) 夫妻师傅徒弟 普通
	int    FriendValue;             //友好度        (好友类型才有)

	SRelationGetList_GetSet()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_RELATION_GETLIST
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_RELATION_GETLIST2
// 获取谁和我有关系的玩家列表 - 输入结构体
struct SRelationGetList2_Set
{
	int	lActorID;	// 玩家ID

	SRelationGetList2_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 获取谁和我有关系的玩家列� - 输出结构体
struct SRelationGetList2_Get
{
	int	lReturn;		// 结果返回
	char	szDes[128];		// 结果描述

	int	lRelationNum;			// 有关系的玩家个数

	SRelationGetList2_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 获取谁和我有关系的玩家列表 - 输出结果集结构体
struct SRelationGetList2_GetSet
{
	int	lRelationID;	// 玩家ID

	SRelationGetList2_GetSet()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_RELATION_GETLIST2
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//REQUESTID_RELATION_ADD
// 根据ID 或者名字 添加关系 - 输入结构体
struct SRelationAddByID_Set
{
	int	lAskerActorID;         //请求者角色ID
	int	lActorID;              //需添加关系的角色ID
	char	szName[19];			   //需添加关系的角色名
	BYTE	bType;                 //操作关系类型（0好友 1仇人）

	SRelationAddByID_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 根据ID添加关系 - 输出结构体
struct SRelationAddByID_Get
{
	int	lReturn;		// 结果返回
	char	szDes[128];		// 结果描述


	int	lrActorID;              //添加关系的角色ID
	char	szrName[19];			//添加关系的角色名
	BYTE	wProfession;			//职业
	BYTE	bSex;					//性别
	BYTE	bNation;				//国家

	BYTE   bFriendType;            //与自己的关系  (好友类型才有)
	int    FriendValue;            //友好度        (好友类型才有)

	SRelationAddByID_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
//REQUESTID_RELATION_ADD
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_RELATION_UPDATE
// 更新关系 - 输入结构体
struct SRelationUpdate_Set
{
	int lAskerActorID;         //请求者角色ID
	int lActorID;              //需变更关系的角色ID

	BYTE bType;                 //操作关系类型（0好友 1仇人 2 黑名单 ）

	BYTE    bFriendType;            //与自己的关系  (好友类型才有)
	int    FriendValue;            //友好度        (好友类型才有)


	SRelationUpdate_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 更新关系 - 输出结构体
struct SRelationUpdate_Get
{
	int	lReturn;		// 结果返回
	char	szDes[128];		// 结果描述

	SRelationUpdate_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_RELATION_UPDATE
//////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////
// REQUESTID_RELATION_DELETE
// 删除 关系 - 输入结构体  2个人只能是在好友或者仇人的状态下 才能更新
struct SRelationDel_Set
{
	int lAskerActorID;         //请求者角色ID
	int lActorID;              //需变更关系的角色ID

	SRelationDel_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 更新关系 - 输出结构体
struct SRelationDel_Get
{
	int	lReturn;		// 结果返回
	char	szDes[128];		// 结果描述

	SRelationDel_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_RELATION_DELETE
//////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////
// REQUESTID_GAMEEVENT_SEND
// 发送游戏事件 - 输入结构体
struct SGameEventSend_Set
{
	s32		lActorID;					// 发送游戏事件的角色ID
	s32		lToActorID;					// 接收游戏事件的角色ID
	char	szGameEventDesz[256];		// 邮件正文
	u8		lGameEventState;			// 游戏事件状态(1: 未领取, 2: 已读取, 0: 没有可领取)
	char	szGoodsBuffer[36];			// 6个物品(4字节lGoodsID + 2字节lGoodsNum)

	SGameEventSend_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 发送游戏事件 - 输出结构体
struct SGameEventSend_Get
{
	s32		lReturn;			// 返回值
	s32		lToActorID;			// 接收游戏事件的角色ID
	s32		lGameEventID;		// 游戏事件ID
	char	szTime[20];			// 发送时间

	SGameEventSend_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_GAMEEVENT_SEND
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_GAMEEVENT_GETLIST
// 获取游戏事件列表 - 输入结构体
struct SGameEventGetList_Set
{
	s32	lActorID;		// 玩家ID

	SGameEventGetList_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 获取游戏事件列表 - 输出结构体
struct SGameEventGetList_Get
{
	s32		lReturn;				// 返回值
	s32		lGameEventID;			// 游戏事件ID
	s32		lSendActorID;			// 发送游戏事件的角色ID
	char	szGameEventDesz[256];	// 游戏事件正文
	char	szTime[20];				// 发送时间
	u8		lGameEventState;		// 游戏事件状态(1: 未领取, 2: 已读取, 0: 没有可领取)
	s32		lLeftTime;				// 剩余保存天数
	char	szGoodsBuffer[36];		// 6个物品(4字节lGoodsID + 2字节lGoodsNum)

	SGameEventGetList_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
// REQUESTID_GAMEEVENT_GETLIST
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_GAMEEVENT_UPDATE
// 更新游戏事件 - 输入结构体
struct SGameEventUpdate_Set
{
	s32		lActorID;		// 玩家ID
	s32		lGameEventID;	// 游戏事件ID

	SGameEventUpdate_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 更新游戏事件 - 输出结构体
struct SGameEventUpdate_Get
{
	s32		lReturn;		// 返回值

	SGameEventUpdate_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 更新游戏事件 - 输出结构体结果集
// REQUESTID_GAMEEVENT_UPDATE
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_GAMEEVENT_DEL
// 删除游戏事件 - 输入结构体
struct SGameEventDel_Set
{
	s32		lActorID;		// 玩家ID
	s32		lGameEventID;	// 游戏事件ID

	SGameEventDel_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 删除游戏事件 - 输出结构体
struct SGameEventDel_Get
{
	s32		lReturn;		// 返回值

	SGameEventDel_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
// 删除游戏事件 - 输出结构体结果集
// REQUESTID_GAMEEVENT_DEL
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// REQUESTID_CHECK_EXERCISE_GET
// 活动判断 - 输入结构体
struct SCheckExercise_Set
{
	int	lExerciseID;	// 活动ID
	s64	qwUserID;		// 玩家ID
	int	lActorID;		// 角色ID
	char	ActorName[19];	// 角色名字
	char	szIP[16];		// 玩家登陆IP
	char	lParam_1[64];	// 参数1
	char	lParam_2[64];	// 参数2
	char	lParam_3[64];	// 参数3

	SCheckExercise_Set()
	{
		memset(this,0,sizeof(*this));
	}
};

// 活动判断 - 输出结构体
struct SCheckExercise_Get
{
	int	lReturn;		// 返回值
	char	szDes[128];		// 返回描述

	SCheckExercise_Get()
	{
		memset(this,0,sizeof(*this));
	}
};

// REQUESTID_CHECK_EXERCISE_GET
//////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////
// 大赛排名DB结构体
//////////////////////////////////////////////////////////////////////////

//REQUESTID_RANK_GET
//获取所有大赛排名信息 - 输入结构体
struct SRankGet_Set
{
	s32	lType;		                          // 类型

	SRankGet_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};
// 获取所有大赛排名信息 - 输出结构体
struct SRankGet_Get
{
	s32	lReturn;		                          // 返回值     0:没找到; 1:找到
	s32	nRank;						  // 排名
	s64	lUserID;					  // 账号ID
	s32	lActorID;					  // 角色ID
	s32	lLevel;						  // 等级
	s8	byHeadPortraitId;				  // 头像

	SRankGet_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
//EQUESTID_RANK_GET
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//REQUESTID_RANK_UPDATE
// 修改大赛排名信息 - 输入结构体 如果该名次不存在就插入
struct SRankUpdate_Set
{
	s32	nRank;		                          // 排名
	s64	lUserID;				  // 账号ID
	s32	lActorID;				  // 角色ID
	s32	lLevel;					  // 等级
	s8	byHeadPortraitId;			  // 头像		

	SRankUpdate_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 修改大赛排名信息 - 输出结构体
struct SRankUpdate_Get
{
	s32	lReturn;		                         // 返回值

	SRankUpdate_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
//REQUESTID_RANK_UPDATE
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// RQUESTID_RANKPRIZE_GET
// 获取大赛日排名奖励 - 输入结构体
struct SRankPrizeGet_Set
{
	s64	lUserID;		                          // 账号ID
	s32	lActorID;					  // 角色ID

	SRankPrizeGet_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

// 获取大赛日排名奖励 - 输出结构体
struct SRankPrizeGet_Get
{
	s32	lReturn;		                         // 返回值
	s32	lRID;						 // 大赛奖励唯一ID
	s32	nRank;						 // 排名
	s32	logTime;					 // 记录时间

	SRankPrizeGet_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};

// REQUESTID_RANKPRIZE_GET
///////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_RANKPRIZE_UPDATE
// 领取指定大赛奖励 - 输入结构体
struct SRankPrizeUpdate_Set
{
        s32     lRID;                                          // 大赛奖励唯一ID

        SRankPrizeUpdate_Set()
        {
                memset(this, 0, sizeof(*this));
        }
};

// 领取指定大赛奖励 - 输出结构体
struct SRankPrizeUpdate_Get
{
        s32     lReturn;                                         // 返回值

        SRankPrizeUpdate_Get()
        {
                memset(this, 0, sizeof(*this));
        }
};
// REQUESTID_RANKPRIZE_UPDATE
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_RANKPRIZE_INSERT
// 生成本次大赛排名结果  - 输入结构体
struct SRankPrizeInsert_Set
{
        s32     lType;                                          // 类型-暂时没用到

        SRankPrizeInsert_Set()
        {
                memset(this, 0, sizeof(*this));
        }
};

// 生成本次大赛排名结果 - 输出结构体
struct SRankPrizeInsert_Get
{
        s32     lReturn;                                         // 返回值

        SRankPrizeInsert_Get()
        {
                memset(this, 0, sizeof(*this));
        }
};
// REQUESTID_RANKPRIZE_INSERT
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_RANKRECORD_INSERT
// 生成战斗记录  - 输入结构体
struct SRankRecordInsert_Set
{
	s64	lAttUserID;					// 攻方账号ID
	s64	lDefUserID;					// 守方账号ID
	s8	lResult;					// 结果
	s32	lAttRank;					// 攻方排名变化
	s32	lDefRank;					// 守方排名变化

	SRankRecordInsert_Set()
        {
                memset(this, 0, sizeof(*this));
        }
};

// 生成战斗记录 - 输出结构体
struct SRankRecordInsert_Get
{
        s32     lReturn;                                         // 返回值

        SRankRecordInsert_Get()
        {
                memset(this, 0, sizeof(*this));
        }
};

// REQUESTID_RANKRECORD_INSERT
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// REQUESTID_RANKRECORD_GET
// 获取战斗记录  - 输入结构体
struct SRankRecordGet_Set
{
	s64	lUserID;					// 账号ID
	s32	lActorID;					// 角色ID

	SRankRecordGet_Set()
        {
                memset(this, 0, sizeof(*this));
        }
};

// 获取战斗记录 - 输出结构体
struct SRankRecordGet_Get
{
	s32     lReturn;                                         // 返回值
	s64	lAttUserID;					 // 攻方账号ID
	s64     lDefUserID;                                      // 守方账号ID
	s8      lResult;                                         // 结果
        s32     lAttRank;                                        // 攻方排名变化
	s32	lDefRank;					 // 守方排名变化
	s32	lLogTime;					 // 记录时间

	SRankRecordGet_Get()
        {
                memset(this, 0, sizeof(*this));
        }
};
// REQUESTID_RANKRECORD_GET
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
/// REQUESTID_UNION_CREATE_ID
/// 请求中心家族数据库分配ID
struct SUnionCreateID_Set
{
	char	szUnionName[20+1];			// 家族名称
	BYTE	byCountryID;				// 家族所在国家
	//BYTE byCityID;					// 家族所在城市

	/// 下面是一个族员的数据（应该是创建者）
	DWORD	dwMemberID;					// 族员ID
	char	psMemberName[18 + 1];		// 族员名
	BYTE	byPost;						// 族员职位

	SUnionCreateID_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

/// 返回分配的家族ID - 输出结构体
struct SUnionCreateID_Get
{
	int lReturn;						// 返回值
	char szDes[128];					// 返回描述
	DWORD dwUnionID;					// 返回家族ID

	SUnionCreateID_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
/// REQUESTID_UNION_CREATE_ID
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
/// REQUESTID_UNION_DELETE_ID
/// 请求中心家族数据库删除ID
struct SUnionDeleteID_Set
{
	DWORD dwUnionID;					// 家族ID

	SUnionDeleteID_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

/// 返回删除结果 - 输出结构体
struct SUnionDeleteID_Get
{
	int lReturn;						// 返回值
	char szDes[128];					// 返回描述

	SUnionDeleteID_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
/// REQUESTID_UNION_DELETE_ID
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
/// REQUESTID_UNION_REQUEST	
/// 请求家族数据 - 输入结构体
struct SUnionInfoList_Set
{
	DWORD dwPageSize;					// 每页显示记录条数，默认为100 
	DWORD PageIndex;					// 当前提取要显示的页码，默认为1，数据库根据PageSize,PageIndex 计算返回一页数据   

	SUnionInfoList_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

/// 请求家族数据 - 输出结构体
struct SUnionInfoList_Get
{
	int lReturn;						// 返回值
	char szDes[128];					// 返回描述
	DWORD RetTotal;						// 总数据个数
	DWORD RetCount;						// 返回数据个数（后面跟上N个SUnionDataInfo）
	DWORD RetPageIndex;					// 总页数

	SUnionInfoList_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};

/// 请求家族数据 - 输出结构体结果集
struct SUnionInfoList_GetSet
{
	DWORD dwUnionID;					// 家族ID
	char szUnionName[20+1];				// 家族名称
	// BYTE byCityID;						// 家族所属城市
	BYTE byCountryID;					// 家族所属国家
	BYTE byLevel;						// 家族等级
	DWORD dwMasterID;					// 家族族长ID
	char szMasterName[18+1];			// 家族族长名称
	BYTE szUnionPower[40];				// 家族权限列表 16位一个职务权限 2 *20个职务
	char szUnionNote[200+1];			// 家族公告
	int lAlivePoint;					// 家族活跃度（定时器定时减少，减少到0则解散家族）
	DWORD	 lUnionExp;					// 家族经验
	BYTE	 szTreeBuffer[75];			// 家族科技树
	BYTE	 szShopBuffer1[100];		// 家族商店数据区1
	BYTE	 szShopBuffer2[100];		// 家族商店数据区2
	BYTE	 szShopBuffer3[100];		// 家族商店数据区3
	BYTE	 szShopBuffer4[100];		// 家族商店数据区4
	BYTE	 szShopBuffer5[100];		// 家族商店数据区5

	SUnionInfoList_GetSet()
	{
		memset(this, 0, sizeof(*this));
	}
};
/// REQUESTID_UNION_REQUEST	
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
/// REQUESTID_UNION_INSERT
/// 创建家族，插入数据库（同时插入一个族员数据） - 输入结构体
struct SUnion_Add_Set
{
	DWORD dwUnionID;					// 家族ID
	char szUnionName[20+1];				// 家族名称
	BYTE byCountryID;					// 家族所在国家
	//BYTE byCityID;					// 家族所在城市
	BYTE szUnionPower[40];				// 家族权限列表 16位一个职务权限 2 *20个职务

	/// 下面是一个族员的数据（应该是创建者）
	DWORD	dwMemberID;					// 族员ID
	char	psMemberName[18 + 1];		// 族员名
	BYTE	byPost;						// 族员职位

	SUnion_Add_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

/// 返回 - 输出结构体
struct SUnion_Add_Get
{
	int lReturn;						// 返回值
	char szDes[128];					// 返回描述

	SUnion_Add_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
/// REQUESTID_UNION_REQUEST	
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
/// REQUESTID_UNION_UPDATE
/// 请求更新家族数据 - 输入结构体
struct SUnion_Update_Set
{
	DWORD dwUnionID;					// 家族ID
	char szUnionName[20+1];				// 家族名称
	BYTE byCountryID;					// 家族所属国家 创建家族的玩家所在国家
	BYTE byLevel;						// 家族等级
	//BYTE byCityID;					// 家族所属城市
	DWORD dwMasterID;					// 家族族长ID
	char szMasterName[18+1];			// 家族族长名称
	BYTE szUnionPower[40];				// 家族权限列表 16位一个职务权限 2 *20个职务
	char szUnionNote[200+1];			// 家族公告
	int lLastAliveTime;				// 上次家族活跃时间（上一次最后一个族员下线的时间）
	DWORD lUnionExp;					// 家族经验

	SUnion_Update_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

/// 返回更新家族结果 - 输出结构体
struct SUnion_Update_Get
{
	int lReturn;						// 返回值
	char szDes[128];					// 返回描述

	SUnion_Update_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
/// REQUESTID_UNION_REQUEST	
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
/// REQUESTID_UNION_TEACH_UPDATE
/// 请求更新家族科技数据 - 输入结构体
struct SUnion_Teach_Update_Set
{
	DWORD	 dwUnionID;					// 家族ID
	DWORD	 lUnionExp;					// 家族经验
	BYTE	 szTreeBuffer[75];			// 家族科技树
	BYTE	 szShopBuffer1[100];		// 家族商店数据区1
	BYTE	 szShopBuffer2[100];		// 家族商店数据区2
	BYTE	 szShopBuffer3[100];		// 家族商店数据区3
	BYTE	 szShopBuffer4[100];		// 家族商店数据区4
	BYTE	 szShopBuffer5[100];		// 家族商店数据区5

	SUnion_Teach_Update_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

/// 返回更新家族结果 - 输出结构体
struct SUnion_Teach_Update_Get
{
	int lReturn;						// 返回值
	char szDes[128];					// 返回描述

	SUnion_Teach_Update_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
/// REQUESTID_UNION_UPDATE_SHOP	
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
/// REQUESTID_UNION_DELETE
/// 请求 - 输入结构体
struct SUnion_Del_Set
{
	DWORD dwUnionID;					// 家族ID
	BYTE byReason;						// 删除原因

	SUnion_Del_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

/// 返回结果 - 输出结构体
struct SUnion_Del_Get
{
	int lReturn;						// 返回值
	char szDes[128];					// 返回描述
	WORD wSize;							// 删除族员的个数

	SUnion_Del_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};

/// 返回结果集 - 族员结构
struct SUnion_Del_GetSet
{
	char psMember[18 + 1];				// 删除的玩家名

	SUnion_Del_GetSet()
	{
		memset(this, 0, sizeof(*this));
	}
};
/// REQUESTID_UNION_REQUEST	
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
/// REQUESTID_UNIONMMEBER_REQUEST
/// 请求族员数据 - 输入结构体
struct SUnionMemberList_Set
{
	DWORD dwUnionID;					// 家族ID

	SUnionMemberList_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

/// 族员数据结果，返回该家族的所有族员数据 - 输出结构体
struct SUnionMemberList_Get
{
	int lReturn;						// 返回值
	char szDes[128];					// 返回描述
	WORD size;							// 数据个数（后面跟上N个SUnionMemberList_GetSet）

	SUnionMemberList_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};

/// 族员数据 - 输出结构体结果集
struct SUnionMemberList_GetSet
{
	DWORD dwMemberID;					// 族员ID
	char psMemberName[18 + 1];			// 族员名
	BYTE byPost;						// 族员职位
	BYTE byProfession;					// 族员职业
	BYTE bySex;							// 族员性别
	int lLevel;						// 族员等级

	SUnionMemberList_GetSet()
	{
		memset(this, 0, sizeof(*this));
	}
};
/// REQUESTID_UNION_REQUEST	
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
/// REQUESTID_UNIONMEMBER_INSERT
/// 加入门，插入数据库 - 输入结构体
struct SUnionMember_Add_Set
{
	DWORD	dwUnionID;					// 所属家族ID
	DWORD	dwMemberID;					// 族员ID
	char	psMemberName[18 + 1];		// 族员名
	BYTE	byPost;						// 族员职位
	BYTE	byProfession;				// 族员职业
	BYTE	bySex;						// 族员性别
	int	lLevel;						// 族员等级

	SUnionMember_Add_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

/// 返回 - 输出结构体
struct SUnionMember_Add_Get
{
	int lReturn;						// 返回值
	char szDes[128];					// 返回描述

	SUnionMember_Add_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
/// REQUESTID_UNION_REQUEST	
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
/// REQUESTID_UNIONMEMBER_UPDATE
/// 更新族员数据 - 输入结构体
struct SUnionMember_Update_Set
{
	DWORD	dwUnionID;					// 所属家族ID
	DWORD	dwMemberID;					// 族员ID
	char	psMemberName[18 + 1];		// 族员名
	BYTE	byPost;						// 族员职位
	BYTE	byProfession;				// 族员职业
	BYTE	bySex;						// 族员性别
	int	lLevel;						// 族员等级

	SUnionMember_Update_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

/// 返回 - 输出结构体
struct SUnionMember_Update_Get
{
	int lReturn;						// 返回值
	char szDes[128];					// 返回描述

	SUnionMember_Update_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
/// REQUESTID_UNION_REQUEST	
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
/// REQUESTID_UNIONMEMBER_DELETE
/// 删除族员数据 - 输入结构体
struct SUnionMember_Del_Set
{
	DWORD dwMemberID;					// 请求删除的族员ID

	SUnionMember_Del_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

/// 返回 - 输出结构体
struct SUnionMember_Del_Get
{
	int lReturn;						// 返回值
	char szDes[128];					// 返回描述

	SUnionMember_Del_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
/// REQUESTID_UNION_REQUEST	
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
/// REQUESTID_DUMMY_BASE_GET
/// 获取假人基本信息 - 输入结构体
struct SDummy_Base_Request_Set
{
	int	lRequestActorID;		// 请求者角色ID
	u8		lRequestLevel;			// 请求者等级
	int		nNum;					// 请求数量
	int		nOffset;				// 请求偏移
	s32		nRequestType;		// 0 : 试炼之塔; 1 : PVP活动

	SDummy_Base_Request_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

struct SDummy_Base_Request_Get
{
	int	lReturn;						// 返回值
	s64	qwDummyUserID;					// 假人账号ID
	int	lDummyActorID;					// 假人角色ID
	char		ActorName[13];					// 角色名字
	s8		bySex;							// 性别
	s8		byHeadPortraitId;				// 头像ID
	u8		lLevel;							// 等级
	u32		lPVPTimes;						// 打竞技场次数
	u32		lPVPWinTimes;					// 打竞技场赢的次数

	SDummy_Base_Request_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
/// REQUESTID_DUMMY_BASE_GET
//////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////
/// REQUESTID_DUMMY_ALL_GET
/// 获取假人完备信息 - 输入结构体
struct SDummy_All_Request_Set
{
	int	lRoomID;				// 房间ID
	s64	qwDummyUserID;			// 假人账号ID

	SDummy_All_Request_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

struct SDummy_All_Request_Get
{
	int	lReturn;				// 返回值
	s64		qwUserID;				// 账号ID
	u32		lActorID;				// 角色ID
	char		ActorName[13];			// 角色名字
	char	szHeadURL[256];			// 假人头像URL
	s8		bySex;					// 性别
	s8		byHeadPortraitId;		// 头像ID
	u8		lLevel;					// 等级
	u32		lPVPTimes;				// 打竞技场次数
	u32		lPVPWinTimes;			// 打竞技场赢的次数

	SDummy_All_Request_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};

struct SDummy_Notch_Request_Get
{
	BYTE	lGoodsNum;				// 物品个数, 最大不能超过40个

	SDummy_Notch_Request_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};

/// REQUESTID_DUMMY_ALL_GET
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
/// REQUESTID_FRIEND_BASE_GET
/// 获取好友基本信息 - 输入结构体
struct SFriend_Base_Request_Set
{
	s32		lRequestActorID;		// 请求者角色ID
	s64		qwFriendUserID;			// 好友的账号ID
	

	SFriend_Base_Request_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

struct SFriend_Base_Request_Get
{
	s32		lReturn;						// 返回值
	s64		qwFriendUserID;					// 好友账号ID
	s32		lFriendActorID;					// 好友角色ID
	char	ActorName[13];					// 角色名字
	s8		bySex;							// 性别
	s8		byHeadPortraitId;				// 头像ID
	u8		lLevel;							// 等级
	u32		lPVPTimes;						// 打竞技场次数
	u32		lPVPWinTimes;					// 打竞技场赢的次数

	SFriend_Base_Request_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
/// REQUESTID_FRIEND_BASE_GET
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
/// REQUESTID_HERO_REQUEST
/// 请求佣兵 - 输入结构体
struct SHero_Request_Set
{
	u32 dwActorID;						/// 玩家ID

	SHero_Request_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

/// 佣兵数据
struct SHeroData
{
	u8	lHeroIndex;						/// 索引
	s32 nTemplateID;					/// 模板ID
	u8	bLevel;							/// 等级
	u32 nExp;							/// 经验
	u8  bState;							/// 状态
	s32 nHungry;						/// 饱食度

	SHeroData()
	{
		memset(this, 0, sizeof(*this));
	}
};
/// REQUESTID_HERO_REQUEST
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
/// REQUESTID_ONE_HERO_REQUEST
/// 请求佣兵 - 输入结构体
struct SOneHero_Request_Set
{
	u32 dwActorID;						/// 玩家ID
	u8	lHeroIndex;						/// 索引

	SOneHero_Request_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

/// REQUESTID_ONE_HERO_REQUEST
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
/// REQUESTID_HERO_UPDATE
/// 佣兵数据更新
///
/// 更新佣兵 - 输入结构体
struct SHero_Update_Set
{
	u32 dwActorID;						/// 玩家ID
	u8  lHeroIndex;						/// 索引
	s32 nTemplateID;					/// 佣兵模板ID
	u8	bLevel;							/// 等级
	u32 nExp;							/// 经验
	u8  bState;							/// 状态
	s32 nHungry;						/// 饱食度

	SHero_Update_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

/// 更新佣兵 - 输出结构体
struct SHero_Update_Get
{
	int lReturn;						/// 返回值
	char szDes[128];					/// 返回描述

	SHero_Update_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
/// REQUESTID_HERO_UPDATE
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
/// REQUESTID_HERO_DELETE
/// 佣兵数据删除
/// 
/// 删除佣兵 - 输入结构体
struct SHero_Delete_Set
{
	u32 dwActorID;					/// 佣兵主人的ID
	u8  lHeroIndex;					/// 佣兵ID;

	SHero_Delete_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

/// 删除佣兵 - 输出结构体
struct SHero_Delete_Get
{
	int lReturn;						/// 返回值
	char szDes[128];					/// 返回描述

	SHero_Delete_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
/// REQUESTID_HERO_DELETE
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
/// REQUESTID_HERO_INSERT
/// 
/// 插入佣兵 - 输入结构体
struct SHero_Insert_Set
{
	u32 dwActorID;						/// 玩家ID
	u8  lHeroIndex;						/// 索引
	s32 nPetTemplateID;					/// 佣兵模板ID
	u8	bLevel;							/// 等级
	u32 nExp;							/// 经验

	SHero_Insert_Set()
	{
		memset(this, 0, sizeof(*this));
	}
};

/// 插入佣兵 - 输出结构体
struct SHero_Insert_Get
{
	int lReturn;						/// 返回值
	char szDes[128];					/// 返回描述

	SHero_Insert_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
/// REQUESTID_HERO_INSERT
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
/// REQUESTID_QQ_GETBUYGOODS
///
/// 获取Q点购买物品 - 输入结构体
struct SQQBuyGoods_Set
{
	s64 lUserID;                   // 用户ID
	s32 lActorID;		       // 角色ID

        SQQBuyGoods_Set()
        {
                memset(this, 0, sizeof(*this));
        }
};

/// 获取Q点购买物品 - 输出结构体
struct SQQBuyGoods_Get
{
        s32 lReturn;                                            /// 返回值
	s32 goodID;						/// 物品ID
	s32 Num;						/// 物品数量

	SQQBuyGoods_Get()
        {
                memset(this, 0, sizeof(*this));
        }
};
/// REQUESTID_QQ_GETBUYGOODS
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
/// REQUESTID_QQ_GETYELLOWVIP
///
/// 获取充黄钻信息 - 输入结构体
struct SQQYellowVIP_Set
{
        s64 lUserID;                   // 用户ID
        s32 lActorID;                  // 角色ID

        SQQYellowVIP_Set()
        {
                memset(this, 0, sizeof(*this));
        }
};

/// 获取Q点购买物品 - 输出结构体
struct SQQYellowVIP_Get
{
        s32 lReturn;                                            /// 返回值
        s32 lYellowVIP;                                         /// 是否充黄钻(0:没有, 1:充了)

        SQQYellowVIP_Get()
        {
                memset(this, 0, sizeof(*this));
        }
};
/// REQUESTID_QQ_GETYELLOWVIP
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
/// REQUESTID_QQ_GETPOINTPRIZE
///
/// 获取Q点充值信息 - 输入结构体
struct SQQPointPrize_Set
{
	s64 lUserID;                   // 用户ID
        s32 lActorID;                  // 角色ID
  s64 lStartTime;               // 开始时间
  s64 lEndTime;                 // 结束时间

	SQQPointPrize_Set()
        {
                memset(this, 0, sizeof(*this));
        }
};

/// 获取Q点充值信息 - 输出结构体
struct SQQPointPrize_Get
{
	s32 lReturn;                                            /// 返回值
        s32 lQQPoint;                                           /// Q点消费(x10)

	SQQPointPrize_Get()
        {
                memset(this, 0, sizeof(*this));
        }

};
/// REQUESTID_QQ_GETPOINTPRIZE
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
/// REQUESTID_UPDATE_PLAYER_DATA_COUNT
/// 玩家数据统计 - 输入结构体
struct SUpdate_Player_Data_Count_Set
{
  s32 lActorID;

  s32 staySurface1;    // 数据统计-界面停留
  s32 staySurface2;
  s32 staySurface3;
  s32 staySurface4;
  s32 staySurface5;
  s32 staySurface6;
  s32 staySurface7;
  s32 staySurface8;
  s32 staySurface9;
  s32 staySurface10;

  s32 fightMob1;        // 数据统计-打怪
  s32 fightMob2;
  s32 fightMob3;
  s32 fightMob4;
  s32 fightMob5;

  s32 makeItem1;        // 数据统计-造道具
  s32 makeItem2;
  s32 makeItem3;
  s32 makeItem4;
  s32 makeItem5;

  s32 makeEquip1;       // 数据统计-造装备
  s32 makeEquip2;
  s32 makeEquip3;
  s32 makeEquip4;
  s32 makeEquip5;

  s32 makeCard1;        // 数据统计-造卡片
  s32 makeCard2;
  s32 makeCard3;
  s32 makeCard4;
  s32 makeCard5;

  SUpdate_Player_Data_Count_Set()
  {
    memset(this, 0, sizeof(*this));
  }
};
/// 请求玩家数据统计 - 输出结构体
struct SUpdate_Player_Data_Count_Get
{
	int lReturn;          // 返回值
	char szDes[128];      // 返回描述

	SUpdate_Player_Data_Count_Get()
	{
		memset(this, 0, sizeof(*this));
	}
};
/// REQUESTID_UPDATE_PLAYER_DATA_COUNT
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
/// REQUESTID_REQUEST_PLAYER_DATA_COUNT
/// 请求玩家数据统计 - 输入结构体
struct SRequest_Player_Data_Count_Set
{
  s32   lActorID;     // 角色ID

  SRequest_Player_Data_Count_Set()
  {
    memset(this, 0, sizeof(*this));
  }
};
/// 请求玩家数据统计 - 输出结构体
struct SRequest_Player_Data_Count_Get
{
  int lReturn;          // 返回值
  s32 staySurface1;    // 数据统计-界面停留
  s32 staySurface2;
  s32 staySurface3;
  s32 staySurface4;
  s32 staySurface5;
  s32 staySurface6;
  s32 staySurface7;
  s32 staySurface8;
  s32 staySurface9;
  s32 staySurface10;

  s32 fightMob1;        // 数据统计-打怪
  s32 fightMob2;
  s32 fightMob3;
  s32 fightMob4;
  s32 fightMob5;

  s32 makeItem1;        // 数据统计-造道具
  s32 makeItem2;
  s32 makeItem3;
  s32 makeItem4;
  s32 makeItem5;

  s32 makeEquip1;       // 数据统计-造装备
  s32 makeEquip2;
  s32 makeEquip3;
  s32 makeEquip4;
  s32 makeEquip5;

  s32 makeCard1;        // 数据统计-造卡片
  s32 makeCard2;
  s32 makeCard3;
  s32 makeCard4;
  s32 makeCard5;

  SRequest_Player_Data_Count_Get()
  {
    memset(this, 0, sizeof(*this));
  }
};
/// REQUESTID_REQUEST_PLAYER_DATA_COUNT
//////////////////////////////////////////////////////////////////////////

#pragma pack(pop)


#endif// _IDBSTRUCT_H_
