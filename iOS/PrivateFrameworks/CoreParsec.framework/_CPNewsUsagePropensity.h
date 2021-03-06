//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPNewsUsagePropensity-Protocol.h>

@class NSData, NSString;

@interface _CPNewsUsagePropensity : PBCodable <_CPNewsUsagePropensity, NSSecureCoding>
{
    int _configuredLookbackTimeInDays;
    float _other;
    int _totalEngagements;
    int _totalSessions;
    long long _collectionStartTimestamp;
    long long _collectionEndTimestamp;
}

@property(nonatomic) int totalSessions; // @synthesize totalSessions=_totalSessions;
@property(nonatomic) int totalEngagements; // @synthesize totalEngagements=_totalEngagements;
@property(nonatomic) float other; // @synthesize other=_other;
@property(nonatomic) int configuredLookbackTimeInDays; // @synthesize configuredLookbackTimeInDays=_configuredLookbackTimeInDays;
@property(nonatomic) long long collectionEndTimestamp; // @synthesize collectionEndTimestamp=_collectionEndTimestamp;
@property(nonatomic) long long collectionStartTimestamp; // @synthesize collectionStartTimestamp=_collectionStartTimestamp;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (_Bool)requiresQueryId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

