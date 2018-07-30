//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVVideoAdActionAvailabilityObserver.h"

@class NSString;

@interface SVVideoAdActionAvailabilityObserver : NSObject <SVVideoAdActionAvailabilityObserver>
{
    _Bool _hasActionAvailable;
    CDUnknownBlockType _availabilityChangedBlock;
    id <SVVideoAdProviding> _videoAdProvider;
    id <SVVideoLoadingStateObserving> _loadingStateObserver;
}

@property(readonly, nonatomic) id <SVVideoLoadingStateObserving> loadingStateObserver; // @synthesize loadingStateObserver=_loadingStateObserver;
@property(readonly, nonatomic) id <SVVideoAdProviding> videoAdProvider; // @synthesize videoAdProvider=_videoAdProvider;
@property(copy, nonatomic, setter=onAvailabilityChanged:) CDUnknownBlockType availabilityChangedBlock; // @synthesize availabilityChangedBlock=_availabilityChangedBlock;
@property(nonatomic) _Bool hasActionAvailable; // @synthesize hasActionAvailable=_hasActionAvailable;
- (void).cxx_destruct;
- (id)initWithVideoAdProvider:(id)arg1 loadingStateObserver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
