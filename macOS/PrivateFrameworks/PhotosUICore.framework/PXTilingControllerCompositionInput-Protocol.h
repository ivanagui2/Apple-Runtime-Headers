//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, PXTilingController, PXTilingScrollInfo;

@protocol PXTilingControllerCompositionInput <NSObject>
@property(readonly, nonatomic) NSArray *invalidationContexts;
@property(readonly, nonatomic) NSArray *tilingControllersRequestingFocus;
@property(readonly, nonatomic) struct NSEdgeInsets contentInset;
@property(readonly, nonatomic) struct CGSize referenceSize;
- (PXTilingScrollInfo *)convertScrollInfo:(PXTilingScrollInfo *)arg1 fromTilingController:(PXTilingController *)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromTilingController:(PXTilingController *)arg2;
- (struct CGPoint)originForTilingController:(PXTilingController *)arg1;
- (struct CGPoint)preferredOriginForTilingController:(PXTilingController *)arg1;
- (PXTilingScrollInfo *)scrollInfoForTilingController:(PXTilingController *)arg1;
- (struct CGRect)scrollBoundsForTilingController:(PXTilingController *)arg1;
- (struct CGRect)contentBoundsForTilingController:(PXTilingController *)arg1;
@end

