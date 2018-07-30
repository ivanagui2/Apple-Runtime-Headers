//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBMessageAttachment.h"

@class NSString, _INPBString, _INPBURLValue;

@interface _INPBMessageAttachment : PBCodable <_INPBMessageAttachment, NSSecureCoding, NSCopying>
{
    CDStruct_f953fb60 _has;
    int _type;
    _INPBURLValue *_fileURL;
    _INPBString *_filename;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) _INPBString *filename; // @synthesize filename=_filename;
@property(retain, nonatomic) _INPBURLValue *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(readonly, nonatomic) BOOL hasFilename;
@property(readonly, nonatomic) BOOL hasFileURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
