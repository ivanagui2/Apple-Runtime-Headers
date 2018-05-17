//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class ICNFMCActivityMonitor, NSString;

@interface ICNFMCMonitoredOperation : NSOperation
{
    ICNFMCActivityMonitor *_parentMonitor;
    ICNFMCActivityMonitor *_monitor;
}

@property(retain, nonatomic) ICNFMCActivityMonitor *monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) ICNFMCActivityMonitor *parentMonitor; // @synthesize parentMonitor=_parentMonitor;
- (void).cxx_destruct;
- (void)executeOperation;
@property(readonly, copy, nonatomic) NSString *activityString;
- (void)main;
- (void)dealloc;
- (id)init;

@end
