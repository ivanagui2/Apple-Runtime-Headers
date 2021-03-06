//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIInteraction-Protocol.h>
#import <UIKitCore/UIInteraction_Private-Protocol.h>
#import <UIKitCore/_UIClickInteractionDelegate-Protocol.h>
#import <UIKitCore/_UIPreviewInteractionImpl-Protocol.h>

@class NSString, UIPreviewInteraction, UIView, _UIClickInteraction, _UIPreviewInteractionViewControllerHelper, _UIRelationshipGestureRecognizer, _UIStateMachine;
@protocol UIInteractionEffect, UIPreviewInteractionDelegate, UIPreviewInteractionDelegatePrivate, _UIPreviewInteractionTouchForceProviding;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionClickImpl : NSObject <_UIClickInteractionDelegate, UIInteraction_Private, UIGestureRecognizerDelegate, _UIPreviewInteractionImpl, UIInteraction>
{
    struct {
        _Bool shouldBegin;
        _Bool didUpdateCommitTransition;
        _Bool highlighterForPreviewTransition;
        _Bool viewControllerPresentationForPresentingViewController;
        _Bool shouldFinishTransitionToPreview;
        _Bool shouldAutomaticallyTransitionToPreviewAfterDelay;
        _Bool overrideViewForCommitPhase;
    } _delegateImplements;
    id <UIPreviewInteractionDelegate> _delegate;
    id <UIPreviewInteractionDelegatePrivate> _privateDelegate;
    UIView *_view;
    id <_UIPreviewInteractionTouchForceProviding> _touchForceProvider;
    UIPreviewInteraction *_previewInteraction;
    id <UIInteractionEffect> _interactionEffect;
    _UIStateMachine *_stateMachine;
    _UIClickInteraction *_previewClickInteraction;
    _UIClickInteraction *_commitClickInteraction;
    _UIRelationshipGestureRecognizer *_exclusionRelationshipGestureRecognizer;
    _UIPreviewInteractionViewControllerHelper *_viewControllerHelper;
}

@property(retain, nonatomic) _UIPreviewInteractionViewControllerHelper *viewControllerHelper; // @synthesize viewControllerHelper=_viewControllerHelper;
@property(retain, nonatomic) _UIRelationshipGestureRecognizer *exclusionRelationshipGestureRecognizer; // @synthesize exclusionRelationshipGestureRecognizer=_exclusionRelationshipGestureRecognizer;
@property(retain, nonatomic) _UIClickInteraction *commitClickInteraction; // @synthesize commitClickInteraction=_commitClickInteraction;
@property(retain, nonatomic) _UIClickInteraction *previewClickInteraction; // @synthesize previewClickInteraction=_previewClickInteraction;
@property(retain, nonatomic) _UIStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) id <UIInteractionEffect> interactionEffect; // @synthesize interactionEffect=_interactionEffect;
@property(nonatomic) __weak UIPreviewInteraction *previewInteraction; // @synthesize previewInteraction=_previewInteraction;
@property(retain, nonatomic) id <_UIPreviewInteractionTouchForceProviding> touchForceProvider; // @synthesize touchForceProvider=_touchForceProvider;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <UIPreviewInteractionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)_gestureRecognizerForExclusionRelationship;
- (void)_interactionEnded:(_Bool)arg1 notifyDelegateIfNecessary:(_Bool)arg2;
- (void)_interactionEnded:(_Bool)arg1;
- (void)_cancelInteractionInternal:(_Bool)arg1;
- (void)_handleTransitionToPreview;
- (void)_preparePreviewInteractionHighlighter;
@property(readonly, nonatomic) unsigned long long currentState;
- (void)_prepareStateMachine;
- (void)clickInteractionDidClickUp:(id)arg1;
- (void)clickInteractionDidClickDown:(id)arg1;
- (id)highlightEffectForClickInteraction:(id)arg1;
- (void)clickInteractionDidEnd:(id)arg1;
- (_Bool)clickInteractionShouldBegin:(id)arg1;
@property(readonly, nonatomic) id <UIPreviewInteractionDelegatePrivate> privateDelegate; // @synthesize privateDelegate=_privateDelegate;
- (void)_performPresentationIfPossible;
- (void)_startPreviewAtLocation:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)didMoveToView:(id)arg1;
- (void)willMoveToView:(id)arg1;
- (void)cancelInteraction;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1 previewInteraction:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

