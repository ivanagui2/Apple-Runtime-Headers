//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SockPuppetGizmo/NSObject-Protocol.h>

@class SPProgressIndicatorView;

@protocol SPProgressIndicatorViewDelegate <NSObject>

@optional
- (void)activityIndicatorViewDidAnimateOut:(SPProgressIndicatorView *)arg1;
- (void)activityIndicatorViewWillAnimateOut:(SPProgressIndicatorView *)arg1 duration:(double)arg2;
- (void)activityIndicatorViewDidTransitionToDeterminateProgress:(SPProgressIndicatorView *)arg1;
- (void)activityIndicatorViewWillTransitionToDeterminateProgress:(SPProgressIndicatorView *)arg1;
- (void)activityIndicatorViewDidAnimateIn:(SPProgressIndicatorView *)arg1;
- (void)activityIndicatorViewWillAnimateIn:(SPProgressIndicatorView *)arg1 duration:(double)arg2;
@end

