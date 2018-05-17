//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXVisibilityReporting.h"

@class NSMapTable, NSString, SXVideoTransitionManager;

@interface SXVideoVisibilityManager : NSObject <SXVisibilityReporting>
{
    id <SXVideoVisibilityMonitorProviding> _visibilityMonitorProvider;
    SXVideoTransitionManager *_transitionManager;
    NSMapTable *_visibilityMonitors;
    id <SXVideoQueueObserving> _queueObserver;
}

@property(readonly, nonatomic) id <SXVideoQueueObserving> queueObserver; // @synthesize queueObserver=_queueObserver;
@property(readonly, nonatomic) NSMapTable *visibilityMonitors; // @synthesize visibilityMonitors=_visibilityMonitors;
@property(readonly, nonatomic) SXVideoTransitionManager *transitionManager; // @synthesize transitionManager=_transitionManager;
@property(readonly, nonatomic) id <SXVideoVisibilityMonitorProviding> visibilityMonitorProvider; // @synthesize visibilityMonitorProvider=_visibilityMonitorProvider;
- (void).cxx_destruct;
- (void)unlock;
- (void)lock;
- (void)updateVisibility;
- (void)stopMonitoringVideo:(id)arg1;
- (void)startMonitoringVideo:(id)arg1;
- (id)initWithTransitionManager:(id)arg1 queueObserver:(id)arg2 visibilityMonitorProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
