//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSource : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _resultProviderId;
    NSString *_sourceId;
    NSString *_version;
    struct {
        unsigned int resultProviderId:1;
    } _has;
}

@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(nonatomic) int resultProviderId; // @synthesize resultProviderId=_resultProviderId;
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
@property(readonly, nonatomic) _Bool hasVersion;
@property(readonly, nonatomic) _Bool hasSourceId;
@property(nonatomic) _Bool hasResultProviderId;

@end

