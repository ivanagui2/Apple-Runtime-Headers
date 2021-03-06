//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBResetTimerIntent-Protocol.h>

@class NSString, _INPBIntentMetadata, _INPBTimer;

@interface _INPBResetTimerIntent : PBCodable <_INPBResetTimerIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int resetMultiple:1;
    } _has;
    _Bool _resetMultiple;
    _INPBIntentMetadata *_intentMetadata;
    _INPBTimer *_targetTimer;
}

@property(retain, nonatomic) _INPBTimer *targetTimer; // @synthesize targetTimer=_targetTimer;
@property(nonatomic) _Bool resetMultiple; // @synthesize resetMultiple=_resetMultiple;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasTargetTimer;
@property(nonatomic) _Bool hasResetMultiple;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

