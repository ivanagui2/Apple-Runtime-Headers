//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBHomeEntity-Protocol.h>

@class NSString, _INPBString;

@interface _INPBHomeEntity : PBCodable <_INPBHomeEntity, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int deviceType:1;
        unsigned int entityType:1;
    } _has;
    int _deviceType;
    int _entityType;
    _INPBString *_name;
}

@property(retain, nonatomic) _INPBString *name; // @synthesize name=_name;
@property(nonatomic) int entityType; // @synthesize entityType=_entityType;
@property(nonatomic) int deviceType; // @synthesize deviceType=_deviceType;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasName;
- (int)StringAsEntityType:(id)arg1;
- (id)entityTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasEntityType;
- (int)StringAsDeviceType:(id)arg1;
- (id)deviceTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasDeviceType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

