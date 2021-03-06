//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoHealthDaemon/HDDataObserver-Protocol.h>
#import <NanoHealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class HDProfile, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface NLHeartRateNotificationManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver>
{
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_fakingNotifyTokens;
}

- (void).cxx_destruct;
- (void)_unsubscribeToFakingNotifications;
- (void)_subscribeToFakingNotification:(id)arg1 type:(id)arg2 withData:(_Bool)arg3;
- (void)_subscribeToFakingNotifications;
- (void)_queue_fakeNotificationWithEventType:(id)arg1 withData:(_Bool)arg2;
- (void)_queue_showNotificationForHeartEvent:(id)arg1;
- (id)_userNotificationCenter;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

