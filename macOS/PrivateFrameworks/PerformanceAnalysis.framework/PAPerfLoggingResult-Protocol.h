//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSString;

@protocol PAPerfLoggingResult
@property(readonly) NSArray *processedContextDataArray;
@property(readonly) double operationEndTimeInSec;
@property(readonly) double operationStartTimeInSec;
@property(readonly) double totalOperationDurationInMs;
@property(readonly) unsigned long long numUnpairedIntervalEndsOrStarts;
@property(readonly) unsigned long long intervalCount;
@property(readonly) const double *intervalStartTimeInSecArray;
@property(readonly) double *intervalDurationInMsArray;
@property(readonly) double timeBetweenOperationStartAndFirstIntervalInMs;
@property(readonly) double intervalRateOverOperationIgnoringDelayInIntervalsPerSec;
@property(readonly) double intervalRateOverOperationInIntervalsPerSec;
@property(readonly) double normalizedStandardDeviation;
@property(readonly) double standardDeviationIntervalDurationInMs;
@property(readonly) double averageIntervalDurationInMs;
@property(readonly) NSString *operationName;
@property(readonly) NSString *operationCategory;
@property(readonly) NSString *processName;
@property(readonly, nonatomic) NSString *intervalType;
@end
