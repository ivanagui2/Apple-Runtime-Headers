//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface PPQuickTypeMetrics : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)eventsMatches:(unsigned int)arg1;
+ (void)contactMatchesWithContactsCount:(unsigned int)arg1 foundInAppsCount:(unsigned int)arg2;
+ (void)autocompleteGoalConverted:(_Bool)arg1 queryType:(id)arg2;
+ (void)discoverySuggesterGoalConverted:(_Bool)arg1 queryType:(id)arg2;
+ (void)peopleSuggesterGoalConverted:(_Bool)arg1 queryType:(id)arg2;
+ (void)initializationLatency:(unsigned long long)arg1 servant:(id)arg2;
+ (void)quickTypeMetricsWithLatency:(unsigned long long)arg1 servant:(id)arg2 hasResults:(_Bool)arg3;
+ (void)frameworkError:(id)arg1 errorCode:(int)arg2;
+ (id)instance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)init;

@end
