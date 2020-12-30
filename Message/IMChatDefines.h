//
//  IMChatDefines.h
//  FlyChat
//
//  Created by mac on 2020/11/25.
//  Copyright © 2020 FlyChat. All rights reserved.
//

#ifndef IMChatDefines_h
#define IMChatDefines_h

#import "FlyChat.h"

typedef NS_ENUM(NSInteger, IMMessageType) {
    IMMessageTypeText = E_MSG_TEXT,
    IMMessageTypeLocation = E_MSG_POSITION,
    IMMessageTypeImage = E_MSG_IMAGE,
    IMMessageTypeVideo = E_MSG_VIDEO,
    IMMessageTypeVoice = E_MSG_VOICE,
    IMMessageTypeWithdraw = E_MSG_WITHDRAW,
    IMMessageTypeFile = E_MSG_FILE,
    IMMessageTypeFriendAdd = E_FRIEND_ADD,
    IMMessageTypeFriendAck = E_FRIEND_ACK,
    IMMessageTypeGroupNew = E_GROUP_ADD,//创建群
    IMMessageTypeGroupMemberDel = E_GROUP_DEL,//移除群成员
    IMMessageTypeGroupInfoChange = E_GROUP_CHANGE,//群信息变更
    IMMessageTypeUserinfoChange = E_USERINFO_CHANGE,//好友个人信息变更
    IMMessageTypeGroupApply = E_APPLY_GROUP,//个人扫码申请加入群聊，通知群主
    IMMessageTypeGroupApplyAck = E_APPLY_GROUP_ACK,//个人扫码申请加入群聊，通知个人
    IMMessageTypePrivateMsgDisposeSetting = E_PRIVATE_CHAT_SETTING_CHANGE,//设置私密聊天销毁时间通知
    IMMessageTypePublicAccount = E_MSG_PUBLIC_ACCOUNT,//系统服务消息
    IMMessageTypeMix = E_MSG_MIXED,//混合消息类型
    IMMessageTypeEdit = E_MSG_EDIT,//编辑消息
    IMMessageTypeReply = E_MSG_REPLY,//回复消息
    IMMessageTypeFriendDel = E_FRIEND_DEL,//对方删除了你，同时对方将自己从你的好友列表删除
    IMMessageTypeOtherMsgDel = E_MSG_DEL_OTHER,//同时删除对方消息
    IMMessageTypeVoiceInvite = E_MSG_VOICE_INVITE,//语音通话消息类型，对方不在线的情况，该类型理论上都是对方已取消类型
    IMMessageTypeGroupRightsChange = E_GROUP_RIGHT_CHANGE,//群权限发生变更，需要重新拉取
    IMMessageTypeGroupRightsExceptionalUserAdd = E_GROUP_ADD_EXCEPTIONAL_USER_RIGHT,//成员被加入例外用户（权限变更）
    IMMessageTypeGroupRightsExceptionalUserChange = E_GROUP_EXCEPTIONAL_USER_RIGHT_CHANGE,//例外用户权限发生变成（权限变更）
    IMMessageTypeGroupRightsExceptionalUserDel = E_GROUP_DEL_EXCEPTIONAL_USER_RIGHT,//成员被移除例外用户，此时权限等于群权限
    IMMessageTypeGroupAdiminAdd = E_GROUP_ADD_ADMIN,//被提升为管理员
    IMMessageTypeGroupAdminDel = E_GROUP_DEL_ADMIN,//被解除管理员角色
    IMMessageTypeGroupAdminRightsChange = E_GROUP_ADMIN_RIGHT_CHANGE,//管理员的权限变更（只能群主可操作）
    IMMessageTypeNameCard = E_MSG_CARD,
    IMMessageTypeVideoMsgDisposeSetting = E_NORMAL_CHAT_MESSAGE_DESTORY_SETTING_CHANGE,//普通聊天消息销毁时间设置
};

typedef NS_ENUM(NSInteger, IMChatType) {
    IMChatType = 1,
    IMChatTypeGroup = 2
};

typedef NS_ENUM(NSInteger, IMChatDirection) {
    IMChatDirectionLeft,
    IMChatDirectionRight
};

#endif /* IMChatDefines_h */
