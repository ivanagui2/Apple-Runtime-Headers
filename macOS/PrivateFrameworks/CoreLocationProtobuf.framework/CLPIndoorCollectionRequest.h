//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class CLPMeta, NSMutableArray;

@interface CLPIndoorCollectionRequest : PBRequest <NSCopying>
{
    NSMutableArray *_indoorCMAttitudes;
    NSMutableArray *_indoorCMPedometers;
    NSMutableArray *_indoorLocations;
    NSMutableArray *_indoorMotionActivitys;
    NSMutableArray *_indoorPressures;
    NSMutableArray *_indoorWifis;
    CLPMeta *_meta;
}

+ (Class)indoorPressureType;
+ (Class)indoorMotionActivityType;
+ (Class)indoorCMPedometerType;
+ (Class)indoorCMAttitudeType;
+ (Class)indoorLocationsType;
+ (Class)indoorWifisType;
@property(retain, nonatomic) NSMutableArray *indoorPressures; // @synthesize indoorPressures=_indoorPressures;
@property(retain, nonatomic) NSMutableArray *indoorMotionActivitys; // @synthesize indoorMotionActivitys=_indoorMotionActivitys;
@property(retain, nonatomic) NSMutableArray *indoorCMPedometers; // @synthesize indoorCMPedometers=_indoorCMPedometers;
@property(retain, nonatomic) NSMutableArray *indoorCMAttitudes; // @synthesize indoorCMAttitudes=_indoorCMAttitudes;
@property(retain, nonatomic) NSMutableArray *indoorLocations; // @synthesize indoorLocations=_indoorLocations;
@property(retain, nonatomic) NSMutableArray *indoorWifis; // @synthesize indoorWifis=_indoorWifis;
@property(retain, nonatomic) CLPMeta *meta; // @synthesize meta=_meta;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)indoorPressureAtIndex:(unsigned long long)arg1;
- (unsigned long long)indoorPressuresCount;
- (void)addIndoorPressure:(id)arg1;
- (void)clearIndoorPressures;
- (id)indoorMotionActivityAtIndex:(unsigned long long)arg1;
- (unsigned long long)indoorMotionActivitysCount;
- (void)addIndoorMotionActivity:(id)arg1;
- (void)clearIndoorMotionActivitys;
- (id)indoorCMPedometerAtIndex:(unsigned long long)arg1;
- (unsigned long long)indoorCMPedometersCount;
- (void)addIndoorCMPedometer:(id)arg1;
- (void)clearIndoorCMPedometers;
- (id)indoorCMAttitudeAtIndex:(unsigned long long)arg1;
- (unsigned long long)indoorCMAttitudesCount;
- (void)addIndoorCMAttitude:(id)arg1;
- (void)clearIndoorCMAttitudes;
- (id)indoorLocationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)indoorLocationsCount;
- (void)addIndoorLocations:(id)arg1;
- (void)clearIndoorLocations;
- (id)indoorWifisAtIndex:(unsigned long long)arg1;
- (unsigned long long)indoorWifisCount;
- (void)addIndoorWifis:(id)arg1;
- (void)clearIndoorWifis;

@end
