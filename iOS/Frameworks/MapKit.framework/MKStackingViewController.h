//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIScrollViewDelegate.h"
#import "_MKAnimationStackViewDelegate.h"
#import "_MKStackViewDelegate.h"

@class NSArray, NSHashTable, NSLayoutConstraint, NSMapTable, NSString, UIScrollView, UIView, _MKStackView, _MKStackingContentView;

@interface MKStackingViewController : UIViewController <_MKStackViewDelegate, _MKAnimationStackViewDelegate, UIScrollViewDelegate>
{
    _MKStackView *_stackView;
    _MKStackingContentView *_contentView;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_stackViewWidthConstraint;
    _Bool _isScrollDisabled;
    unsigned long long _countOfCurrentLayoutInvocations;
    UIScrollView *_scrollView;
    NSMapTable *_viewControllersToPreferredHeightConstraints;
    NSMapTable *_viewsToViewControllers;
    NSArray *_titleViewConstraints;
    _Bool _willRelayoutForPreferredContentSizeChange;
    _Bool _isSettingStackedViews;
    _Bool _contentViewConstraintsAdded;
    NSHashTable *_minimallyVisibleViews;
    _Bool _needsToPerformLayout;
    UIView *_overlayView;
    double _overlayViewOriginY;
    _Bool _mayWantSpearators;
    _Bool _needToCallViewControllerLayoutDelegate;
    NSArray *_viewControllers;
    id <MKStackingViewControllerDelegate> _stackingDelegate;
}

@property(nonatomic) __weak id <MKStackingViewControllerDelegate> stackingDelegate; // @synthesize stackingDelegate=_stackingDelegate;
@property(copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void).cxx_destruct;
- (_Bool)isViewVisbile:(id)arg1 percentageTreshold:(double)arg2;
- (void)_updateViewControllerVisibilityAfterPositionChange;
- (void)_didScroll;
- (void)_sendScrollnotification;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateViewConstraints;
- (void)_removePreferredHeightConstraintFromViewController:(id)arg1;
- (void)_addPreferredHeightConstraintForViewControllerIfNeeded:(id)arg1;
- (void)_setPreferredHeight:(double)arg1 forViewController:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)_setOverlayViewFrame;
- (void)removeOverlayViewAnimated:(_Bool)arg1;
- (void)setOverlayView:(id)arg1 withOriginY:(double)arg2;
- (void)_tearDownExitingViewController:(id)arg1;
- (void)_setUpEnteringViewController:(id)arg1;
- (double)stackView:(id)arg1 distanceBetweenUpperView:(id)arg2 andLowerView:(id)arg3;
- (void)_callViewControllersLayoutDelegateIfNeeded;
- (void)_updateStackViewSubviewsAndChildVCsEntering:(id)arg1 exiting:(id)arg2;
- (void)stackViewNeedsLayout:(id)arg1;
- (void)_updateFixedHeightAwareControllers;
- (void)setWidthConstraintConstant:(double)arg1;
- (double)currentHeight;
- (double)_fittingHeightForView:(id)arg1;
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled;
- (void)_setScrollEnabled:(_Bool)arg1 forcedUpdate:(_Bool)arg2;
- (double)_titleHeight;
- (_Bool)_isSafeToPerformLayout;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
