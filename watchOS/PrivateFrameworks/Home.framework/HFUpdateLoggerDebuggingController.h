//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface HFUpdateLoggerDebuggingController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *__queue_runningLoggers;
    NSMutableDictionary *__queue_historyStringsKeyedByLogger;
    int __queue_iteration;
}

+ (id)_sharedInstance;
@property(nonatomic) int _queue_iteration; // @synthesize _queue_iteration=__queue_iteration;
@property(retain, nonatomic) NSMutableDictionary *_queue_historyStringsKeyedByLogger; // @synthesize _queue_historyStringsKeyedByLogger=__queue_historyStringsKeyedByLogger;
@property(retain, nonatomic) NSHashTable *_queue_runningLoggers; // @synthesize _queue_runningLoggers=__queue_runningLoggers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)_historyStrings;
- (id)_runningLoggerStrings;
- (id)_runningLoggers;
- (void)_removeRunningLogger:(id)arg1;
- (void)_addRunningLogger:(id)arg1;
- (id)init;

@end

