//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PLViewControllerAnimator;

@protocol PLViewControllerAnimatorDelegate <NSObject>

@optional
- (void)viewControllerAnimator:(PLViewControllerAnimator *)arg1 didEndDismissalAnimation:(_Bool)arg2 withTransitionContext:(id <UIViewControllerContextTransitioning>)arg3;
- (void)viewControllerAnimator:(PLViewControllerAnimator *)arg1 didEndPresentationAnimation:(_Bool)arg2 withTransitionContext:(id <UIViewControllerContextTransitioning>)arg3;
@end
