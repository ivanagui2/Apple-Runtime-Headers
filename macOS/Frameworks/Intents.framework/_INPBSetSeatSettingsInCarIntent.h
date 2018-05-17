//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields, _INPBInteger, _INPBIntentMetadata;

@interface _INPBSetSeatSettingsInCarIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBIntentMetadata *_intentMetadata;
    _INPBInteger *_level;
    int _relativeLevelSetting;
    int _seat;
    BOOL _enableCooling;
    BOOL _enableHeating;
    BOOL _enableMassage;
    struct {
        unsigned int relativeLevelSetting:1;
        unsigned int seat:1;
        unsigned int enableCooling:1;
        unsigned int enableHeating:1;
        unsigned int enableMassage:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) _INPBInteger *level; // @synthesize level=_level;
@property(nonatomic) BOOL enableMassage; // @synthesize enableMassage=_enableMassage;
@property(nonatomic) BOOL enableCooling; // @synthesize enableCooling=_enableCooling;
@property(nonatomic) BOOL enableHeating; // @synthesize enableHeating=_enableHeating;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsRelativeLevelSetting:(id)arg1;
- (id)relativeLevelSettingAsString:(int)arg1;
@property(nonatomic) BOOL hasRelativeLevelSetting;
@property(nonatomic) int relativeLevelSetting; // @synthesize relativeLevelSetting=_relativeLevelSetting;
@property(readonly, nonatomic) BOOL hasLevel;
- (int)StringAsSeat:(id)arg1;
- (id)seatAsString:(int)arg1;
@property(nonatomic) BOOL hasSeat;
@property(nonatomic) int seat; // @synthesize seat=_seat;
@property(nonatomic) BOOL hasEnableMassage;
@property(nonatomic) BOOL hasEnableCooling;
@property(nonatomic) BOOL hasEnableHeating;
@property(readonly, nonatomic) BOOL hasIntentMetadata;

@end
