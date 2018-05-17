//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMActivityAlarm, NSArray, NSDate, NSObject<OS_dispatch_queue>, NSString;

@interface NLActivityAlarmMonitor : NSObject
{
    NSString *_taskName;
    CMActivityAlarm *_alarm;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_alarmTriggers;
    int _alarmTriggerIndex;
    _Bool _invalidated;
    int _activityMonitorType;
    NSDate *_startDate;
    CDUnknownBlockType _handler;
    double _duration;
    double _timeout;
}

@property(readonly, nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) int activityMonitorType; // @synthesize activityMonitorType=_activityMonitorType;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_queue_invalidate;
- (void)invalidate;
- (void)_queue_fireHandlerWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_queue_handleActivityAlarm:(id)arg1 error:(id)arg2;
- (void)_queue_startNextAlarm;
- (void)_queue_registerForTimeout;
- (void)_queue_initializeAlarm;
- (void)_taskTimedOut;
- (void)start;
- (id)initWithTaskName:(id)arg1 activityMonitorType:(int)arg2 duration:(double)arg3 timeout:(double)arg4 handler:(CDUnknownBlockType)arg5;

@end
