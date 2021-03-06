//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEODirectionsRequestFeedback : PBCodable <NSCopying>
{
    NSString *_appIdentifier;
    int _purpose;
    NSString *_requestingAppId;
    int _source;
    struct {
        unsigned int purpose:1;
        unsigned int source:1;
    } _has;
}

@property(retain, nonatomic) NSString *requestingAppId; // @synthesize requestingAppId=_requestingAppId;
@property(retain, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasRequestingAppId;
@property(readonly, nonatomic) _Bool hasAppIdentifier;
- (int)StringAsSource:(id)arg1;
- (id)sourceAsString:(int)arg1;
@property(nonatomic) _Bool hasSource;
@property(nonatomic) int source; // @synthesize source=_source;
- (int)StringAsPurpose:(id)arg1;
- (id)purposeAsString:(int)arg1;
@property(nonatomic) _Bool hasPurpose;
@property(nonatomic) int purpose; // @synthesize purpose=_purpose;
- (id)initWithPurpose:(int)arg1 andSource:(int)arg2 andIdentifier:(id)arg3;
- (id)initWithPurpose:(int)arg1 andSource:(int)arg2;
- (id)initWithPurpose:(int)arg1;

@end

