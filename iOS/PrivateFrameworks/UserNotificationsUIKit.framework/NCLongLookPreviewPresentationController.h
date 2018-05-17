//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPreviewPresentationController.h"

#import "NCLongLookPresentationController.h"

@class NCLongLookPresentationControllerHelper, NSString;

@interface NCLongLookPreviewPresentationController : UIPreviewPresentationController <NCLongLookPresentationController>
{
    NCLongLookPresentationControllerHelper *_presentationControllerHelper;
    id <NCLongLookPresentationControllerDelegate> _longLookPresentationControllerDelegate;
}

@property(nonatomic) __weak id <NCLongLookPresentationControllerDelegate> longLookPresentationControllerDelegate; // @synthesize longLookPresentationControllerDelegate=_longLookPresentationControllerDelegate;
- (void).cxx_destruct;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)containerViewWillLayoutSubviews;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (_Bool)_shouldDisableInteractionDuringTransitions;
- (_Bool)_shouldMakePresentedViewControllerFirstResponder;
- (void)longLookAnimatorDidFinishFirstResponderChanges:(id)arg1;
@property(nonatomic) double additionalHomeAffordanceSpacing;
@property(nonatomic, getter=isHomeAffordanceVisible) _Bool homeAffordanceVisible;
- (void)completeDismissal;
- (void)hintDismissalWithCommitProgress:(double)arg1 overallProgress:(double)arg2;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 sourceView:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
