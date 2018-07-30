//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, PFAsyncDispatchMulticaster<PFWorkContextStatusUpdateMulticaster>, PFDispatchQueue, PFQoSPolicy;

@interface PFBackgroundServiceManager : NSObject
{
    PFDispatchQueue *_queue;
    NSMutableDictionary *_workContexts;
    struct PFAsyncDispatchMulticaster *_statusUpdateMulticaster;
    PFQoSPolicy *_qosPolicy;
}

+ (id)qosLevelStringForServiceType:(id)arg1;
+ (unsigned int)qosClassForServiceType:(id)arg1;
+ (id)performWorkWithDelegate:(id)arg1 serviceType:(id)arg2 atEnd:(CDUnknownBlockType)arg3;
+ (void)removeStatusReceiver:(struct NSObject *)arg1;
+ (void)addStatusReceiver:(struct NSObject *)arg1;
+ (void)terminateWorkContext:(id)arg1;
+ (void)closeWorkContext:(id)arg1;
+ (void)addedItemsToWorkContext:(id)arg1;
+ (void)resumeWork:(id)arg1;
+ (void)suspendWork:(id)arg1;
+ (void)cancelWork:(id)arg1 force:(BOOL)arg2;
+ (void)addWorkContext:(id)arg1;
+ (void)removeManualWorkContext:(id)arg1;
+ (void)addManualWorkContext:(id)arg1;
+ (id)sharedInstance;
+ (void)forceResourceShutdown:(struct NSObject *)arg1 whenComplete:(CDUnknownBlockType)arg2;
+ (void)tryResourceShutdown:(struct NSObject *)arg1 ignoreClients:(id)arg2 whenComplete:(CDUnknownBlockType)arg3;
+ (void)registerResource:(id)arg1;
+ (void)endActivityForResourceToken:(id)arg1;
+ (id)beginActivityForResource:(struct NSObject *)arg1 reason:(id)arg2;
+ (BOOL)client:(id)arg1 isRegisteredForResource:(struct NSObject *)arg2;
+ (void)unregisterClientCompletely:(id)arg1 forResource:(struct NSObject *)arg2;
+ (void)unregisterClient:(id)arg1 forResource:(struct NSObject *)arg2;
+ (BOOL)registerClient:(id)arg1 forResource:(struct NSObject *)arg2;
@property(retain) PFQoSPolicy *qosPolicy; // @synthesize qosPolicy=_qosPolicy;
@property(retain) PFAsyncDispatchMulticaster<PFWorkContextStatusUpdateMulticaster> *statusUpdateMulticaster; // @synthesize statusUpdateMulticaster=_statusUpdateMulticaster;
@property(retain) NSMutableDictionary *workContexts; // @synthesize workContexts=_workContexts;
- (void).cxx_destruct;
- (void)addedItemsToWorkContext:(id)arg1;
- (void)workContextStalled:(id)arg1;
- (void)finishedEndWork:(id)arg1 seq:(long long)arg2;
- (void)endWorkContext:(id)arg1;
- (void)finishedEndBatchWork:(id)arg1 seq:(long long)arg2;
- (void)processNextJobInBatch:(id)arg1 forWorkContext:(id)arg2;
- (void)requestNewBatchForWorkContext:(id)arg1;
- (void)getNextBatchOrJobForContext:(id)arg1;
- (void)performNextStepForContext:(id)arg1;
- (void)beginWorkContext:(id)arg1;
- (void)resumeWorkContext:(id)arg1;
- (void)resumeWork:(id)arg1;
- (void)suspendWorkContext:(id)arg1;
- (void)suspendWork:(id)arg1;
- (void)cancelWorkContext:(id)arg1;
- (void)cancelWork:(id)arg1 force:(BOOL)arg2;
- (void)terminateWorkContext:(id)arg1;
- (void)closeWorkContext:(id)arg1;
- (void)addWorkContext:(id)arg1;
- (void)removeManualWorkContext:(id)arg1;
- (void)addManualWorkContext:(id)arg1;
- (const char *)processingQueueLabel;
- (BOOL)assertOnProcessingQueue;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (BOOL)contextIsDormant:(id)arg1;
- (void)notifyParentOfCompletionOfChild:(id)arg1;
- (id)workContextForId:(id)arg1;
- (void)removeWorkContext:(id)arg1 from:(id)arg2;
- (void)sendRemoveTask:(id)arg1;
- (void)sendAddTask:(id)arg1;
- (id)init;
@property(readonly) PFDispatchQueue *registrationQueue;
- (void)forceResourceShutdown:(struct NSObject *)arg1 whenComplete:(CDUnknownBlockType)arg2;
- (void)tryResourceShutdown:(struct NSObject *)arg1 ignoreClients:(id)arg2 whenComplete:(CDUnknownBlockType)arg3;
- (id)resourceContextForResource:(struct NSObject *)arg1 create:(BOOL)arg2;
- (void)registerResource:(id)arg1;
- (void)endActivityForResourceToken:(id)arg1;
- (id)beginActivityForResource:(struct NSObject *)arg1 reason:(id)arg2;
- (BOOL)client:(id)arg1 isRegisteredForResource:(struct NSObject *)arg2;
- (void)unregisterClientCompletely:(id)arg1 forResource:(struct NSObject *)arg2;
- (void)unregisterClient:(id)arg1 forResource:(struct NSObject *)arg2;
- (void)_unregisterClient:(id)arg1 forResource:(struct NSObject *)arg2 isToken:(BOOL)arg3;
- (BOOL)registerClient:(id)arg1 forResource:(struct NSObject *)arg2;
- (BOOL)_registerClient:(id)arg1 forResource:(struct NSObject *)arg2 isToken:(BOOL)arg3;

@end
