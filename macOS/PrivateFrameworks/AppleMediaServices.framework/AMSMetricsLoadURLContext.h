//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMSProcessInfo, NSData, NSDictionary, NSError, NSURLSession, NSURLSessionTask, NSURLSessionTaskMetrics;

@interface AMSMetricsLoadURLContext : NSObject
{
    id <AMSMetricsBagContract> _bagContract;
    NSError *_error;
    AMSProcessInfo *_processInfo;
    NSData *_responseBody;
    NSURLSession *_session;
    NSURLSessionTask *_task;
    NSURLSessionTaskMetrics *_taskMetrics;
    NSDictionary *_decodedResponseBody;
}

@property(retain) NSDictionary *decodedResponseBody; // @synthesize decodedResponseBody=_decodedResponseBody;
@property(retain) NSURLSessionTaskMetrics *taskMetrics; // @synthesize taskMetrics=_taskMetrics;
@property(retain) NSURLSessionTask *task; // @synthesize task=_task;
@property(retain) NSURLSession *session; // @synthesize session=_session;
@property(retain) NSData *responseBody; // @synthesize responseBody=_responseBody;
@property(retain) AMSProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) id <AMSMetricsBagContract> bagContract; // @synthesize bagContract=_bagContract;
- (void).cxx_destruct;
- (id)initWithTaskInfo:(id)arg1 serverPayload:(id)arg2;
- (id)initWithTask:(id)arg1 metrics:(id)arg2;

@end
