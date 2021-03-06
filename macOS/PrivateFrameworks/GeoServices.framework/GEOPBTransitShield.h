//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitShieldDataSource-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPBTransitShield : PBCodable <GEOTransitShieldDataSource, NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_shieldColor;
    unsigned int _shieldEnumValue;
    NSString *_shieldText;
    struct {
        unsigned int shieldEnumValue:1;
    } _has;
}

@property(retain, nonatomic) NSString *shieldColor; // @synthesize shieldColor=_shieldColor;
@property(nonatomic) unsigned int shieldEnumValue; // @synthesize shieldEnumValue=_shieldEnumValue;
@property(retain, nonatomic) NSString *shieldText; // @synthesize shieldText=_shieldText;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasShieldColor;
@property(nonatomic) BOOL hasShieldEnumValue;
@property(readonly, nonatomic) BOOL hasShieldText;
@property(readonly, nonatomic) NSString *shieldColorString;
@property(readonly, nonatomic) long long shieldType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

