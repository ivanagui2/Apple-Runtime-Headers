//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPRequestCancellationToken.h"
#import "NSCopying.h"

@class NSArray, NSError, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString;

@interface MPRequest : NSObject <MPRequestCancellationToken, NSCopying>
{
    NSString *_label;
    int _qualityOfService;
    NSOperationQueue *_calloutQueue;
    NSError *_cancelationError;
    NSObject<OS_dispatch_queue> *_cleanupQueue;
    NSOperationQueue *_queue;
    NSArray *_middlewareClasses;
    double _timeoutInterval;
}

+ (double)expectedMaximumResponseTimeInterval;
+ (Class)responseClass;
@property(copy, nonatomic) NSArray *middlewareClasses; // @synthesize middlewareClasses=_middlewareClasses;
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *cleanupQueue; // @synthesize cleanupQueue=_cleanupQueue;
@property(readonly, nonatomic) NSError *cancelationError; // @synthesize cancelationError=_cancelationError;
@property(readonly, nonatomic) NSOperationQueue *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic) int qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)cancel;
- (void)_performWithCompletion:(CDUnknownBlockType)arg1;
- (id)performWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareForResponseWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
