//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBPauseTimerIntentResponse.h"

@class NSArray, NSString;

@interface _INPBPauseTimerIntentResponse : PBCodable <_INPBPauseTimerIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;
    NSArray *_pausedTimers;
}

+ (Class)pausedTimersType;
@property(copy, nonatomic) NSArray *pausedTimers; // @synthesize pausedTimers=_pausedTimers;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)pausedTimersAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int pausedTimersCount;
- (void)addPausedTimers:(id)arg1;
- (void)clearPausedTimers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
