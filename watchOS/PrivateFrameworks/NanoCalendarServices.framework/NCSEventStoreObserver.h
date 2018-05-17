//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKEventStore, NCSDelayedBlock, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface NCSEventStoreObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_databaseQueue;
    NSObject<OS_dispatch_queue> *_eventStoreQueue;
    EKEventStore *_eventStore;
    NSObject<OS_dispatch_source> *_eventStoreIdleTimerSource;
    _Bool _ignoreLowLevelDatabaseChangedNotifications;
    _Bool _observing;
    NCSDelayedBlock *_coalescingBlock;
    _Bool _allowsNotifyDatabaseChanged;
    _Bool _shouldNotifyDatabaseChangedWhenAllowed;
}

+ (_Bool)isClassCLocked;
+ (_Bool)deviceUnlockedSinceBoot;
- (void).cxx_destruct;
- (void)databaseChanged:(id)arg1;
- (void)_removeEventStoreNotificationObserver;
- (void)_killEventStoreIdleTimer;
- (void)_resetEventStoreIdleTimer;
- (void)eventStoreWillClose;
- (id)eventStore;
- (void)_timeZoneChanged:(id)arg1;
- (void)_databaseChanged;
- (void)_calDatabaseChangedNotificationReceived;
- (void)_eventStoreChangedNotification:(id)arg1;
- (void)_setAllowDatabaseQueueToNotify:(_Bool)arg1;
- (void)stopNotifyingOfDatabaseChanges;
- (void)startNotifyingOfDatabaseChanges;
- (void)dealloc;
- (_Bool)isObserving;
- (void)stopObserving;
- (void)startObserving;
- (id)init;

@end
