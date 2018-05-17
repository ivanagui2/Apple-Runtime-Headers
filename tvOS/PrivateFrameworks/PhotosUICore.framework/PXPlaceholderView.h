//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PXReusableObject.h"
#import "PXUIViewBasicTile.h"

@class NSString, UIActivityIndicatorView;

@interface PXPlaceholderView : UIView <PXReusableObject, PXUIViewBasicTile>
{
    UIActivityIndicatorView *_indicator;
    _Bool _shouldShowIndicatorView;
}

@property(nonatomic) _Bool shouldShowIndicatorView; // @synthesize shouldShowIndicatorView=_shouldShowIndicatorView;
- (void).cxx_destruct;
- (void)_updateSubviews;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
@property(readonly, nonatomic) UIView *view;
- (void)layoutSubviews;
- (void)becomeReusable;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
