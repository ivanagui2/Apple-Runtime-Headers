//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSObject<OS_dispatch_queue>;

@protocol LiDiskDelegate <NSObject>
- (NSObject<OS_dispatch_queue> *)diskDelegateQueue;

@optional
- (void)diskChanged:(NSDictionary *)arg1 forKeys:(NSArray *)arg2;
- (BOOL)diskWillEject:(NSDictionary *)arg1 reasonString:(out id *)arg2;
- (BOOL)diskWillUnmount:(NSDictionary *)arg1 reasonString:(out id *)arg2;
- (void)diskWillMount:(NSDictionary *)arg1;
- (void)diskDisappeared:(NSDictionary *)arg1;
- (void)diskAppeared:(NSDictionary *)arg1;
@end
