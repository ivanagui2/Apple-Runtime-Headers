//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface VCDispatchQueues : NSObject
{
    NSObject<OS_dispatch_queue> *vcdispatch_serialq;
    NSObject<OS_dispatch_queue> *aConcurrentQ[12];
}

+ (id)dispatchQueues;
- (id)concurrentqAtIndex:(int)arg1;
- (id)serialq;
- (void)dealloc;
- (id)init;

@end
