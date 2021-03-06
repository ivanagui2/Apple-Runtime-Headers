//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, UIViewController;
@protocol OS_os_log, PUAssetActionPerformerDelegate;

@interface PUAssetActionPerformer : NSObject
{
    CDUnknownBlockType _completionHandler;
    unsigned long long _actionType;
    unsigned long long _state;
    id <PUAssetActionPerformerDelegate> _delegate;
    UIViewController *_presentedViewController;
    NSObject<OS_os_log> *_actionPerformerLog;
    NSArray *_assets;
    NSDictionary *_assetsByAssetCollection;
}

@property(readonly, copy, nonatomic) NSDictionary *assetsByAssetCollection; // @synthesize assetsByAssetCollection=_assetsByAssetCollection;
@property(readonly, copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(nonatomic) __weak NSObject<OS_os_log> *actionPerformerLog; // @synthesize actionPerformerLog=_actionPerformerLog;
@property(readonly, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(nonatomic) __weak id <PUAssetActionPerformerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (void)_completeStateWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_transitionToState:(unsigned long long)arg1 withSuccess:(_Bool)arg2 error:(id)arg3;
- (void)_handleStepFinished:(unsigned long long)arg1 withSuccess:(_Bool)arg2 error:(id)arg3;
- (void)completeBackgroundTaskWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)performBackgroundTask;
- (void)completeUserInteractionTaskWithSuccess:(_Bool)arg1 error:(id)arg2;
- (_Bool)dismissViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)presentViewController:(id)arg1;
- (void)performUserInteractionTask;
- (void)preheatUserInteractionTask;
- (void)_completeUnlockTaskWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_performUnlockIfNeeded;
- (_Bool)_requiresUnlockedDevice;
- (void)performWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithActionType:(unsigned long long)arg1 assets:(id)arg2 orAssetsByAssetCollection:(id)arg3;
- (id)init;

@end

