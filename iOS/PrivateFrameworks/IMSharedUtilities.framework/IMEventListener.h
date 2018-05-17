//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_semaphore>;

@interface IMEventListener : NSObject
{
    _Bool _willRepeat;
    double _timerStart;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    double _timeListeningStarted;
    double _timeListeningStopped;
    double _timeLastEventReceived;
    double _timeout;
    unsigned long long _eventCount;
    id _target;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _willInvokeCompletion;
    CDUnknownBlockType _didInvokeCompletion;
}

+ (id)eventListenerWithNotificationName:(id)arg1 object:(id)arg2;
+ (id)eventListener;
+ (id)allListeners;
+ (id)_mutableListenerDictionary;
@property(nonatomic) _Bool willRepeat; // @synthesize willRepeat=_willRepeat;
@property(copy) CDUnknownBlockType didInvokeCompletion; // @synthesize didInvokeCompletion=_didInvokeCompletion;
@property(copy) CDUnknownBlockType willInvokeCompletion; // @synthesize willInvokeCompletion=_willInvokeCompletion;
@property __weak id target; // @synthesize target=_target;
@property(readonly) unsigned long long eventCount; // @synthesize eventCount=_eventCount;
@property(readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(nonatomic) double timerStart; // @synthesize timerStart=_timerStart;
- (void).cxx_destruct;
- (void)_didReceiveEvent:(_Bool)arg1 userInfo:(id)arg2 error:(id)arg3;
@property double timeout; // @synthesize timeout=_timeout;
- (void)reset;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly) double elapsedWaitingTime;
@property(readonly) double timeLastEventReceived; // @synthesize timeLastEventReceived=_timeLastEventReceived;
@property(readonly) double timeListeningStopped; // @synthesize timeListeningStopped=_timeListeningStopped;
@property(readonly) double timeListeningStarted; // @synthesize timeListeningStarted=_timeListeningStarted;
- (void)startListening;
- (void)stopListening;
@property(readonly, getter=isListening) _Bool listening;
- (void)startListeningForEventTarget:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startListeningForEventTarget:(id)arg1 sendStartingEvent:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)waitForCompletion;
- (void)_dispatchStartEventBlock:(CDUnknownBlockType)arg1;
- (void)_startTimeoutTimerIfNeeded;
- (void)_reset;
- (void)willReset;
- (void)_cancelTimeoutTimer;
- (void)_stopListening;
- (void)willStopListening;
- (void)_startListening;
- (void)willStartListening;
- (void)_handleTimeout:(id)arg1;
- (void)_invokeCompletion:(_Bool)arg1 userInfo:(id)arg2 error:(id)arg3;
- (id)createResult:(_Bool)arg1 userInfo:(id)arg2 error:(id)arg3;
- (void)_addToListeners;
- (void)_removeFromListeners;

@end
