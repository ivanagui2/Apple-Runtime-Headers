//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioningEx.h"
#import "_UIBasicAnimationFactory.h"

@class NSString, NSUUID, UIColor, UIView, _UINavigationInteractiveTransitionBase, _UIParallaxDimmingView;

@interface _UINavigationParallaxTransition : NSObject <_UIBasicAnimationFactory, UIViewControllerAnimatedTransitioningEx>
{
    NSUUID *_currentRunningAnimationsUUID;
    NSUUID *_currentTrackingAnimatorsAnimationsUUID;
    _Bool _interactionAborted;
    _Bool _clipUnderlapWhileTransitioning;
    _Bool __shouldReverseLayoutDirection;
    int _operation;
    id <UIViewControllerContextTransitioning> _transitionContext;
    _UINavigationInteractiveTransitionBase *_interactionController;
    _UIParallaxDimmingView *_borderDimmingView;
    _UIParallaxDimmingView *_contentDimmingView;
    UIView *_containerFromView;
    UIView *_containerToView;
    UIView *_clipUnderView;
    int _transitionStyle;
    float _transitionGap;
    UIColor *_overrideDimmingColor;
}

+ (double)defaultSlidingTransitionDuration;
+ (void)setDefaultSlidingTransitionDuration:(double)arg1;
@property(retain, nonatomic) UIColor *overrideDimmingColor; // @synthesize overrideDimmingColor=_overrideDimmingColor;
@property(nonatomic, setter=_setShouldReverseLayoutDirection:) _Bool _shouldReverseLayoutDirection; // @synthesize _shouldReverseLayoutDirection=__shouldReverseLayoutDirection;
@property(nonatomic) float transitionGap; // @synthesize transitionGap=_transitionGap;
@property(nonatomic) int transitionStyle; // @synthesize transitionStyle=_transitionStyle;
@property(nonatomic) _Bool clipUnderlapWhileTransitioning; // @synthesize clipUnderlapWhileTransitioning=_clipUnderlapWhileTransitioning;
@property(retain, nonatomic) UIView *clipUnderView; // @synthesize clipUnderView=_clipUnderView;
@property(retain, nonatomic) UIView *containerToView; // @synthesize containerToView=_containerToView;
@property(retain, nonatomic) UIView *containerFromView; // @synthesize containerFromView=_containerFromView;
@property(retain, nonatomic) _UIParallaxDimmingView *contentDimmingView; // @synthesize contentDimmingView=_contentDimmingView;
@property(retain, nonatomic) _UIParallaxDimmingView *borderDimmingView; // @synthesize borderDimmingView=_borderDimmingView;
@property(nonatomic) _UINavigationInteractiveTransitionBase *interactionController; // @synthesize interactionController=_interactionController;
@property(nonatomic) _Bool interactionAborted; // @synthesize interactionAborted=_interactionAborted;
@property(retain, nonatomic) id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(nonatomic) int operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (void)_stopTransitionImmediately;
- (id)_timingFunctionForAnimation;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)completeKeyboard:(id)arg1;
- (void)animateKeyboard:(id)arg1;
- (void)prepareToAnimateKeyboard:(id)arg1;
- (void)resizeShadow:(id)arg1;
- (id)shadowContainerForKeyboardTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (float)parallaxOffset;
- (float)gapBetweenViews;
- (void)animationEnded:(_Bool)arg1;
- (double)transitionDuration:(id)arg1;
- (id)resizedFromContainerView;
- (id)resizedToContainerView;
- (id)initWithCurrentOperation:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
