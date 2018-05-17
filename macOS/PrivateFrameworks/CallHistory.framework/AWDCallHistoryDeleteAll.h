//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface AWDCallHistoryDeleteAll : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _recordCount;
    struct {
        unsigned int timestamp:1;
        unsigned int recordCount:1;
    } _has;
}

@property(nonatomic) unsigned int recordCount; // @synthesize recordCount=_recordCount;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasRecordCount;
@property(nonatomic) BOOL hasTimestamp;

@end
