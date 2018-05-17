//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKUpNextActivityBaseDataSource.h>

#import "FITypicalDayActivityModelDelegate.h"
#import "NTKUpNextPeriodOfDayPredictorDelegate.h"

@class FIActivitySettingsController, FITypicalDayActivityModel, HKActivitySummary, HKHealthStore, NSDictionary, NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface NTKUpNextActivityWatchDataSource : NTKUpNextActivityBaseDataSource <NTKUpNextPeriodOfDayPredictorDelegate, FITypicalDayActivityModelDelegate>
{
    int _significantTimeChangeToken;
    NSObject<OS_dispatch_queue> *_serialQueue;
    _Bool _isUpdatingTypicalDayCachedValues;
    _Bool _isRebuildingTypicalDayModel;
    _Bool _willCompleteGoal;
    _Bool _shouldSuggestWalk;
    double _suggestedWalkTime;
    int _preferenceChangeNotifyToken;
    HKHealthStore *_healthStore;
    FIActivitySettingsController *_settingsController;
    FITypicalDayActivityModel *_typicalDayModel;
    HKActivitySummary *_currentSummary;
    NSDictionary *_historicalSummariesByIndex;
    NSSet *_queries;
}

+ (_Bool)wantsReloadForSignificantTimeChange;
@property(retain, nonatomic) NSSet *queries; // @synthesize queries=_queries;
@property(retain, nonatomic) NSDictionary *historicalSummariesByIndex; // @synthesize historicalSummariesByIndex=_historicalSummariesByIndex;
@property(retain, nonatomic) HKActivitySummary *currentSummary; // @synthesize currentSummary=_currentSummary;
@property(retain, nonatomic) FITypicalDayActivityModel *typicalDayModel; // @synthesize typicalDayModel=_typicalDayModel;
@property(retain, nonatomic) FIActivitySettingsController *settingsController; // @synthesize settingsController=_settingsController;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (void).cxx_destruct;
- (void)_stopQueries;
- (void)_executeQuery:(id)arg1;
- (void)_startCurrentActivitySummaryQueryWithRemainingRetries:(unsigned int)arg1;
- (void)_startCurrentActivitySummaryQuery;
- (void)_queryActivitySummaryHistoryWithRemainingRetries:(unsigned int)arg1;
- (void)_queryActivitySummaryHistory;
- (void)_queue_handleNewActivitySummaries:(id)arg1;
- (void)_queue_handleUpdatedCurrentActivitySummary:(id)arg1;
- (id)_activitySummaryPredicateForTypicalDateInterval;
- (id)_typicalDayDateInterval;
- (id)_wristOffDate;
- (void)_rebuildTypicalDayModel;
- (void)_queue_updateCachedTypicalDayValues;
- (void)_significantTimeChangeOccurred;
- (void)_typicalDayTodayActivityChanged;
- (void)_handlePossibleElementStateChange;
- (id)_createWalkSuggestionElement;
- (_Bool)_shouldShowWalkSuggestion;
- (unsigned int)_walkSuggestionDurationInMinutes;
- (void)periodOfDayPredictorDidUpdatePredictedIntervals:(id)arg1;
- (void)getElementsDuringDateInterval:(id)arg1 inSection:(unsigned int)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)resume;
- (void)pause;
- (id)activitySummariesFromDateComponents:(id)arg1 toDateComponents:(id)arg2;
- (id)firstOnWristDateToday;
- (void)fetchProjectedOffWristDateTodayWithDateInterval:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)currentCalendar;
- (id)currentDate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
