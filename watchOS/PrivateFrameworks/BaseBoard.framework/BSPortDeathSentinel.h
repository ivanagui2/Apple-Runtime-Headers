//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSInvalidatable.h"

@class BSMachPortSendRight, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface BSPortDeathSentinel : NSObject <BSInvalidatable>
{
    BSMachPortSendRight *_sendRight;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_source> *_source;
    _Bool _activated;
    _Bool _invalidated;
}

+ (id)_callOutQueue;
+ (void)monitorSendRight:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_callOutQueue;
- (void)invalidate;
@property(readonly, nonatomic, getter=isValid) _Bool valid; // @dynamic valid;
- (void)dealloc;
- (void)activateWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithSendRight:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
