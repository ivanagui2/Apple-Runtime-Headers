//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UICollectionView, UIImageView;

__attribute__((visibility("hidden")))
@interface _TVStackWrappingView : UIView
{
    UIImageView *_backgroundImageView;
    UIImageView *_backgroundBackdropImageView;
    NSArray *_headerSupplementaryViews;
    UICollectionView *_stackView;
    UIView *_backgroundView;
    NSArray *_supplementaryCellLayoutAttributes;
}

@property(readonly, copy, nonatomic) NSArray *supplementaryCellLayoutAttributes; // @synthesize supplementaryCellLayoutAttributes=_supplementaryCellLayoutAttributes;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UICollectionView *stackView; // @synthesize stackView=_stackView;
@property(copy, nonatomic) NSArray *headerSupplementaryViews; // @synthesize headerSupplementaryViews=_headerSupplementaryViews;
- (void).cxx_destruct;
- (id)preferredFocusEnvironments;
- (void)configureSupplementaryCellLayoutAttributesWithAutomaticInsets:(struct UIEdgeInsets)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIImageView *backgroundBackdropImageView; // @synthesize backgroundBackdropImageView=_backgroundBackdropImageView;
@property(readonly, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;

@end

