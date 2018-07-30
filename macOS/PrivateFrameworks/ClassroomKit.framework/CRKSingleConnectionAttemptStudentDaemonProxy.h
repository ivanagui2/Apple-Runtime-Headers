//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CATTaskClientDelegate.h"
#import "CRKRequestPerformingProtocol.h"

@class CATTaskClient, NSError, NSString;

@interface CRKSingleConnectionAttemptStudentDaemonProxy : NSObject <CATTaskClientDelegate, CRKRequestPerformingProtocol>
{
    id <CRKTransportProviding> mTransportProvider;
    CATTaskClient *mTaskClient;
    NSError *mError;
    BOOL mDidAttemptToConnect;
}

- (void).cxx_destruct;
- (void)client:(id)arg1 didInterruptWithError:(id)arg2;
- (id)operationForRequest:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)connect;
- (void)connectIfNeeded;
- (id)initWithTransportProvider:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
