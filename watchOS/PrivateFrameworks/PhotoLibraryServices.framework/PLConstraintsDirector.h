//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLForegroundObserver.h"

@class NSObject<OS_dispatch_source>, NSString;

@interface PLConstraintsDirector : NSObject <PLForegroundObserver>
{
    _Bool _didTransitionToOpportunisticDisallowed;
    _Bool _photosAppInForeground;
    NSObject<OS_dispatch_source> *_bonusTimer;
}

+ (id)sharedConstraintsDirector;
+ (_Bool)_photoanalysisdIsRunning;
- (void)foregroundMonitor:(id)arg1 changedStateToForeground:(_Bool)arg2 forBundleIdentifier:(id)arg3 context:(id)arg4;
- (void)informCameraAppCameraViewControllerVisibilityChanged:(_Bool)arg1;
- (void)informOpportunisticTasksAllowed:(_Bool)arg1;
- (void)dealloc;
- (id)init;
- (void)_addBonusTime;
- (void)_disableAutoFGAndUserFGConstraints;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
