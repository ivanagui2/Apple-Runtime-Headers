//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleMediaServices/NSObject-Protocol.h>

@class AMSPushConfiguration, AMSPushPayload;
@protocol AMSURLBagContract;

@protocol AMSPushParsable <NSObject>
+ (void)handleNotificationPayload:(AMSPushPayload *)arg1 config:(AMSPushConfiguration *)arg2 bagContract:(id <AMSURLBagContract>)arg3;

@optional
+ (_Bool)shouldSkipAccountCheck;
@end

