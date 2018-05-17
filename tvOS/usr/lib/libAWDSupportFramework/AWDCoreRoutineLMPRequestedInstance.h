//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface AWDCoreRoutineLMPRequestedInstance : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _confidence;
    NSString *_eventId;
    int _occurrences;
    int _reason;
    _Bool _suggested;
    struct {
        unsigned int timestamp:1;
        unsigned int confidence:1;
        unsigned int occurrences:1;
        unsigned int reason:1;
        unsigned int suggested:1;
    } _has;
}

@property(nonatomic) int reason; // @synthesize reason=_reason;
@property(nonatomic) int occurrences; // @synthesize occurrences=_occurrences;
@property(nonatomic) int confidence; // @synthesize confidence=_confidence;
@property(nonatomic) _Bool suggested; // @synthesize suggested=_suggested;
@property(retain, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasReason;
@property(nonatomic) _Bool hasOccurrences;
@property(nonatomic) _Bool hasConfidence;
@property(nonatomic) _Bool hasSuggested;
@property(readonly, nonatomic) _Bool hasEventId;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end
