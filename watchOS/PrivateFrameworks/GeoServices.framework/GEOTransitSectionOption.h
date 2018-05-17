//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOTransitSectionOption : PBCodable <NSCopying>
{
    CDStruct_084d6ede _sections;
    unsigned int _defaultSectionIndex;
    struct {
        unsigned int defaultSectionIndex:1;
    } _has;
}

@property(nonatomic) unsigned int defaultSectionIndex; // @synthesize defaultSectionIndex=_defaultSectionIndex;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDefaultSectionIndex;
- (void)setSections:(unsigned int *)arg1 count:(unsigned int)arg2;
- (unsigned int)sectionAtIndex:(unsigned int)arg1;
- (void)addSection:(unsigned int)arg1;
- (void)clearSections;
@property(readonly, nonatomic) unsigned int *sections;
@property(readonly, nonatomic) unsigned int sectionsCount;
- (void)dealloc;

@end
