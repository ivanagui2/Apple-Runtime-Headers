//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, _UIActivityGroupActivityCellTitleLabel;

__attribute__((visibility("hidden")))
@interface _UIActivityGroupActivityCell : UICollectionViewCell
{
    unsigned long long _sequence;
    _UIActivityGroupActivityCellTitleLabel *_titleLabel;
    UIImageView *_imageView;
    UIImageView *_highlightedImageView;
}

+ (struct CGSize)preferredSizeForSheetWidth:(double)arg1 sizeCategory:(id)arg2 titleLabelText:(id)arg3 screenScale:(double)arg4;
+ (void)invalidatePreferredSizes;
@property(retain, nonatomic) UIImageView *highlightedImageView; // @synthesize highlightedImageView=_highlightedImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) _UIActivityGroupActivityCellTitleLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long sequence; // @synthesize sequence=_sequence;
- (void).cxx_destruct;
- (void)initHighlightedImageViewIfNeeded;
- (void)updateHighlightedImageViewIfNeeded;
- (void)setHighlighted:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)draggingView;

@end

