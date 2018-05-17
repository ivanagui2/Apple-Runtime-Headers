//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class HDAWDHealthKitAchievement, HDAWDHealthKitActivityCache, HDAWDHealthKitConcurrentCalendarItem, HDAWDHealthKitExperimentalCondition, HDAWDHealthKitNotificationResponseFlags, HDAWDHealthKitWeeklySummaryDetail, NSMutableArray;

@interface HDAWDHealthKitNotificationEvent : PBCodable <NSCopying>
{
    CDStruct_084d6ede _goalTypes;
    long long _endDate;
    long long _startDate;
    unsigned long long _timestamp;
    HDAWDHealthKitAchievement *_achievement;
    HDAWDHealthKitActivityCache *_activityCache;
    int _alertType;
    HDAWDHealthKitConcurrentCalendarItem *_calendarItem;
    HDAWDHealthKitExperimentalCondition *_experimentalCondition;
    HDAWDHealthKitNotificationResponseFlags *_responseFlags;
    int _testAction;
    NSMutableArray *_views;
    HDAWDHealthKitWeeklySummaryDetail *_weeklySummaryDetail;
    _Bool _dndEnabled;
    _Bool _failedPosting;
    struct {
        unsigned int endDate:1;
        unsigned int startDate:1;
        unsigned int timestamp:1;
        unsigned int alertType:1;
        unsigned int testAction:1;
        unsigned int dndEnabled:1;
        unsigned int failedPosting:1;
    } _has;
}

+ (Class)viewsType;
@property(retain, nonatomic) HDAWDHealthKitNotificationResponseFlags *responseFlags; // @synthesize responseFlags=_responseFlags;
@property(retain, nonatomic) HDAWDHealthKitWeeklySummaryDetail *weeklySummaryDetail; // @synthesize weeklySummaryDetail=_weeklySummaryDetail;
@property(retain, nonatomic) HDAWDHealthKitAchievement *achievement; // @synthesize achievement=_achievement;
@property(retain, nonatomic) HDAWDHealthKitActivityCache *activityCache; // @synthesize activityCache=_activityCache;
@property(retain, nonatomic) NSMutableArray *views; // @synthesize views=_views;
@property(retain, nonatomic) HDAWDHealthKitConcurrentCalendarItem *calendarItem; // @synthesize calendarItem=_calendarItem;
@property(retain, nonatomic) HDAWDHealthKitExperimentalCondition *experimentalCondition; // @synthesize experimentalCondition=_experimentalCondition;
@property(nonatomic) _Bool failedPosting; // @synthesize failedPosting=_failedPosting;
@property(nonatomic) _Bool dndEnabled; // @synthesize dndEnabled=_dndEnabled;
@property(nonatomic) long long endDate; // @synthesize endDate=_endDate;
@property(nonatomic) long long startDate; // @synthesize startDate=_startDate;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
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
@property(readonly, nonatomic) _Bool hasResponseFlags;
- (void)setGoalTypes:(unsigned int *)arg1 count:(unsigned int)arg2;
- (unsigned int)goalTypesAtIndex:(unsigned int)arg1;
- (void)addGoalTypes:(unsigned int)arg1;
- (void)clearGoalTypes;
@property(readonly, nonatomic) unsigned int *goalTypes;
@property(readonly, nonatomic) unsigned int goalTypesCount;
@property(readonly, nonatomic) _Bool hasWeeklySummaryDetail;
@property(readonly, nonatomic) _Bool hasAchievement;
@property(readonly, nonatomic) _Bool hasActivityCache;
- (id)viewsAtIndex:(unsigned int)arg1;
- (unsigned int)viewsCount;
- (void)addViews:(id)arg1;
- (void)clearViews;
@property(readonly, nonatomic) _Bool hasCalendarItem;
- (int)StringAsTestAction:(id)arg1;
- (id)testActionAsString:(int)arg1;
@property(nonatomic) _Bool hasTestAction;
@property(nonatomic) int testAction; // @synthesize testAction=_testAction;
@property(readonly, nonatomic) _Bool hasExperimentalCondition;
@property(nonatomic) _Bool hasFailedPosting;
@property(nonatomic) _Bool hasDndEnabled;
@property(nonatomic) _Bool hasEndDate;
@property(nonatomic) _Bool hasStartDate;
- (int)StringAsAlertType:(id)arg1;
- (id)alertTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasAlertType;
@property(nonatomic) int alertType; // @synthesize alertType=_alertType;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end
