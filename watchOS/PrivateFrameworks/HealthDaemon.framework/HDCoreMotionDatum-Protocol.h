//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKQuantityType, HKUnit, NSDate, NSUUID;

@protocol HDCoreMotionDatum <NSObject>
- (HKUnit *)hd_unitForType:(HKQuantityType *)arg1;
- (NSDate *)hd_epochDatestamp;
- (NSDate *)hd_datestamp;
- (NSUUID *)hd_sourceID;
- (int)hd_recordID;
@end
