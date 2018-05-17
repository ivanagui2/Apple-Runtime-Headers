//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface GEOTelemetricEntity : PBCodable <NSCopying>
{
    unsigned long long _eventValue;
    NSString *_eventDetail;
    int _eventKey;
    struct {
        unsigned int eventValue:1;
        unsigned int eventKey:1;
    } _has;
}

@property(retain, nonatomic) NSString *eventDetail; // @synthesize eventDetail=_eventDetail;
@property(nonatomic) unsigned long long eventValue; // @synthesize eventValue=_eventValue;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasEventDetail;
@property(nonatomic) _Bool hasEventValue;
- (int)StringAsEventKey:(id)arg1;
- (id)eventKeyAsString:(int)arg1;
@property(nonatomic) _Bool hasEventKey;
@property(nonatomic) int eventKey; // @synthesize eventKey=_eventKey;

@end
