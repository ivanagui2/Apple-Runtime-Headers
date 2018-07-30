//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/_UIStatusBarPersistentAnimationView.h>

#import "_UIStatusBarDisplayable.h"

@class NSString, UIAccessibilityHUDItem, UIColor;

@interface _UIStatusBarSignalView : _UIStatusBarPersistentAnimationView <_UIStatusBarDisplayable>
{
    _Bool _smallSize;
    long long _numberOfBars;
    long long _numberOfActiveBars;
    long long _signalMode;
    UIColor *_inactiveColor;
    UIColor *_activeColor;
    long long _iconSize;
}

+ (struct CGSize)_intrinsicContentSizeForNumberOfBars:(long long)arg1 iconSize:(long long)arg2;
@property(nonatomic) long long iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) _Bool smallSize; // @synthesize smallSize=_smallSize;
@property(copy, nonatomic) UIColor *activeColor; // @synthesize activeColor=_activeColor;
@property(copy, nonatomic) UIColor *inactiveColor; // @synthesize inactiveColor=_inactiveColor;
@property(nonatomic) long long signalMode; // @synthesize signalMode=_signalMode;
@property(nonatomic) long long numberOfActiveBars; // @synthesize numberOfActiveBars=_numberOfActiveBars;
@property(nonatomic) long long numberOfBars; // @synthesize numberOfBars=_numberOfBars;
- (void).cxx_destruct;
- (void)applyStyleAttributes:(id)arg1;
- (void)_updateFromMode:(long long)arg1;
- (void)_updateActiveBars;
- (void)_updateBars;
- (void)_iconSizeDidChange;
- (void)_colorsDidChange;

// Remaining properties
@property(readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long overriddenVerticalAlignment;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsCrossfade;

@end
