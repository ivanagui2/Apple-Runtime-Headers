//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol PXDisplayAsset, PXUIImageProvider;

@interface PXCMMImageView : UIView
{
    _Bool _highlighted;
    id <PXDisplayAsset> _asset;
    id <PXUIImageProvider> _mediaProvider;
}

@property(readonly, nonatomic) id <PXUIImageProvider> mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) id <PXDisplayAsset> asset; // @synthesize asset=_asset;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
- (void).cxx_destruct;
- (void)setAsset:(id)arg1 mediaProvider:(id)arg2;

@end

