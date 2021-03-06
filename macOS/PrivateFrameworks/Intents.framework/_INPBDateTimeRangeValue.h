//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBDateTimeRangeValue-Protocol.h>

@class NSString, _INPBDateTime, _INPBRecurrenceValue, _INPBValueMetadata;

@interface _INPBDateTimeRangeValue : PBCodable <_INPBDateTimeRangeValue, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int endCalendar:1;
        unsigned int startCalendar:1;
    } _has;
    long long _endCalendar;
    _INPBDateTime *_endDateTime;
    _INPBRecurrenceValue *_recurrence;
    long long _startCalendar;
    _INPBDateTime *_startDateTime;
    _INPBValueMetadata *_valueMetadata;
}

@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(retain, nonatomic) _INPBDateTime *startDateTime; // @synthesize startDateTime=_startDateTime;
@property(nonatomic) long long startCalendar; // @synthesize startCalendar=_startCalendar;
@property(retain, nonatomic) _INPBRecurrenceValue *recurrence; // @synthesize recurrence=_recurrence;
@property(retain, nonatomic) _INPBDateTime *endDateTime; // @synthesize endDateTime=_endDateTime;
@property(nonatomic) long long endCalendar; // @synthesize endCalendar=_endCalendar;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasValueMetadata;
@property(readonly, nonatomic) BOOL hasStartDateTime;
@property(nonatomic) BOOL hasStartCalendar;
@property(readonly, nonatomic) BOOL hasRecurrence;
@property(readonly, nonatomic) BOOL hasEndDateTime;
@property(nonatomic) BOOL hasEndCalendar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

