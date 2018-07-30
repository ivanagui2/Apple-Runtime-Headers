//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKContainer, HDProfile, NSArray, NSDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, NSSet;

@interface HDCloudSyncRepository : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    int _pullOperationFailureCount;
    NSMutableArray *_ownerIdentifierFetchCompletionBlocks;
    HDProfile *_profile;
    CKContainer *_primaryCKContainer;
    NSArray *_secondaryCKContainers;
    NSSet *_allCKContainers;
    NSDictionary *_ownerIdentifiersByContainerIdentifier;
    unsigned int _repositorySettings;
}

@property(nonatomic) unsigned int repositorySettings; // @synthesize repositorySettings=_repositorySettings;
@property(readonly, copy, nonatomic) NSDictionary *ownerIdentifiersByContainerIdentifier; // @synthesize ownerIdentifiersByContainerIdentifier=_ownerIdentifiersByContainerIdentifier;
@property(readonly, nonatomic) NSSet *allCKContainers; // @synthesize allCKContainers=_allCKContainers;
@property(readonly, nonatomic) NSArray *secondaryCKContainers; // @synthesize secondaryCKContainers=_secondaryCKContainers;
@property(readonly, nonatomic) CKContainer *primaryCKContainer; // @synthesize primaryCKContainer=_primaryCKContainer;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (long long)_pendingProgressCountForPullOperationsGivenOptions:(unsigned int)arg1;
- (long long)_pendingProgressCountForPushOperationGivenOptions:(unsigned int)arg1 maxPullOperationCount:(int)arg2;
- (id)_lastSuccessfulPullKey;
- (id)description;
- (id)_operationGroupForReason:(int)arg1 options:(unsigned int)arg2;
- (void)_disableCloudSyncWithCompletion:(CDUnknownBlockType)arg1;
- (id)disableAndDeleteAllSyncDataWithTaskTree:(id)arg1 identifier:(id)arg2;
- (void)disableSyncLocallyWithTaskTree:(id)arg1;
- (void)fetchSyncStatusWithTaskTree:(id)arg1 resultsHandler:(CDUnknownBlockType)arg2;
- (id)_cloudSyncContainerDescriptionFromFetchOperationResult:(id)arg1 configuration:(id)arg2;
- (id)_fetchDescriptionWithOptions:(unsigned int)arg1 reason:(int)arg2 identifier:(id)arg3 taskTree:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (id)fetchDescriptionWithOptions:(unsigned int)arg1 reason:(int)arg2 identifier:(id)arg3 taskTree:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (id)resetWithOptions:(unsigned int)arg1 reason:(int)arg2 identifier:(id)arg3 taskTree:(id)arg4;
- (void)resetContainer:(id)arg1 withOptions:(unsigned int)arg2 reason:(int)arg3 progress:(id)arg4 syncIdentifier:(id)arg5 taskTree:(id)arg6;
- (void)_updateProgress:(id)arg1 isPrimaryContainer:(_Bool)arg2 forOperationComponent:(unsigned int)arg3;
- (id)_startPullOperationForPullZone:(id)arg1 configuration:(id)arg2 fetchOperationResult:(id)arg3 taskTree:(id)arg4;
- (void)_recordSuccessfulPull;
- (id)syncWithOptions:(unsigned int)arg1 reason:(int)arg2 identifier:(id)arg3 accessibilityAssertion:(id)arg4 taskTree:(id)arg5;
- (id)syncWithOptions:(unsigned int)arg1 reason:(int)arg2 identifier:(id)arg3 taskTree:(id)arg4;
- (id)syncWithOptions:(unsigned int)arg1 reason:(int)arg2 identifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)unitTest_fetchOwnerIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_fetchOwnerIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_fetchOwnerIdentifierForContainer:(id)arg1 results:(id)arg2 taskTree:(id)arg3;
@property(readonly, copy, nonatomic) NSSet *allOwnerIdentifiers;
- (id)containerForContainerIdentifier:(id)arg1;
- (id)initAsSecondaryWithProfile:(id)arg1 syncContainer:(id)arg2;
- (id)initWithProfile:(id)arg1 syncContainer:(id)arg2;
- (id)initWithProfile:(id)arg1 primaryCKContainer:(id)arg2 secondaryCKContainers:(id)arg3;

@end
