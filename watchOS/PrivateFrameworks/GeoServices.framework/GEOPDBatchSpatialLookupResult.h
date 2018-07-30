//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBatchSpatialLookupResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_spatialEventLookupResults;
    NSMutableArray *_spatialPlaceLookupResults;
    int _statusCode;
    CDStruct_bcb1eac0 _has;
}

+ (Class)spatialEventLookupResultType;
+ (Class)spatialPlaceLookupResultType;
@property(retain, nonatomic) NSMutableArray *spatialEventLookupResults; // @synthesize spatialEventLookupResults=_spatialEventLookupResults;
@property(retain, nonatomic) NSMutableArray *spatialPlaceLookupResults; // @synthesize spatialPlaceLookupResults=_spatialPlaceLookupResults;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)spatialEventLookupResultAtIndex:(unsigned int)arg1;
- (unsigned int)spatialEventLookupResultsCount;
- (void)addSpatialEventLookupResult:(id)arg1;
- (void)clearSpatialEventLookupResults;
- (id)spatialPlaceLookupResultAtIndex:(unsigned int)arg1;
- (unsigned int)spatialPlaceLookupResultsCount;
- (void)addSpatialPlaceLookupResult:(id)arg1;
- (void)clearSpatialPlaceLookupResults;
- (int)StringAsStatusCode:(id)arg1;
- (id)statusCodeAsString:(int)arg1;
@property(nonatomic) _Bool hasStatusCode;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;

@end
