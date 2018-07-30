//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class ASCodableContact, NSMutableArray;

@interface ASCodableFriend : PBCodable <NSCopying>
{
    NSMutableArray *_achievements;
    NSMutableArray *_competitions;
    ASCodableContact *_contact;
    NSMutableArray *_snapshots;
    NSMutableArray *_workouts;
}

+ (Class)competitionsType;
+ (Class)achievementsType;
+ (Class)workoutsType;
+ (Class)snapshotsType;
@property(retain, nonatomic) NSMutableArray *competitions; // @synthesize competitions=_competitions;
@property(retain, nonatomic) NSMutableArray *achievements; // @synthesize achievements=_achievements;
@property(retain, nonatomic) NSMutableArray *workouts; // @synthesize workouts=_workouts;
@property(retain, nonatomic) NSMutableArray *snapshots; // @synthesize snapshots=_snapshots;
@property(retain, nonatomic) ASCodableContact *contact; // @synthesize contact=_contact;
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
- (id)competitionsAtIndex:(unsigned int)arg1;
- (unsigned int)competitionsCount;
- (void)addCompetitions:(id)arg1;
- (void)clearCompetitions;
- (id)achievementsAtIndex:(unsigned int)arg1;
- (unsigned int)achievementsCount;
- (void)addAchievements:(id)arg1;
- (void)clearAchievements;
- (id)workoutsAtIndex:(unsigned int)arg1;
- (unsigned int)workoutsCount;
- (void)addWorkouts:(id)arg1;
- (void)clearWorkouts;
- (id)snapshotsAtIndex:(unsigned int)arg1;
- (unsigned int)snapshotsCount;
- (void)addSnapshots:(id)arg1;
- (void)clearSnapshots;
@property(readonly, nonatomic) _Bool hasContact;

@end
