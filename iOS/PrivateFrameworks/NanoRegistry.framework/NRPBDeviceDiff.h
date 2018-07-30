//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface NRPBDeviceDiff : PBCodable <NSCopying>
{
    NSMutableArray *_diffs;
    NSMutableArray *_names;
}

+ (Class)diffsType;
+ (Class)namesType;
@property(retain, nonatomic) NSMutableArray *diffs; // @synthesize diffs=_diffs;
@property(retain, nonatomic) NSMutableArray *names; // @synthesize names=_names;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)diffsAtIndex:(unsigned long long)arg1;
- (unsigned long long)diffsCount;
- (void)addDiffs:(id)arg1;
- (void)clearDiffs;
- (id)namesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namesCount;
- (void)addNames:(id)arg1;
- (void)clearNames;

@end
