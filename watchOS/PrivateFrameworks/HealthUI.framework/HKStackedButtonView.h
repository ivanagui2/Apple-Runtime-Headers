//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSLayoutConstraint, NSLayoutYAxisAnchor, NSString, UIBlurEffect, UILabel;

@interface HKStackedButtonView : UIView
{
    _Bool _bottomAdjustsForHomeButtonlessScreen;
    _Bool _blurHidden;
    NSArray *_buttons;
    int _lastButtonMode;
    NSArray *_titles;
    NSArray *_styles;
    int _buttonMode;
    NSString *_disclaimerText;
    UILabel *_disclaimerTextLabel;
    UIBlurEffect *_backgroundBlurEffect;
    UIView *_backgroundBlurView;
    NSLayoutConstraint *_backgroundBlurViewLeadingConstraint;
    NSLayoutConstraint *_backgroundBlurViewTrailingConstraint;
    NSLayoutYAxisAnchor *_firstTopAnchor;
    float _firstTopConstant;
    NSLayoutConstraint *_bottomConstraint;
    id <HKStackedButtonViewDelegate> _delegate;
}

+ (float)_buttonSpacingForValue:(float)arg1;
+ (float)_disclaimerTextSpacingForValue:(float)arg1;
+ (id)_disclaimerTextFont;
+ (id)buddyStackedButtonViewWithTitles:(id)arg1 disclaimerText:(id)arg2 delegate:(id)arg3;
@property(nonatomic) __weak id <HKStackedButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(nonatomic) float firstTopConstant; // @synthesize firstTopConstant=_firstTopConstant;
@property(retain, nonatomic) NSLayoutYAxisAnchor *firstTopAnchor; // @synthesize firstTopAnchor=_firstTopAnchor;
@property(retain, nonatomic) NSLayoutConstraint *backgroundBlurViewTrailingConstraint; // @synthesize backgroundBlurViewTrailingConstraint=_backgroundBlurViewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *backgroundBlurViewLeadingConstraint; // @synthesize backgroundBlurViewLeadingConstraint=_backgroundBlurViewLeadingConstraint;
@property(retain, nonatomic) UIView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
@property(retain, nonatomic) UIBlurEffect *backgroundBlurEffect; // @synthesize backgroundBlurEffect=_backgroundBlurEffect;
@property(retain, nonatomic) UILabel *disclaimerTextLabel; // @synthesize disclaimerTextLabel=_disclaimerTextLabel;
@property(copy, nonatomic) NSString *disclaimerText; // @synthesize disclaimerText=_disclaimerText;
@property(nonatomic) int buttonMode; // @synthesize buttonMode=_buttonMode;
@property(copy, nonatomic) NSArray *styles; // @synthesize styles=_styles;
@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(nonatomic, getter=isBlurHidden) _Bool blurHidden; // @synthesize blurHidden=_blurHidden;
@property(nonatomic) _Bool bottomAdjustsForHomeButtonlessScreen; // @synthesize bottomAdjustsForHomeButtonlessScreen=_bottomAdjustsForHomeButtonlessScreen;
@property(nonatomic) int lastButtonMode; // @synthesize lastButtonMode=_lastButtonMode;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (void).cxx_destruct;
- (void)_updateBottomConstraint;
- (void)_createViewBottomConstraint;
- (void)_assignConstraintsForButtons;
- (void)_setUpDisclaimerText;
- (id)_createButtons;
- (void)_setUpBlurEffect;
- (void)_setUpButtons;
- (void)actionButtonTapped:(id)arg1;
- (void)alignBlurViewHorizontalConstraintsWithView:(id)arg1;
- (id)initWithButtonTitles:(id)arg1 styles:(id)arg2 disclaimerText:(id)arg3 delegate:(id)arg4;

@end
