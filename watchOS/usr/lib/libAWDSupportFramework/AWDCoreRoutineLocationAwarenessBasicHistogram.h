//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface AWDCoreRoutineLocationAwarenessBasicHistogram : PBCodable <NSCopying>
{
    CDStruct_56d48c16 _counts;
}

- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setCounts:(int *)arg1 count:(unsigned int)arg2;
- (int)countAtIndex:(unsigned int)arg1;
- (void)addCount:(int)arg1;
- (void)clearCounts;
@property(readonly, nonatomic) int *counts;
@property(readonly, nonatomic) unsigned int countsCount;
- (void)dealloc;

@end
