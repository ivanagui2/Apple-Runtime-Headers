//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOTimezone, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _area;
    GEOLatLng *_center;
    int _knownAccuracy;
    GEOTimezone *_timezone;
    BOOL _isApproximateCenter;
    struct {
        unsigned int area:1;
        unsigned int knownAccuracy:1;
        unsigned int isApproximateCenter:1;
    } _has;
}

+ (id)placeInfoForPlaceData:(id)arg1;
@property(nonatomic) BOOL isApproximateCenter; // @synthesize isApproximateCenter=_isApproximateCenter;
@property(retain, nonatomic) GEOTimezone *timezone; // @synthesize timezone=_timezone;
@property(nonatomic) double area; // @synthesize area=_area;
@property(retain, nonatomic) GEOLatLng *center; // @synthesize center=_center;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsKnownAccuracy:(id)arg1;
- (id)knownAccuracyAsString:(int)arg1;
@property(nonatomic) BOOL hasKnownAccuracy;
@property(nonatomic) int knownAccuracy; // @synthesize knownAccuracy=_knownAccuracy;
@property(nonatomic) BOOL hasIsApproximateCenter;
@property(readonly, nonatomic) BOOL hasTimezone;
@property(nonatomic) BOOL hasArea;
@property(readonly, nonatomic) BOOL hasCenter;

@end

