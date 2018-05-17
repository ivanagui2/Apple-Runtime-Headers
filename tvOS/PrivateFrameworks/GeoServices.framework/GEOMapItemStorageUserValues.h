//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSString, PBUnknownFields;

@interface GEOMapItemStorageUserValues : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_name;
    NSString *_phoneNumber;
    NSData *_timeZoneData;
    NSString *_timeZoneName;
    NSString *_url;
}

@property(retain, nonatomic) NSData *timeZoneData; // @synthesize timeZoneData=_timeZoneData;
@property(retain, nonatomic) NSString *timeZoneName; // @synthesize timeZoneName=_timeZoneName;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasTimeZoneData;
@property(readonly, nonatomic) _Bool hasTimeZoneName;
@property(readonly, nonatomic) _Bool hasUrl;
@property(readonly, nonatomic) _Bool hasPhoneNumber;
@property(readonly, nonatomic) _Bool hasName;

@end
