//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoard/FBBundleInfo.h>

@class FBApplicationLibrary, FBApplicationPlaceholderProgress, LSApplicationProxy, NSMutableSet, NSObject;
@protocol FBApplicationPlaceholderProgress, OS_dispatch_queue;

@interface FBApplicationPlaceholder : FBBundleInfo
{
    LSApplicationProxy *_proxy;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    FBApplicationPlaceholderProgress *_queue_progress;
    NSMutableSet *_queue_observers;
    FBApplicationLibrary *_appLibrary;
}

+ (id)_callOutQueue;
+ (id)_sharedQueue;
@property(nonatomic) __weak FBApplicationLibrary *appLibrary; // @synthesize appLibrary=_appLibrary;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (unsigned long long)installPhase;
- (unsigned long long)installState;
- (unsigned long long)installType;
- (void)_queue_noteChangedSignificantly:(id)arg1;
- (void)_noteChangedSignificantly;
- (void)_reloadProgress;
- (void)_queue_setProxy:(id)arg1 force:(_Bool)arg2;
- (void)_setProxy:(id)arg1 force:(_Bool)arg2;
@property(retain, nonatomic, getter=_proxy, setter=_setProxy:) LSApplicationProxy *proxy;
- (void)_resumeWithResult:(CDUnknownBlockType)arg1;
- (void)_pauseWithResult:(CDUnknownBlockType)arg1;
- (void)_cancelWithResult:(CDUnknownBlockType)arg1;
- (void)_prioritizeWithResult:(CDUnknownBlockType)arg1;
- (_Bool)_performAction:(unsigned long long)arg1 withResult:(CDUnknownBlockType)arg2;
- (_Bool)_canPerformAction:(unsigned long long)arg1;
- (_Bool)_queue_canPerformAction:(unsigned long long)arg1;
- (unsigned long long)_queue_supportedActions;
- (_Bool)_queue_isCloudDemoted;
- (void)_reloadFromProxy:(id)arg1;
- (void)_sendToObserversPlaceholderDidChangeSignificantly;
- (void)_sendToObserversPlaceholderProgressDidUpdate;
- (void)_dispatchToObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)resume;
- (_Bool)pause;
- (_Bool)cancel;
- (_Bool)prioritize;
@property(readonly, nonatomic) double percentComplete;
@property(readonly, nonatomic, getter=isRestricted) _Bool restricted;
- (_Bool)cancelWithResult:(CDUnknownBlockType)arg1;
- (_Bool)resumeWithResult:(CDUnknownBlockType)arg1;
- (_Bool)pauseWithResult:(CDUnknownBlockType)arg1;
- (_Bool)prioritizeWithResult:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isCancellable) _Bool cancellable;
@property(readonly, nonatomic, getter=isResumable) _Bool resumable;
@property(readonly, nonatomic, getter=isPausable) _Bool pausable;
@property(readonly, nonatomic, getter=isPrioritizable) _Bool prioritizable;
@property(readonly, nonatomic) id <FBApplicationPlaceholderProgress> progress;
- (void)dealloc;
- (id)_initWithApplicationProxy:(id)arg1;
- (id)_initWithBundleProxy:(id)arg1 url:(id)arg2;
- (id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2;

@end

