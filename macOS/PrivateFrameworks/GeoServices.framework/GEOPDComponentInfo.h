//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDComponentFilter, PBUnknownFields;

@interface GEOPDComponentInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _count;
    GEOPDComponentFilter *_filter;
    unsigned int _startIndex;
    int _type;
    int _urgency;
    BOOL _includeSource;
    struct {
        unsigned int count:1;
        unsigned int startIndex:1;
        unsigned int type:1;
        unsigned int urgency:1;
        unsigned int includeSource:1;
    } _has;
}

@property(nonatomic) BOOL includeSource; // @synthesize includeSource=_includeSource;
@property(retain, nonatomic) GEOPDComponentFilter *filter; // @synthesize filter=_filter;
@property(nonatomic) unsigned int count; // @synthesize count=_count;
@property(nonatomic) unsigned int startIndex; // @synthesize startIndex=_startIndex;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsUrgency:(id)arg1;
- (id)urgencyAsString:(int)arg1;
@property(nonatomic) BOOL hasUrgency;
@property(nonatomic) int urgency; // @synthesize urgency=_urgency;
@property(nonatomic) BOOL hasIncludeSource;
@property(readonly, nonatomic) BOOL hasFilter;
@property(nonatomic) BOOL hasCount;
@property(nonatomic) BOOL hasStartIndex;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)initWithType:(int)arg1 count:(unsigned int)arg2;

@end
