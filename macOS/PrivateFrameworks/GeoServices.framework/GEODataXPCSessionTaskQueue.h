//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, _GEODataXPCSessionTaskQueueHelper;

__attribute__((visibility("hidden")))
@interface GEODataXPCSessionTaskQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_isolation;
    NSObject<OS_dispatch_queue> *_localIsolation;
    id <GEODataXPCConnectionManager> _connectionManager;
    NSMutableDictionary *_pendingTasks;
    NSMutableArray *_inFlightTasks;
    _GEODataXPCSessionTaskQueueHelper *_helper;
}

@property(readonly, nonatomic) NSMutableArray *inFlightTasks; // @synthesize inFlightTasks=_inFlightTasks;
@property(readonly, nonatomic) NSMutableDictionary *pendingTasks; // @synthesize pendingTasks=_pendingTasks;
@property(readonly, nonatomic) id <GEODataXPCConnectionManager> connectionManager; // @synthesize connectionManager=_connectionManager;
- (void).cxx_destruct;
- (void)configureLimits:(id)arg1;
- (unsigned int)taskCountLimitForQueue:(unsigned int)arg1;
- (void)decrementTaskCountForQueue:(unsigned int)arg1;
- (void)incrementTaskCountForQueue:(unsigned int)arg1;
- (unsigned int)inflightTaskCountForQueue:(unsigned int)arg1;
- (BOOL)reachedTaskCountLimitForQueue:(unsigned int)arg1;
- (BOOL)removeQueuedTask:(id)arg1;
- (void)_sendNextTaskForQueue:(unsigned int)arg1;
- (void)_pruneExpiredTasksForQueue:(unsigned int)arg1;
- (void)_pruneExpiredTasksFromTimer;
- (id)_pruneExpiredTasksInArray:(id)arg1 atTime:(double)arg2 tasksAreInFlight:(BOOL)arg3;
- (void)_startExpiredTaskTimer;
- (void)_updateExpiredTaskTimer;
- (void)_enqueueTask:(id)arg1;
- (void)_sendTaskImmediately:(id)arg1;
- (void)sendTask:(id)arg1;
- (id)description;
- (id)initWithIsolationQueue:(id)arg1 limits:(id)arg2 connectionManager:(id)arg3;
- (id)init;

@end
