//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDAssertionObserver.h"

@class CMWorkout, CMWorkoutManager, HDAssertionManager, NSObject<OS_dispatch_queue>, NSString;

@interface HDCoreMotionWorkoutInterface : NSObject <HDAssertionObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    CMWorkoutManager *_cmWorkoutManager;
    HDAssertionManager *_assertionManager;
    CMWorkout *_currentCMWorkout;
}

- (void).cxx_destruct;
- (id)_queue_coreMotionWorkoutManager;
- (void)_queue_stopWorkoutWithAssertion:(id)arg1;
- (unsigned long long)_queue_countActiveAssertionsForSessionUUID:(id)arg1;
- (id)_queue_cmWorkoutForConfiguration:(id)arg1 sessionUUID:(id)arg2;
- (void)_queue_startWorkoutWithAssertion:(id)arg1;
- (void)unitTest_setCMWorkoutManager:(id)arg1;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (id)takeCMWorkoutAssertionForOwnerIdentifier:(id)arg1 sessionUUID:(id)arg2 workoutConfiguration:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
