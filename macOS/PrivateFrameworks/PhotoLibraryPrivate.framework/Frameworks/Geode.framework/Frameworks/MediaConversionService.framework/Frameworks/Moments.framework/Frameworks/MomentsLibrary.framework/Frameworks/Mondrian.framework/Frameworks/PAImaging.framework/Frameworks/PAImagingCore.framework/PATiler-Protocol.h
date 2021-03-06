//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PAImagingCore/NSObject-Protocol.h>

@class IPARegion;

@protocol PATiler <NSObject>
- (void)enumerateTilesInRegion:(IPARegion *)arg1 withBlock:(void (^)(unsigned long long))arg2;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withBlock:(void (^)(unsigned long long))arg2;
- (unsigned long long)tileIndexAtPoint:(struct CGPoint)arg1;
- (struct CGRect)boundsForTileIndex:(unsigned long long)arg1;
- (struct CGRect)frameForTileIndex:(unsigned long long)arg1;
- (unsigned long long)tileCount;
- (struct CGSize)imageSize;
@end

