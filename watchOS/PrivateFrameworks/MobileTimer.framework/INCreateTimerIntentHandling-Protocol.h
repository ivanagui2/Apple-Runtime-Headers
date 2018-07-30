//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class INCreateTimerIntent;

@protocol INCreateTimerIntentHandling <NSObject>
- (void)handleCreateTimer:(INCreateTimerIntent *)arg1 completion:(void (^)(INCreateTimerIntentResponse *))arg2;

@optional
- (void)resolveDurationForCreateTimer:(INCreateTimerIntent *)arg1 withCompletion:(void (^)(INTimeIntervalResolutionResult *))arg2;
- (void)resolveLabelForCreateTimer:(INCreateTimerIntent *)arg1 withCompletion:(void (^)(INCreateTimerLabelResolutionResult *))arg2;
- (void)confirmCreateTimer:(INCreateTimerIntent *)arg1 completion:(void (^)(INCreateTimerIntentResponse *))arg2;
@end
