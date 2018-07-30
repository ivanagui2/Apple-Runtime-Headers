//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, PXCMMImageView, PXCMMPosterHeaderViewSpec, PXGradientView, UIImageView, UILabel;

@interface PXCMMPosterHeaderView : UIView
{
    PXCMMPosterHeaderViewSpec *_spec;
    PXCMMImageView *_imageView;
    PXGradientView *_topGradientView;
    PXGradientView *_bottomGradientView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_statusLabel;
    UIImageView *_statusCheckmark;
    _Bool _showStatusCheckmark;
    NSString *_title;
    NSString *_subtitle;
    NSString *_statusString;
}

+ (double)preferredHeightForWidth:(double)arg1 traitCollection:(id)arg2 screen:(id)arg3;
@property(nonatomic) _Bool showStatusCheckmark; // @synthesize showStatusCheckmark=_showStatusCheckmark;
@property(copy, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_updateFonts;
- (void)_performLayoutWithSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) id <PXUIImageProvider> mediaProvider;
@property(readonly, nonatomic) id <PXDisplayAsset> asset;
- (void)setAsset:(id)arg1 mediaProvider:(id)arg2;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (id)initWithPresentationStyle:(long long)arg1;

@end
