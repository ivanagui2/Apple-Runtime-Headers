//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PUTileController, PUTilingView;

@protocol PUTilingViewTileUseDelegate <NSObject>

@optional
- (void)tilingViewDidEndAnimatingTileControllers:(PUTilingView *)arg1;
- (void)tilingViewDidUpdateTileControllers:(PUTilingView *)arg1;
- (void)tilingView:(PUTilingView *)arg1 didStopUsingTileController:(PUTileController *)arg2;
- (void)tilingView:(PUTilingView *)arg1 willStartUsingTileController:(PUTileController *)arg2;
@end
