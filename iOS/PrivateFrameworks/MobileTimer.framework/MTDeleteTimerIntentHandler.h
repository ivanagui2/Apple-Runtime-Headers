//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MobileTimer/MTTimerIntentHandler.h>

#import "INDeleteTimerIntentHandling.h"

@class NSString;

@interface MTDeleteTimerIntentHandler : MTTimerIntentHandler <INDeleteTimerIntentHandling>
{
}

- (void)_deleteTimer:(id)arg1 multiple:(_Bool)arg2 dryRun:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_responseToDeleteTimerIntent:(id)arg1 withDeletedTimers:(id)arg2 error:(id)arg3 dryRun:(_Bool)arg4;
- (void)handleDeleteTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmDeleteTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveDeleteMultipleForDeleteTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveTargetTimerForDeleteTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
