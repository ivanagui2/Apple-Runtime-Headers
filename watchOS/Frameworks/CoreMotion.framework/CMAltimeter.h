//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CMAltimeter : NSObject
{
    id _internal;
}

+ (int)authorizationStatus;
+ (_Bool)isSignificantElevationAvailable;
+ (_Bool)isRelativeAltitudeAvailable;
+ (void)initialize;
+ (void)dummySelector:(id)arg1;
- (void)onFilteredPressure:(const struct Sample *)arg1;
- (void)stopRelativeAltitudeUpdatesPrivate;
- (void)startRelativeAltitudeUpdatesPrivateToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)querySignificantElevationChangeFromDate:(id)arg1 toDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)stopSignificantElevationUpdates;
- (void)startSignificantElevationUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)stopRelativeAltitudeUpdates;
- (void)startRelativeAltitudeUpdatesToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)deallocPrivate;
- (void)dealloc;
- (id)initPrivate;
- (id)init;

@end
