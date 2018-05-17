//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>;

@interface HMDLaunchHandler : HMFObject
{
    int _beingConfigured;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSMutableSet *_relaunchTriggeringClients;
}

+ (id)sharedHandler;
@property(nonatomic) int beingConfigured; // @synthesize beingConfigured=_beingConfigured;
@property(retain, nonatomic) NSMutableSet *relaunchTriggeringClients; // @synthesize relaunchTriggeringClients=_relaunchTriggeringClients;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // @synthesize handlerQueue=_handlerQueue;
- (void).cxx_destruct;
- (void)_removeAssertionPlist;
- (void)_saveAssertionPlist;
- (void)_reevaluate;
- (void)deregisterForRelaunch:(id)arg1;
- (void)registerForRelaunch:(id)arg1;
- (void)beingConfigured:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end
