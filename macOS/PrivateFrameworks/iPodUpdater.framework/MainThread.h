//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMachPort, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MainThread : NSObject
{
    NSMachPort *_ticklePort;
    NSMutableArray *_requests;
}

+ (BOOL)runningOnMainThread;
+ (id)mainThread;
+ (void)setupMainThreadObject;
+ (void)initialize;
- (void)handlePortMessage:(id)arg1;
- (void)_threadWillDie:(id)arg1;
- (void)_postNotificationInMainThread:(id)arg1;
- (void)performOneway:(BOOL)arg1 result:(void *)arg2 withTarget:(id)arg3 selector:(SEL)arg4;
- (BOOL)_runningOnMainThread;
- (id)init;

@end
