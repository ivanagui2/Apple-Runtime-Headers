//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocalizedString, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPerformer : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_itunesId;
    NSString *_itunesUrl;
    GEOLocalizedString *_name;
    NSString *_performerId;
}

@property(retain, nonatomic) NSString *itunesUrl; // @synthesize itunesUrl=_itunesUrl;
@property(retain, nonatomic) NSString *itunesId; // @synthesize itunesId=_itunesId;
@property(retain, nonatomic) NSString *performerId; // @synthesize performerId=_performerId;
@property(retain, nonatomic) GEOLocalizedString *name; // @synthesize name=_name;
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
@property(readonly, nonatomic) _Bool hasItunesUrl;
@property(readonly, nonatomic) _Bool hasItunesId;
@property(readonly, nonatomic) _Bool hasPerformerId;
@property(readonly, nonatomic) _Bool hasName;

@end

