//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVPhotoSourceServiceDelegate.h"

@class NSArray, NSDictionary, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSObject<OS_xpc_object>, NSString, TVPhotoSourceService, TVSPreferences;

@interface TVPhotoScreenSaverCache : NSObject <TVPhotoSourceServiceDelegate>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_source> *_timerSource;
    TVSPreferences *_screenSaverPrefs;
    NSArray *_photoAssets;
    id _preferencesObserverToken;
    id _sessionIdentifier;
    double _refreshInterval;
    _Bool _isCachingSessionInProgress;
    _Bool _didFinishReceivingPhotoAssets;
    NSMutableArray *_imageProxies;
    NSDictionary *_currentScreenSaverInfo;
    NSMutableArray *_cachedAssets;
    NSString *_screenSaverPhotoSource;
    NSString *_screenSaverCollection;
    NSObject<OS_xpc_object> *_xpcActivity;
    _Bool _cachingEnabled;
    TVPhotoSourceService *_photoSourceService;
    CDUnknownBlockType _photoCacheCompletionBlock;
}

+ (long long)maxCachedSizeInMB;
+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType photoCacheCompletionBlock; // @synthesize photoCacheCompletionBlock=_photoCacheCompletionBlock;
@property(retain, nonatomic) TVPhotoSourceService *photoSourceService; // @synthesize photoSourceService=_photoSourceService;
@property _Bool cachingEnabled; // @synthesize cachingEnabled=_cachingEnabled;
- (void).cxx_destruct;
- (_Bool)_shouldUseIdleScreen;
- (_Bool)_isInternalPhotoProviderForCollection:(id)arg1;
- (id)_loadCachedAssets;
- (void)_saveCachedAssets;
- (void)_deleteCachedAssetsFile;
- (id)_cachedAssetsFilename;
- (void)_removeCachedAssetsNotInPhotoAssets:(id)arg1;
- (void)_cacheNextAssetForSession:(id)arg1 startIndex:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_photoSourceWithIdentifier:(id)arg1;
- (void)_cancelTimerSource;
- (void)_scheduleTimeoutTimerWithSessionID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_cachingCompletedWithErrorCode:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_cachingCompleted;
- (void)_cacheFilesInPhotoAssets:(id)arg1;
- (void)_cachePhotoCollection:(id)arg1 session:(id)arg2 shouldHandleFailureMode:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_checkCollectionAndMaybeStartCaching:(_Bool)arg1;
- (void)_beginCachingPhotoAssets:(id)arg1 sessionID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_clearCache;
- (double)_refreshInterval;
- (void)_scheduleCacheRefreshWithInitialDelay:(double)arg1;
- (void)_scheduleCacheRefresh;
- (void)_initializeXPCActivity;
- (void)didFinishPhotoAssetsFetchForSession:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)didReceiveIncrementalPhotoAssets:(id)arg1 sessionID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)stop;
- (void)start;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
