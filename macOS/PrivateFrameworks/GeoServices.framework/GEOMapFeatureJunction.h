//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOVectorTile;

@interface GEOMapFeatureJunction : NSObject
{
    CDStruct_2c43369c _coordinate;
    CDStruct_6e3f967a _tilePoint;
    GEOVectorTile *_tile;
}

+ (BOOL)_isPointOnTileBorder:(CDStruct_6e3f967a)arg1;
+ (id)junctionForRoadFeature:(CDStruct_9c468c1c *)arg1 startJunction:(BOOL)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, nonatomic) BOOL isOnTileBorder;
@property(readonly, nonatomic) CDStruct_3b01f0aa *connectivityJunction;
@property(readonly, nonatomic) CDStruct_6e3f967a tilePoint;
@property(readonly, nonatomic) GEOVectorTile *tile;

@end

