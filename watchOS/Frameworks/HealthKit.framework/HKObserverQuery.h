//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/HKQuery.h>

#import "HKObserverQueryClientInterface.h"

@class NSString;

@interface HKObserverQuery : HKQuery <HKObserverQueryClientInterface>
{
    CDUnknownBlockType _updateHandler;
}

+ (id)clientInterfaceProtocol;
@property(readonly, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
- (void).cxx_destruct;
- (void)queue_deliverError:(id)arg1;
- (_Bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_connectToQueryServerWithHealthStore:(id)arg1 activationUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)client_dataUpdatedInDatabaseWithAnchor:(id)arg1 query:(id)arg2;
- (id)initWithSampleType:(id)arg1 predicate:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
