//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class RWIDriver, RWIManager, RWITarget;

@protocol RWIManagerDelegate <NSObject>

@optional
- (BOOL)requestDriver:(RWIDriver *)arg1 shouldBeActive:(BOOL)arg2;
- (void)manager:(RWIManager *)arg1 didRemoveTarget:(RWITarget *)arg2;
- (void)manager:(RWIManager *)arg1 didAddTarget:(RWITarget *)arg2;
@end

