//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/FBSSceneLayerDelegate-Protocol.h>
#import <FrontBoardServices/FBSSceneUpdaterDelegate-Protocol.h>

@class FBSSceneClientSettings, FBSSceneSettings, NSArray, NSString;
@protocol FBSSceneDelegate;

@interface FBSScene : NSObject <FBSSceneUpdaterDelegate, FBSSceneLayerDelegate, BSDescriptionProviding>
{
}

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)sceneLayerDidInvalidate:(id)arg1;
- (void)sceneLayerDidUpdate:(id)arg1;
- (_Bool)sceneLayerShouldObserveUpdates:(id)arg1;
- (void)updater:(id)arg1 didReceiveMessage:(id)arg2 withResponse:(CDUnknownBlockType)arg3;
- (void)updater:(id)arg1 didReceiveActions:(id)arg2;
- (void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)invalidate;
- (void)_willDestroyWithTransitionContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didCreateWithTransitionContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_hasAgent;
- (id)contexts;
- (id)fbsDisplay;
- (id)display;
- (_Bool)invalidateSnapshotWithContext:(id)arg1;
- (_Bool)performSnapshotWithContext:(id)arg1;
- (id)snapshotRequest;
- (void)detachLayer:(id)arg1;
- (void)attachLayer:(id)arg1;
- (void)detachSceneContext:(id)arg1;
- (void)attachSceneContext:(id)arg1;
- (void)detachContext:(id)arg1;
- (void)attachContext:(id)arg1;
- (void)sendActions:(id)arg1;
- (void)updateClientSettingsWithTransitionBlock:(CDUnknownBlockType)arg1;
- (void)updateClientSettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2;
@property(readonly, nonatomic) NSArray *layers;
@property(readonly, nonatomic) FBSSceneClientSettings *clientSettings;
@property(readonly, nonatomic) FBSSceneSettings *settings;
@property(nonatomic) __weak id <FBSSceneDelegate> delegate;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)_init;
- (id)init;
- (id)initWithQueue:(id)arg1 identifier:(id)arg2 display:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5;
- (id)initWithCallOutQueue:(id)arg1 identifier:(id)arg2 parameters:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

