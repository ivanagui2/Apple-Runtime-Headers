//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields;

@interface GEOPDAutocompleteEntryHighlightSpan : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _length;
    unsigned int _startIndex;
    struct {
        unsigned int length:1;
        unsigned int startIndex:1;
    } _has;
}

@property(nonatomic) unsigned int length; // @synthesize length=_length;
@property(nonatomic) unsigned int startIndex; // @synthesize startIndex=_startIndex;
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
@property(nonatomic) _Bool hasLength;
@property(nonatomic) _Bool hasStartIndex;

@end
