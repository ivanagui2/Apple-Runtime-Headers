//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"
#import "UNUserNotificationCenterDelegateServiceProtocol.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface UNUserNotificationCenterDelegateConnectionListener : NSObject <NSXPCListenerDelegate, UNUserNotificationCenterDelegateServiceProtocol>
{
    NSMutableDictionary *_listenerByBundleIdentifier;
    NSMutableDictionary *_delegateByBundleIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_queue_didReceiveNotificationResponse:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_queue_invalidateListenerForBundleIdentifier:(id)arg1;
- (void)_queue_ensureListenerForBundleIdentifier:(id)arg1;
- (void)_queue_setDelegate:(id)arg1 forBundleIdentifier:(id)arg2;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)didReceiveNotificationResponse:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setDelegate:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
