//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GEOMapFeatureBuildingSection : NSObject
{
    CDStruct_c3b9c2ee *_coordinates;
    unsigned long long _coordinateCount;
    double _baseHeight;
    double _height;
    CDStruct_dcb4d614 *_feature;
    unsigned long long _sectionIndex;
}

@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) double baseHeight; // @synthesize baseHeight=_baseHeight;
@property(readonly, nonatomic) unsigned long long coordinateCount;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *coordinates;
- (void)dealloc;
- (id)initWithFeature:(CDStruct_dcb4d614 *)arg1 sectionIndex:(unsigned long long)arg2;

@end
