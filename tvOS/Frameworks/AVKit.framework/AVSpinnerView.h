//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAAnimationGroup, CALayer, UIColor;

@interface AVSpinnerView : UIView
{
    struct CGSize _size;
    id _didBecomeActiveNotificationObserver;
    id _willResignActiveNotificationObserver;
    _Bool _animating;
    CAAnimationGroup *_animations;
    UIColor *_color;
    CALayer *_mainLayer;
    CALayer *_overlayLayer;
}

+ (id)repeatingRotationAnimation;
+ (id)spinnerAnimationGroup;
+ (struct CGImage *)spinnerImageWithSize:(struct CGSize)arg1 color:(id)arg2;
@property(retain, nonatomic) CALayer *overlayLayer; // @synthesize overlayLayer=_overlayLayer;
@property(retain, nonatomic) CALayer *mainLayer; // @synthesize mainLayer=_mainLayer;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) CAAnimationGroup *animations; // @synthesize animations=_animations;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (void).cxx_destruct;
- (id)_animationToOpacity:(double)arg1;
- (void)_removeAnimations;
- (void)_addAnimations;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1;

@end

