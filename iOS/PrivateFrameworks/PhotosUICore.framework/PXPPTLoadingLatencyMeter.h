//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface PXPPTLoadingLatencyMeter : NSObject
{
    CDStruct_4bbd3430 _lowQualityResults;
    CDStruct_4bbd3430 _mediumQualityResults;
    CDStruct_4bbd3430 _highQualityResults;
}

+ (void)stopMeasurements;
+ (void)startMeasurements;
+ (id)sharedInstance;
- (id)_measurementsDictionaryForImageQuality:(long long)arg1;
@property(readonly, nonatomic) NSDictionary *measurementsDictionaryRepresentation;
- (CDStruct_4bbd3430)measurementsForImageQuality:(long long)arg1;
- (void)reportLatency:(double)arg1 forImageQuality:(long long)arg2;
- (id)init;

@end
