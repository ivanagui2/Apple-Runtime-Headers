//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NLMonthlyChallengeEngineDataSource.h"

@class HDProfile, HKHealthStore, NSString;

@interface NLMonthlyChallengeEngineDataSource : NSObject <NLMonthlyChallengeEngineDataSource>
{
    id <NLMonthlyChallengeEngineDataSourceDelegate> _delegate;
    HDProfile *_profile;
    HKHealthStore *_healthStore;
}

@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(nonatomic) __weak id <NLMonthlyChallengeEngineDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)achievementStoreValuesValidBeforeSummaryIndex;
- (unsigned int)numberOfRecentActiveDays;
- (_Bool)isWheelchairUser;
- (void)runBlockAfterUpdatingAchievementData:(CDUnknownBlockType)arg1;
- (_Bool)isDefinitionWithIdentifierLoaded:(id)arg1;
- (id)activitySummariesInDateInterval:(id)arg1 calendar:(id)arg2;
- (id)achievementsCompletedDuringDateInterval:(id)arg1 achievementIdentifier:(id)arg2;
- (id)valueForAchievementPredicateEnvironmentExpression:(id)arg1;
- (void)removeAchievementDefinitionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addAchievementDefinition:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
