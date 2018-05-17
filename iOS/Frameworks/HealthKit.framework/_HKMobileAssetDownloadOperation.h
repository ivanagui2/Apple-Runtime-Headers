//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASAsset, NSDictionary, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface _HKMobileAssetDownloadOperation : NSObject
{
    ASAsset *_asset;
    NSDictionary *_downloadOptions;
    long long _state;
    CDUnknownBlockType _completion;
    long long _attemptCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_operationName;
}

- (void).cxx_destruct;
- (void)_queue_assetStateUpdated;
- (void)_queue_resumeAssetDownload;
- (void)_handleDownloadProgressWithState:(id)arg1 error:(id)arg2;
- (void)_queue_assignDownloadHandlerForAsset;
- (void)_queue_downloadAsset;
- (void)_queue_transitionToState:(long long)arg1;
- (void)_queue_transitionToCompleted;
- (void)_queue_transitionToFailureWithError:(id)arg1;
- (void)_queue_transitionToDownloadingAsset;
- (void)_queue_transitionToInitialized;
- (void)_queue_callCompletionWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_queue_run;
- (void)run;
- (id)initWithAsset:(id)arg1 serialQueue:(id)arg2 downloadOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
