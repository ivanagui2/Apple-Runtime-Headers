//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBEvent.h"

@class NSArray, NSString, _INPBString;

@interface _INPBEvent : PBCodable <_INPBEvent, NSSecureCoding, NSCopying>
{
    struct _has;
    NSArray *_eventDescriptors;
    _INPBString *_eventType;
}

+ (Class)eventDescriptorsType;
@property(retain, nonatomic) _INPBString *eventType; // @synthesize eventType=_eventType;
@property(copy, nonatomic) NSArray *eventDescriptors; // @synthesize eventDescriptors=_eventDescriptors;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasEventType;
- (id)eventDescriptorsAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int eventDescriptorsCount;
- (void)addEventDescriptors:(id)arg1;
- (void)clearEventDescriptors;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
