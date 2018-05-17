//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MFComposeRecipient, NSArray, UIColor, UILabel;

@interface MFRecipientTableViewCell : UITableViewCell
{
    MFComposeRecipient *_recipient;
    UIColor *_tintColor;
    _Bool _shouldHideDetailLabel;
    _Bool _shouldHighlightCompleteMatches;
    _Bool _shouldDimIrrelevantInformation;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    NSArray *_activeConstraints;
}

+ (double)detailLineHeight;
+ (id)labelDetailStringAttributes;
+ (id)groupDetailStringAttributes;
+ (id)highlightedDetailStringAttributes;
+ (id)defaultDetailStringAttributes;
+ (id)highlightedTitleStringAttributes;
+ (id)regularTitleStringAttributes;
+ (id)defaultTitleStringAttributes;
+ (id)_defaultTintColor;
+ (double)heightWithRecipient:(id)arg1 width:(double)arg2;
+ (double)height;
+ (id)_tintedAttributedString:(id)arg1 toColor:(id)arg2 shouldDim:(_Bool)arg3;
+ (id)_attributedStringRepresentationOfPartialEmailMatchForSingleRecipient:(id)arg1 useHighlighting:(_Bool)arg2;
+ (id)_copyAttributedStringRepresentationOfGroupRecipient:(id)arg1 withSortedRecipientList:(id)arg2;
+ (id)_attributedStringRepresentationOfCompleteMatchesForRecipient:(id)arg1 constrainedToWidth:(double)arg2 overflowRecipients:(out id *)arg3 useHighlighting:(_Bool)arg4;
+ (double)_realDetailButtonAccessoryMargin;
+ (double)_constrainedWidthForDetailViewWithAccessoryWidth:(double)arg1 containerWidth:(double)arg2;
+ (double)_constrainedWidthForTitleViewWithAccessoryWidth:(double)arg1 containerWidth:(double)arg2;
+ (double)_deviceSpecificLayoutMargin;
+ (id)cellForRecipient:(id)arg1;
+ (id)identifier;
@property(retain, nonatomic) NSArray *activeConstraints; // @synthesize activeConstraints=_activeConstraints;
@property(readonly, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool shouldDimIrrelevantInformation; // @synthesize shouldDimIrrelevantInformation=_shouldDimIrrelevantInformation;
@property(nonatomic) _Bool shouldHighlightCompleteMatches; // @synthesize shouldHighlightCompleteMatches=_shouldHighlightCompleteMatches;
- (void)animateSnapshotOfLabel:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)setTintColor:(id)arg1 animated:(_Bool)arg2;
- (id)tintColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setOpaque:(_Bool)arg1;
- (void)setRecipient:(id)arg1;
- (id)recipient;
- (void)updateActiveConstraints;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
