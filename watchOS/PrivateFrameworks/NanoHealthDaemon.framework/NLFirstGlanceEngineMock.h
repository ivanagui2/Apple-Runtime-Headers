//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoHealthDaemon/NLFirstGlanceEngine.h>

@class NSNumber, NSString;

@interface NLFirstGlanceEngineMock : NLFirstGlanceEngine
{
    NSString *_mockFirstGlanceTypeArgument;
    NSString *_mockProgressAchievementIdentifier;
    NSString *_mockProgressAchievementMilestone;
    NSNumber *_mockYesterdayActivitySummaryMovePercentage;
    NSNumber *_mockYesterdayActivitySummaryExercisePercentage;
    NSNumber *_mockYesterdayActivitySummaryStandPercentage;
}

@property(retain, nonatomic) NSNumber *mockYesterdayActivitySummaryStandPercentage; // @synthesize mockYesterdayActivitySummaryStandPercentage=_mockYesterdayActivitySummaryStandPercentage;
@property(retain, nonatomic) NSNumber *mockYesterdayActivitySummaryExercisePercentage; // @synthesize mockYesterdayActivitySummaryExercisePercentage=_mockYesterdayActivitySummaryExercisePercentage;
@property(retain, nonatomic) NSNumber *mockYesterdayActivitySummaryMovePercentage; // @synthesize mockYesterdayActivitySummaryMovePercentage=_mockYesterdayActivitySummaryMovePercentage;
@property(retain, nonatomic) NSString *mockProgressAchievementMilestone; // @synthesize mockProgressAchievementMilestone=_mockProgressAchievementMilestone;
@property(retain, nonatomic) NSString *mockProgressAchievementIdentifier; // @synthesize mockProgressAchievementIdentifier=_mockProgressAchievementIdentifier;
@property(retain, nonatomic) NSString *mockFirstGlanceTypeArgument; // @synthesize mockFirstGlanceTypeArgument=_mockFirstGlanceTypeArgument;
- (void).cxx_destruct;
- (unsigned int)firstGlanceTypeForToday;
- (double)recommendedGoalInCalories;
- (id)bestWorkoutYesterdayLongerThan15Minutes;
- (id)yesterdayActivitySummary;
- (id)bestCompletedActivitySummaryThisWeek;
- (id)_mockSummary;
- (id)completedAchievementForYesterday;
- (id)progressAchievement;
- (id)_mockAchievementEarned:(_Bool)arg1;
- (id)weeklySummaryInfo;

@end

