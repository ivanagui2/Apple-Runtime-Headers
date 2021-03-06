//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PeriodicMaintenanceActivity : NSObject
{
    CDUnknownBlockType _maintenanceBlocks;
}

+ (id)sharedInstance;
+ (const char *)periodicActivityID;
+ (long long)periodicActivityInterval;
+ (id)activityQueue;
@property(copy) CDUnknownBlockType maintenanceBlocks; // @synthesize maintenanceBlocks=_maintenanceBlocks;
- (void).cxx_destruct;
- (void)_handleActivityRun;
- (void)scheduleNextRunOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

