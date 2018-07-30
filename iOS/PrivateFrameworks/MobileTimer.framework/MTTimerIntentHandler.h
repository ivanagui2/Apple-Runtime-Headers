//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MTTimerIntentHandler : NSObject
{
    id <MTTimerManagerProviding> _timerManagerProvider;
}

@property(nonatomic) __weak id <MTTimerManagerProviding> timerManagerProvider; // @synthesize timerManagerProvider=_timerManagerProvider;
- (void).cxx_destruct;
- (id)_alternateTimersForTargetTimerState:(long long)arg1 inTimers:(id)arg2 allowedTimerStates:(id)arg3;
- (id)_onlyUnnamedTimerInTimers:(id)arg1 forTargetTimer:(id)arg2 allowMultiple:(_Bool)arg3;
- (void)_genericallyResolveTargetTimer:(id)arg1 multiple:(_Bool)arg2 allowedTimerStatesForFollowup:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_matchTimersFromIntentsTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_timerManager;

@end
