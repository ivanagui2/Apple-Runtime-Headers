//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOPlannedDestination, GEORouteHypothesis, NSError, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSUUID;

@interface GEORouteHypothesizer : NSObject
{
    GEOPlannedDestination *_plannedDestination;
    unsigned int _state;
    _Bool _unableToFindRouteForOriginalTransportType;
    GEORouteHypothesis *_currentHypothesis;
    NSError *_currentError;
    CDUnknownBlockType _updateHandler;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_serialQueue;
    _Bool _wakeForDelay;
    NSObject<OS_dispatch_source> *_delayDispatchTimer;
}

+ (void)didDismissUINotification:(unsigned int)arg1 forPlannedDestination:(id)arg2 dismissalType:(unsigned int)arg3;
+ (_Bool)transitTTLSupportedInCurrentCountry;
+ (id)hypothesizerForPlannedDestination:(id)arg1;
@property(readonly, nonatomic) _Bool unableToFindRouteForOriginalTransportType; // @synthesize unableToFindRouteForOriginalTransportType=_unableToFindRouteForOriginalTransportType;
@property(readonly, nonatomic) NSError *currentError; // @synthesize currentError=_currentError;
@property(readonly, nonatomic) GEOPlannedDestination *plannedDestination; // @synthesize plannedDestination=_plannedDestination;
@property(readonly, nonatomic) GEORouteHypothesis *currentHypothesis; // @synthesize currentHypothesis=_currentHypothesis;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (void)didDismissUINotification:(unsigned int)arg1 dismissalType:(unsigned int)arg2;
- (void)didPostUINotification:(unsigned int)arg1;
- (void)onlyPerformLocalUpdates;
- (void)stopHypothesizing;
- (void)requestRefresh;
- (void)startHypothesizingWithUpdateHandler:(CDUnknownBlockType)arg1;
- (void)_delayStartingWithXpc;
- (void)cancelDelayDispatchTimer;
- (void)_delayStartingWithoutXpc;
- (void)_performDelayedStart;
- (_Bool)_wontHypothesizeAgain;
- (void)setDoNotWakeForDelay;
- (_Bool)wakeForDelay;
@property(readonly, nonatomic) double willEndHypothesizingInterval;
@property(readonly, nonatomic) double willBeginHypothesizingInterval;
- (id)initWithPlannedDestination:(id)arg1;

@end
