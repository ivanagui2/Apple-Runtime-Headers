//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDAssertionObserver-Protocol.h>

@class CMWorkout, CMWorkoutManager, HDAssertionManager, NSString;
@protocol OS_dispatch_queue;

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
- (unsigned int)_queue_countActiveAssertionsForSessionUUID:(id)arg1;
- (id)_queue_cmWorkoutForConfiguration:(id)arg1 sessionUUID:(id)arg2;
- (void)_queue_startWorkoutWithAssertion:(id)arg1;
- (void)unitTest_setCMWorkoutManager:(id)arg1;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (id)takeCMWorkoutAssertionForOwnerIdentifier:(id)arg1 sessionUUID:(id)arg2 workoutConfiguration:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

