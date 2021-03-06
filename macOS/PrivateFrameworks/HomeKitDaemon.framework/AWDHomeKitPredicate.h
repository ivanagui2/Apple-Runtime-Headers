//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDHomeKitPredicate : PBCodable <NSCopying>
{
    NSMutableArray *_presenceEvents;
    BOOL _containsCalendarTime;
    BOOL _containsCharacteristicValue;
    BOOL _containsSignificantTime;
    BOOL _containsSignificantTimeOffset;
    struct {
        unsigned int containsCalendarTime:1;
        unsigned int containsCharacteristicValue:1;
        unsigned int containsSignificantTime:1;
        unsigned int containsSignificantTimeOffset:1;
    } _has;
}

+ (Class)presenceEventsType;
@property(nonatomic) BOOL containsCalendarTime; // @synthesize containsCalendarTime=_containsCalendarTime;
@property(nonatomic) BOOL containsSignificantTimeOffset; // @synthesize containsSignificantTimeOffset=_containsSignificantTimeOffset;
@property(nonatomic) BOOL containsSignificantTime; // @synthesize containsSignificantTime=_containsSignificantTime;
@property(nonatomic) BOOL containsCharacteristicValue; // @synthesize containsCharacteristicValue=_containsCharacteristicValue;
@property(retain, nonatomic) NSMutableArray *presenceEvents; // @synthesize presenceEvents=_presenceEvents;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasContainsCalendarTime;
@property(nonatomic) BOOL hasContainsSignificantTimeOffset;
@property(nonatomic) BOOL hasContainsSignificantTime;
@property(nonatomic) BOOL hasContainsCharacteristicValue;
- (id)presenceEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)presenceEventsCount;
- (void)addPresenceEvents:(id)arg1;
- (void)clearPresenceEvents;

@end

