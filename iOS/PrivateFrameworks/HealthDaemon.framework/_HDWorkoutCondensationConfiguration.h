//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HDProfile, HDSQLitePredicate, _HDWorkoutCondenserAnalyticsAccumulator;

@interface _HDWorkoutCondensationConfiguration : NSObject
{
    HDProfile *_profile;
    HDSQLitePredicate *_predicate;
    double _minimumWorkoutDuration;
    long long _minimumSeriesSize;
    long long _maximumSeriesSize;
    _HDWorkoutCondenserAnalyticsAccumulator *_analyticsAccumulator;
}

+ (id)configurationWithProfile:(id)arg1 minimumSeriesSize:(long long)arg2 maximumSeriesSize:(long long)arg3 analyticsAccumulator:(id)arg4 error:(id *)arg5;
@property(readonly, nonatomic) _HDWorkoutCondenserAnalyticsAccumulator *analyticsAccumulator; // @synthesize analyticsAccumulator=_analyticsAccumulator;
@property(readonly, nonatomic) long long maximumSeriesSize; // @synthesize maximumSeriesSize=_maximumSeriesSize;
@property(readonly, nonatomic) long long minimumSeriesSize; // @synthesize minimumSeriesSize=_minimumSeriesSize;
@property(readonly, nonatomic) double minimumWorkoutDuration; // @synthesize minimumWorkoutDuration=_minimumWorkoutDuration;
@property(readonly, nonatomic) HDSQLitePredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (id)initWithProfile:(id)arg1 predicate:(id)arg2 minimumWorkoutDuration:(double)arg3 minimumSeriesSize:(long long)arg4 maximumSeriesSize:(long long)arg5 analyticsAccumulator:(id)arg6;

@end
