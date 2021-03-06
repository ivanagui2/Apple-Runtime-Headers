//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIStatusBarItemView.h>

#import <UIKitCore/CAAnimationDelegate-Protocol.h>

@class NSString, UIView, _UIExpandingGlyphsView, _UIStatusBarLockItemPadlockView;

__attribute__((visibility("hidden")))
@interface UIStatusBarLockItemView : UIStatusBarItemView <CAAnimationDelegate>
{
    _Bool _alongsideViewIsBecomingVisible;
    UIView *_viewToAnimateAlongside;
    _UIStatusBarLockItemPadlockView *_padlockView;
    UIView *_textClippingView;
    _UIExpandingGlyphsView *_textView;
    float _padlockViewCenterOffsetFromForegroundViewCenter;
    UIView *_timeItemSnapshot;
    float _timeItemSnapshotCenterOffsetFromForegroundViewCenter;
    float _widthNeededDuringAnimation;
    float _widthNeededForFinalState;
    int _animationCount;
    CDUnknownBlockType _animationCompletionBlock;
}

+ (double)lockSlideAnimationDuration;
@property(copy, nonatomic) CDUnknownBlockType animationCompletionBlock; // @synthesize animationCompletionBlock=_animationCompletionBlock;
@property(nonatomic) int animationCount; // @synthesize animationCount=_animationCount;
@property(nonatomic) float widthNeededForFinalState; // @synthesize widthNeededForFinalState=_widthNeededForFinalState;
@property(nonatomic) float widthNeededDuringAnimation; // @synthesize widthNeededDuringAnimation=_widthNeededDuringAnimation;
@property(nonatomic) float timeItemSnapshotCenterOffsetFromForegroundViewCenter; // @synthesize timeItemSnapshotCenterOffsetFromForegroundViewCenter=_timeItemSnapshotCenterOffsetFromForegroundViewCenter;
@property(retain, nonatomic) UIView *timeItemSnapshot; // @synthesize timeItemSnapshot=_timeItemSnapshot;
@property(nonatomic) float padlockViewCenterOffsetFromForegroundViewCenter; // @synthesize padlockViewCenterOffsetFromForegroundViewCenter=_padlockViewCenterOffsetFromForegroundViewCenter;
@property(retain, nonatomic) _UIExpandingGlyphsView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *textClippingView; // @synthesize textClippingView=_textClippingView;
@property(retain, nonatomic) _UIStatusBarLockItemPadlockView *padlockView; // @synthesize padlockView=_padlockView;
@property(nonatomic) _Bool alongsideViewIsBecomingVisible; // @synthesize alongsideViewIsBecomingVisible=_alongsideViewIsBecomingVisible;
@property(nonatomic) __weak UIView *viewToAnimateAlongside; // @synthesize viewToAnimateAlongside=_viewToAnimateAlongside;
- (void).cxx_destruct;
- (id)accessibilityHUDRepresentation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)jiggleCompletionBlock:(CDUnknownBlockType)arg1;
- (void)animateUnlockForegroundView:(id)arg1 timeItemSnapshot:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setVisible:(_Bool)arg1 frame:(struct CGRect)arg2 duration:(double)arg3;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (float)updateContentsAndWidth;
- (_Bool)_isAnimating;
- (void)_endAnimation;
- (void)_beginAnimation;
- (_Bool)isExclusive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

