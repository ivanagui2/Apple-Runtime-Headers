//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ViewBridge/NSCFRunLoopSemaphore.h>

#import "NSVBDeallocOnAppKitThread.h"

@class NSObject<OS_os_activity>, NSString;

__attribute__((visibility("hidden")))
@interface NSRemoteViewSemaphore : NSCFRunLoopSemaphore <NSVBDeallocOnAppKitThread>
{
    NSObject<OS_os_activity> *_activity;
}

+ (id)semaphoreWithActivity:(id)arg1;
- (BOOL)wait:(double)arg1;
- (void)applyActivity:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithActivity:(id)arg1;
- (void)_deallocOnAppKitThread;
- (void)_superDealloc;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
