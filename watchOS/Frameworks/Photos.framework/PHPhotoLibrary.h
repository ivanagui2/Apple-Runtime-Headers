//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHBatchFetchingArrayDataSource.h"

@class NSHashTable, NSMutableDictionary, NSMutableOrderedSet, NSObject<OS_dispatch_queue>, NSString, PHVariationCacheManager, PLPhotoLibrary;

@interface PHPhotoLibrary : NSObject <PHBatchFetchingArrayDataSource>
{
    _Bool _unknownMergeEvent;
    _Bool _isChangeProcessingPending;
    _Bool _clearsOIDCacheAfterFetchResultDealloc;
    PHVariationCacheManager *_variationCacheManager;
    NSObject<OS_dispatch_queue> *_queue;
    PLPhotoLibrary *_photoLibrary;
    PLPhotoLibrary *_changeHandlingPhotoLibrary;
    PLPhotoLibrary *_mainQueuePhotoLibrary;
    PLPhotoLibrary *_backgroundQueuePhotoLibrary;
    PLPhotoLibrary *_backgroundQueueObjectFetchingPhotoLibrary;
    PLPhotoLibrary *_transactionPhotoLibrary;
    NSObject<OS_dispatch_queue> *_transactionQueue;
    NSMutableOrderedSet *_insertRequests;
    NSMutableOrderedSet *_updateRequests;
    NSMutableOrderedSet *_deleteRequests;
    NSMutableDictionary *_saveTokensToKnownUUIDs;
    NSMutableDictionary *_changeRequests;
    NSHashTable *_fetchResults;
    NSHashTable *_internalObservers;
    NSHashTable *_externalObservers;
    NSMutableDictionary *_changeNotificationInfo;
    double _lastChangeProcessingStarted;
}

