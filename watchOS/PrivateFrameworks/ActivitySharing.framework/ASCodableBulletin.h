//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSString;

@interface ASCodableBulletin : PBCodable <NSCopying>
{
    double _timestamp;
    long long _type;
    NSData *_achievementData;
    NSData *_friendData;
    NSString *_friendUUID;
    NSData *_snapshotData;
    NSString *_title;
    NSData *_workoutData;
    struct {
        unsigned int timestamp:1;
        unsigned int type:1;
    } _has;
}

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSData *snapshotData; // @synthesize snapshotData=_snapshotData;
@property(retain, nonatomic) NSData *workoutData; // @synthesize workoutData=_workoutData;
@property(retain, nonatomic) NSData *achievementData; // @synthesize achievementData=_achievementData;
@property(retain, nonatomic) NSData *friendData; // @synthesize friendData=_friendData;
@property(retain, nonatomic) NSString *friendUUID; // @synthesize friendUUID=_friendUUID;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;
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
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasSnapshotData;
@property(readonly, nonatomic) _Bool hasWorkoutData;
@property(readonly, nonatomic) _Bool hasAchievementData;
@property(readonly, nonatomic) _Bool hasFriendData;
@property(readonly, nonatomic) _Bool hasFriendUUID;
@property(readonly, nonatomic) _Bool hasTitle;
@property(nonatomic) _Bool hasType;

@end
