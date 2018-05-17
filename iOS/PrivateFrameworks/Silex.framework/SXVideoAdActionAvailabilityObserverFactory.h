//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXVideoAdActionAvailabilityObserverFactory.h"

@class NSString;

@interface SXVideoAdActionAvailabilityObserverFactory : NSObject <SXVideoAdActionAvailabilityObserverFactory>
{
    id <SXPlaybackCoordinatorProviding> _playbackCoordinatorProvider;
    id <SXVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
}

@property(readonly, nonatomic) id <SXVideoLoadingStateObserverFactory> loadingStateObserverFactory; // @synthesize loadingStateObserverFactory=_loadingStateObserverFactory;
@property(readonly, nonatomic) id <SXPlaybackCoordinatorProviding> playbackCoordinatorProvider; // @synthesize playbackCoordinatorProvider=_playbackCoordinatorProvider;
- (void).cxx_destruct;
- (id)createActionAvailabilityObserverForVideo:(id)arg1;
- (id)initWithPlaybackCoordinatorProvider:(id)arg1 loadingStateObserverFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