+ (_Bool)_isInternalObserver:(id)arg1;
+ (void)removeAllUniquedOIDs;
+ (id)uniquedOIDsFromObjects:(id)arg1;
+ (id)uniquedOIDs:(id)arg1;
+ (id)uniquedOID:(id)arg1;
+ (id)_effectiveRootEntity:(id)arg1;
+ (Class)PHObjectClassForOID:(id)arg1;
+ (Class)PHObjectClassForEntityName:(id)arg1;
+ (Class)classForFetchType:(id)arg1;
+ (id)fetchTypeForLocalIdentifierCode:(id)arg1;
+ (int)collectionListTypeForIdentifierCode:(id)arg1;
+ (void)_forceUserInterfaceReload;
+ (void)requestAuthorization:(CDUnknownBlockType)arg1;
+ (int)authorizationStatus;
+ (id)sharedPhotoLibrary;
+ (id)_descriptionOfEntitiesInChangeRequests:(id)arg1;
+ (void)setNeedsToRepairKeyCuratedAssetForMemories:(id)arg1;
+ (_Bool)shouldDisplayMergeCandidates:(id)arg1 forPerson:(id)arg2;
@property(nonatomic) _Bool clearsOIDCacheAfterFetchResultDealloc; // @synthesize clearsOIDCacheAfterFetchResultDealloc=_clearsOIDCacheAfterFetchResultDealloc;
@property(nonatomic) double lastChangeProcessingStarted; // @synthesize lastChangeProcessingStarted=_lastChangeProcessingStarted;
@property(nonatomic) _Bool isChangeProcessingPending; // @synthesize isChangeProcessingPending=_isChangeProcessingPending;
@property(nonatomic) _Bool unknownMergeEvent; // @synthesize unknownMergeEvent=_unknownMergeEvent;
@property(retain, nonatomic) NSMutableDictionary *changeNotificationInfo; // @synthesize changeNotificationInfo=_changeNotificationInfo;
@property(retain, nonatomic) NSHashTable *externalObservers; // @synthesize externalObservers=_externalObservers;
@property(retain, nonatomic) NSHashTable *internalObservers; // @synthesize internalObservers=_internalObservers;
@property(retain, nonatomic) NSHashTable *fetchResults; // @synthesize fetchResults=_fetchResults;
@property(retain, nonatomic) NSMutableDictionary *changeRequests; // @synthesize changeRequests=_changeRequests;
@property(retain, nonatomic) NSMutableDictionary *saveTokensToKnownUUIDs; // @synthesize saveTokensToKnownUUIDs=_saveTokensToKnownUUIDs;
@property(retain, nonatomic) NSMutableOrderedSet *deleteRequests; // @synthesize deleteRequests=_deleteRequests;
@property(retain, nonatomic) NSMutableOrderedSet *updateRequests; // @synthesize updateRequests=_updateRequests;
@property(retain, nonatomic) NSMutableOrderedSet *insertRequests; // @synthesize insertRequests=_insertRequests;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *transactionQueue; // @synthesize transactionQueue=_transactionQueue;
@property(retain, nonatomic) PLPhotoLibrary *transactionPhotoLibrary; // @synthesize transactionPhotoLibrary=_transactionPhotoLibrary;
@property(retain, nonatomic) PLPhotoLibrary *backgroundQueueObjectFetchingPhotoLibrary; // @synthesize backgroundQueueObjectFetchingPhotoLibrary=_backgroundQueueObjectFetchingPhotoLibrary;
@property(retain, nonatomic) PLPhotoLibrary *backgroundQueuePhotoLibrary; // @synthesize backgroundQueuePhotoLibrary=_backgroundQueuePhotoLibrary;
@property(retain, nonatomic) PLPhotoLibrary *mainQueuePhotoLibrary; // @synthesize mainQueuePhotoLibrary=_mainQueuePhotoLibrary;
@property(retain, nonatomic) PLPhotoLibrary *changeHandlingPhotoLibrary; // @synthesize changeHandlingPhotoLibrary=_changeHandlingPhotoLibrary;
@property(retain, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)_processPendingChanges;
- (void)handleMergeNotification:(id)arg1;
- (id)transactionPLPhotoLibrary;
- (id)fetchUpdatedObject:(id)arg1;
- (id)fetchPHObjectsForUUIDs:(id)arg1 entityName:(id)arg2;
- (id)fetchPHObjectsForOIDs:(id)arg1 propertyHint:(unsigned int)arg2 includeTrash:(_Bool)arg3;
- (id)fetchDictionariesByPHClassForOIDs:(id)arg1 propertyHint:(unsigned int)arg2 includeTrash:(_Bool)arg3;
- (id)fetchPHObjectsForOIDs:(id)arg1;
- (id)queryForType:(id)arg1 withIdentifiers:(id)arg2 local:(_Bool)arg3;
- (id)urlForApplicationDataFolderIdentifier:(int)arg1;
- (id)removeUuidForSaveToken:(id)arg1;
- (void)registerUUID:(id)arg1 forSaveToken:(id)arg2;
- (void)setChangeRequest:(id)arg1 forUUID:(id)arg2;
- (id)changeRequestForUUID:(id)arg1;
- (void)recordDeleteRequest:(id)arg1;
- (void)recordUpdateRequest:(id)arg1;
- (void)recordInsertRequest:(id)arg1;
- (void)assertTransaction;
- (_Bool)isApplyingRequestedChanges;
- (_Bool)performChangesAndWait:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)performChanges:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)performCancellableChangesAndWait:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)performCancellableChanges:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_preflightRequestedPhotoKitInserts:(id)arg1 updates:(id)arg2 deletes:(id)arg3 error:(id *)arg4;
- (void)_unauthorized:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)_cancelTransaction:(CDUnknownBlockType)arg1;
- (void)_commitTransaction:(CDUnknownBlockType)arg1;
- (void)_beginTransaction;
- (void)_removeObserver:(id)arg1;
- (void)_addObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)updateClusterUsabilityCriteria;
- (void)unregisterFetchResult:(id)arg1;
- (void)registerFetchResult:(id)arg1;
- (id)objectFetchingManagedObjectContextForObject:(id)arg1 propertySet:(id)arg2;
@property(readonly, nonatomic) PHVariationCacheManager *variationCacheManager; // @synthesize variationCacheManager=_variationCacheManager;
- (id)objectFetchingContextForCurrentQueueQoS;
- (id)photoLibraryForCurrentQueueQoS;
- (id)managedObjectContextForCurrentQueueQoS;
- (id)mainQueueManagedObjectContext;
- (id)managedObjectContext;
- (id)initSharedLibrary;
- (id)init;
- (id)_descriptionOfChanges;
- (id)pl_syncProgressAlbums;
@property(retain, nonatomic) id <PLPhotoAnalysisServiceTaxonomyResolver> taxonomyResolver;
- (void)requestPermissionToDownloadFaceResourcesOfCount:(unsigned int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)unregisterAvailabilityObserver:(id)arg1;
- (void)registerAvailabilityObserver:(id)arg1;
- (id)bfa_photoLibrary;
- (id)bfa_tombstoneObjectForOID:(id)arg1 uuid:(id)arg2 propertyHint:(unsigned int)arg3;
- (id)bfa_fetchObjectsForOIDs:(id)arg1 propertyHint:(unsigned int)arg2;
- (id)faceClusterSequenceNumbersOfFacesWithClusterSequenceNumbers:(id)arg1 error:(id *)arg2;
- (_Bool)isFaceProcessingFinished;
- (id)faceClusterSequenceNumbersOfKeyFacesInAlgorithmicFaceGroupsForPerson:(id)arg1 verifiedClusterSequenceNumbers:(id)arg2;
- (id)suggestionsForPersonLocalIdentifier:(id)arg1 clusterSequenceNumbers:(id)arg2 excludePersonLocalIdentifiers:(id)arg3 minimumSuggestionFaceCount:(unsigned int)arg4;
- (void)personPromotionProcessingStatusForUserInterface:(CDUnknownBlockType)arg1;
- (void)faceProcessingStatusForUserInterface:(CDUnknownBlockType)arg1;
- (id)suggestedMePersonIdentifierWithError:(id *)arg1;
- (id)assetIdentifiersForPersonIdentifiers:(id)arg1 error:(id *)arg2;
- (id)socialGroupsForPersonIdentifiers:(id)arg1 error:(id *)arg2;
- (id)allSocialGroupsForPersonIdentifier:(id)arg1 error:(id *)arg2;
- (id)sortedArrayOfPersonIdentifiers:(id)arg1 error:(id *)arg2;
- (void)simulateMemoriesNotificationWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)generateMemoriesRelatedDiagnosticsLogsWithReply:(CDUnknownBlockType)arg1;
- (void)requestGraphReadyNotificationWithCoalescingIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestGraphRebuildProgressWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestGraphRebuildWithProgress:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)invalidatePersistentGraphCachesAndReturnError:(id *)arg1;
- (_Bool)invalidateTransientGraphCachesAndReturnError:(id *)arg1;
- (id)exportGraphForPurpose:(id)arg1 error:(id *)arg2;
- (void)requestHighlightEstimatesWithCompletion:(CDUnknownBlockType)arg1;
- (id)graphStatisticsDescription:(id *)arg1;
- (id)graphStatusDescription:(id *)arg1;
- (id)relatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned int)arg4 relatedType:(unsigned int)arg5 error:(id *)arg6;
- (id)relatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned int)arg4 relatedType:(unsigned int)arg5 error:(id *)arg6;
- (id)curationDebugInformationForAssetLocalIdentifier:(id)arg1 precision:(unsigned int)arg2 error:(id *)arg3;
- (id)memoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 precision:(unsigned int)arg2 error:(id *)arg3;
- (void)cancelOperationsWithIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)featureEnabledForWorkerType:(short)arg1;
- (_Bool)featureEnabledForWorkerType:(short)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isNamingFlowEnabled:(CDUnknownBlockType)arg1;
- (void)enableNamingFlow;
- (void)_checkForPeopleUIFeatureWithFetchRequest:(id)arg1 comparator:(CDUnknownBlockType)arg2;
- (_Bool)cleanupInvalidIgnoreUntilDatesWithError:(id *)arg1;
- (_Bool)resetPendingAnalysisStatesWithError:(id *)arg1;
- (void)removeAnalysisRecordsForDeletedAssetUUIDs:(id)arg1 forWorkerType:(short)arg2;
- (_Bool)markAnalysisStatesProcessedForWorkerType:(short)arg1 error:(id *)arg2;
- (id)deletedAssetUUIDsForAnalysisByWorkerType:(short)arg1 fetchLimit:(unsigned int)arg2 error:(id *)arg3;
- (void)requestCountOfAnalysisRecordsForDeletedAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (id)workInfoForAnalysisWithWorkerType:(short)arg1 additionalStatesToExclude:(id)arg2 fetchLimit:(unsigned int)arg3 error:(id *)arg4;
- (id)analysisProgressCountsForWorkerType:(short)arg1;
- (void)requestAnalysisProgressCountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_requestAnalysisProgressWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestTotalProgressCountsForWorkerType:(short)arg1 states:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestTotalProgressCountsWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
