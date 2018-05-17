//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields, _INPBContactList, _INPBDataStringList, _INPBDateTimeRange, _INPBIntentMetadata, _INPBStringList;

@interface _INPBSearchForMessagesIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_56d48c16 _attributes;
    _INPBDateTimeRange *_dateTimeRange;
    _INPBStringList *_identifier;
    _INPBIntentMetadata *_intentMetadata;
    _INPBStringList *_notificationIdentifier;
    _INPBContactList *_recipient;
    _INPBStringList *_searchTerm;
    _INPBContactList *_sender;
    _INPBDataStringList *_speakableGroupName;
}

+ (id)options;
@property(retain, nonatomic) _INPBDataStringList *speakableGroupName; // @synthesize speakableGroupName=_speakableGroupName;
@property(retain, nonatomic) _INPBStringList *notificationIdentifier; // @synthesize notificationIdentifier=_notificationIdentifier;
@property(retain, nonatomic) _INPBStringList *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) _INPBDateTimeRange *dateTimeRange; // @synthesize dateTimeRange=_dateTimeRange;
@property(retain, nonatomic) _INPBStringList *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain, nonatomic) _INPBContactList *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) _INPBContactList *recipient; // @synthesize recipient=_recipient;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSpeakableGroupName;
@property(readonly, nonatomic) _Bool hasNotificationIdentifier;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(readonly, nonatomic) _Bool hasDateTimeRange;
- (int)StringAsAttributes:(id)arg1;
- (id)attributesAsString:(int)arg1;
- (void)setAttributes:(int *)arg1 count:(unsigned int)arg2;
- (int)attributeAtIndex:(unsigned int)arg1;
- (void)addAttribute:(int)arg1;
- (void)clearAttributes;
@property(readonly, nonatomic) int *attributes;
@property(readonly, nonatomic) unsigned int attributesCount;
@property(readonly, nonatomic) _Bool hasSearchTerm;
@property(readonly, nonatomic) _Bool hasSender;
@property(readonly, nonatomic) _Bool hasRecipient;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
- (void)dealloc;

@end
