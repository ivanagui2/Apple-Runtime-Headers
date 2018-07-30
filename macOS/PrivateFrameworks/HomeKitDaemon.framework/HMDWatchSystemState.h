//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class NSHashTable, NSObject<OS_dispatch_queue>;

@interface HMDWatchSystemState : HMFObject
{
    BOOL _companionReachable;
    NSHashTable *_watchSystemStateDelegates;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

+ (id)sharedState;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
- (void).cxx_destruct;
- (void)_callDidUpdateReachabilityChangeForCompanion:(BOOL)arg1 forDelegate:(id)arg2;
- (void)_callDidReceiveNewIncomingMessageForDelegate:(id)arg1;
- (void)registerDelegate:(id)arg1;
- (void)newIncomingMessageFromClient;
@property(readonly, nonatomic) NSHashTable *watchSystemStateDelegates; // @synthesize watchSystemStateDelegates=_watchSystemStateDelegates;
@property(nonatomic, getter=isCompanionReachable) BOOL companionReachable; // @synthesize companionReachable=_companionReachable;
- (id)init;

@end
