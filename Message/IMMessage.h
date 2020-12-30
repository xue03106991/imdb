//
//  IMMessage.h
//  FlyChat
//
//  Created by mac on 2020/11/24.
//  Copyright © 2020 FlyChat. All rights reserved.
//

#import <Realm/Realm.h>
#import "IMChatDefines.h"
#import "IMMessageContent.h"



NS_ASSUME_NONNULL_BEGIN

@interface IMMessage : RLMObject
@property long clientMsgId;
@property long msgId;
@property long sendUid;
@property long timestamp;
@property BOOL isPrivate;
@property long conversationId;
@property IMMessageType msgType;
@property IMChatType chatType;
@property IMChatDirection direction;
@property IMMessageContent *msgContent;
@end


NS_ASSUME_NONNULL_END
