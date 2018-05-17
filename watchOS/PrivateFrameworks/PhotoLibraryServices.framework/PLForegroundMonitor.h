//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCountedSet, NSMapTable, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface PLForegroundMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSCountedSet *_interestingApplications;
    NSMutableSet *_foregroundApplications;
    NSMapTable *_observers;
    _Bool _isMonitoringApplicationStates;
}

+ (id)sharedInstance;
- (void)_applicationStateDidChange:(id)arg1;
- (void)_applicationDidMoveToBackgroundLocked:(id)arg1;
- (void)_applicationDidMoveToForegroundLocked:(id)arg1;
- (void)_stopMonitoringApplicationStatesLocked;
- (void)_startMonitoringApplicationStatesLocked;
- (void)removeForegroundObserver:(id)arg1 context:(id)arg2;
- (void)addForegroundObserver:(id)arg1 context:(id)arg2;
- (void)stopWatchingApplicationWithBundleIdentifier:(id)arg1;
- (void)startWatchingApplicationWithBundleIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;

@end
