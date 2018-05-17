//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel, UITableView, UIVisualEffectView;

@interface HKSplashScreenView : UIView
{
    UILabel *_titleLabel;
    UITableView *_featureTableView;
    UIButton *_continueButton;
    UIVisualEffectView *_topBlurView;
    UIVisualEffectView *_bottomBlurView;
}

@property(retain, nonatomic) UIVisualEffectView *bottomBlurView; // @synthesize bottomBlurView=_bottomBlurView;
@property(retain, nonatomic) UIVisualEffectView *topBlurView; // @synthesize topBlurView=_topBlurView;
@property(retain, nonatomic) UIButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) UITableView *featureTableView; // @synthesize featureTableView=_featureTableView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateTableViewInsetsForHeaderAndFooterBlurView;
- (void)layoutSubviews;
- (void)updateForFontOrTextChange;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
