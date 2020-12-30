//
//  IMMessageContent.h
//  FlyChat
//
//  Created by mac on 2020/11/24.
//  Copyright © 2020 FlyChat. All rights reserved.
//

#import <Realm/Realm.h>

NS_ASSUME_NONNULL_BEGIN

@interface IMMessageContent : RLMObject
@property NSString *text;
@property NSString *thumbRemotePath;
@property NSString *rawRemotePath;
@property int width;
@property int height;
@property int duration;
@property NSString *remotePath;
@end

NS_ASSUME_NONNULL_END
