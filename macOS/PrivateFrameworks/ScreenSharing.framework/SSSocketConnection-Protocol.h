//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SSSocketConnection <NSObject>
- (void)server_OKToStartQRAudioCall:(NSString *)arg1;
- (void)server_MicrophoneMuteFlag:(NSString *)arg1 reply:(void (^)(_Bool))arg2;
- (void)server_setMicrophoneMuteFlag:(NSString *)arg1 mute:(_Bool)arg2;
- (void)server_audioChatEnabled:(NSString *)arg1 reply:(void (^)(_Bool))arg2;
- (void)socketForConnectionID:(NSString *)arg1 reply:(void (^)(NSFileHandle *))arg2;
@end
