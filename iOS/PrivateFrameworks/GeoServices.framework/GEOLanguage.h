//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, PBUnknownFields;

@interface GEOLanguage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _identifier;
    NSMutableArray *_languages;
}

+ (Class)languageType;
@property(retain, nonatomic) NSMutableArray *languages; // @synthesize languages=_languages;
@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
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
- (id)languageAtIndex:(unsigned long long)arg1;
- (unsigned long long)languagesCount;
- (void)addLanguage:(id)arg1;
- (void)clearLanguages;

@end
