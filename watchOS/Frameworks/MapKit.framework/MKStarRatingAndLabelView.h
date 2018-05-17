//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MKStarRatingView, NSArray, NSString, UILabel, _MKUILabel;

@interface MKStarRatingAndLabelView : UIView
{
    MKStarRatingView *_starRatingView;
    _MKUILabel *_reviewsLabel;
    NSString *_sourceName;
    unsigned int _numberOfReviews;
    _Bool _displaysSourceOfReviews;
    NSArray *_reviewsLabelConstraints;
    NSString *_fontStyleOverride;
}

+ (id)starRatingAndProviderAsAttributedStringForMapItem:(id)arg1 textColor:(id)arg2 font:(id)arg3 showReviewsOrTips:(_Bool)arg4 ratingStyle:(int)arg5 theme:(id)arg6;
+ (id)starRatingAndProviderAsAttributedStringForMapItem:(id)arg1 textColor:(id)arg2 font:(id)arg3 showReviewsOrTips:(_Bool)arg4 theme:(id)arg5;
+ (id)starRatingAndProviderAsAttributedStringForMapItem:(id)arg1 textColor:(id)arg2 font:(id)arg3 showReviewsOrTips:(_Bool)arg4;
+ (id)ratingAndReviewsAsAttributedString:(float)arg1 style:(int)arg2 font:(id)arg3 numberOfReviews:(unsigned int)arg4 textColor:(id)arg5 theme:(id)arg6;
+ (id)ratingAndReviewsAsAttributedString:(float)arg1 style:(int)arg2 font:(id)arg3 numberOfReviews:(unsigned int)arg4 textColor:(id)arg5;
+ (id)reviewsString:(unsigned int)arg1 providerName:(id)arg2;
@property(retain, nonatomic) NSString *fontStyleOverride; // @synthesize fontStyleOverride=_fontStyleOverride;
@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(nonatomic) unsigned int numberOfReviews; // @synthesize numberOfReviews=_numberOfReviews;
@property(readonly, nonatomic) UILabel *reviewsLabel; // @synthesize reviewsLabel=_reviewsLabel;
@property(readonly, nonatomic) MKStarRatingView *starRatingView; // @synthesize starRatingView=_starRatingView;
- (void).cxx_destruct;
- (id)viewForLastBaselineLayout;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)_updateFonts;
- (void)setDisplaysSourceOfReviews:(_Bool)arg1;
- (void)_mapkit_setCalloutTextColor:(id)arg1;
- (id)initWithStyle:(int)arg1;

@end
