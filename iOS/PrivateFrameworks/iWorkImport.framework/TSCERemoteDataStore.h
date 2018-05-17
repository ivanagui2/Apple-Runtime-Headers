//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSOperationQueue, TSCECalculationEngine, TSCERemoteDataCoordinator, TSCERemoteDataSpecifierSet, TSCERemoteDataValueMap;

__attribute__((visibility("hidden")))
@interface TSCERemoteDataStore : TSPObject
{
    _Bool _hasInterestingKeys;
    _Bool _registeredWithCoordinator;
    id <TSCERemoteDataStoreDelegate> _delegate;
    TSCECalculationEngine *_calculationEngine;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_updateQueue;
    NSObject<OS_dispatch_semaphore> *_tspSemaphore;
    TSCERemoteDataValueMap *_remoteDataMap;
    NSMutableDictionary *_cachedStocks;
    TSCERemoteDataSpecifierSet *_interestingKeys;
    NSMutableDictionary *_ownerMap;
    double _remoteDataSyncKey;
    NSMutableSet *_unSyncedStocks;
}

@property(retain, nonatomic) NSMutableSet *unSyncedStocks; // @synthesize unSyncedStocks=_unSyncedStocks;
@property(nonatomic) double remoteDataSyncKey; // @synthesize remoteDataSyncKey=_remoteDataSyncKey;
@property(nonatomic) _Bool registeredWithCoordinator; // @synthesize registeredWithCoordinator=_registeredWithCoordinator;
@property(readonly, nonatomic) NSMutableDictionary *ownerMap; // @synthesize ownerMap=_ownerMap;
@property(nonatomic) _Bool hasInterestingKeys; // @synthesize hasInterestingKeys=_hasInterestingKeys;
@property(readonly, nonatomic) TSCERemoteDataSpecifierSet *interestingKeys; // @synthesize interestingKeys=_interestingKeys;
@property(readonly, nonatomic) NSMutableDictionary *cachedStocks; // @synthesize cachedStocks=_cachedStocks;
@property(readonly, nonatomic) TSCERemoteDataValueMap *remoteDataMap; // @synthesize remoteDataMap=_remoteDataMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_semaphore> *tspSemaphore; // @synthesize tspSemaphore=_tspSemaphore;
@property(readonly, nonatomic) NSOperationQueue *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak TSCECalculationEngine *calculationEngine; // @synthesize calculationEngine=_calculationEngine;
@property(nonatomic) __weak id <TSCERemoteDataStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
@property(readonly, nonatomic) _Bool hasArchivableState;
- (void)updateCachedStocksIntoStore:(id)arg1;
- (void)updateCachedStocksFromKnownStocks:(id)arg1;
@property(readonly, nonatomic) _Bool hasFullyPopulatedCache;
- (void)updateWithRemoteDataMap:(id)arg1 quotes:(struct NSDictionary *)arg2 syncKey:(double)arg3;
- (id)p_dictionaryForRemoteData:(id)arg1;
- (struct NSDictionary *)allQuotes;
- (id)allRemoteData;
- (struct TSCEValue)p_tsceValueFromTsceCellValue:(id)arg1;
- (void)remoteDataDidUpdateValues:(id)arg1 quotes:(struct NSDictionary *)arg2;
- (id)p_updateCachesWithMap:(id)arg1 quotes:(struct NSDictionary *)arg2 overwriteValues:(_Bool)arg3;
- (void)removeRemoteDataInterest:(id)arg1 forOwner:(const UUIDData_5fbc143e *)arg2;
- (void)addRemoteDataInterest:(id)arg1 forOwner:(const UUIDData_5fbc143e *)arg2;
- (id)cachedQuoteForSymbol:(id)arg1;
- (struct TSCEValue)valueForRemoteData:(id)arg1;
- (void)unregisterWithCoordinator;
- (void)registerWithCoordinator;
@property(readonly, nonatomic) TSCERemoteDataCoordinator *coordinator;
- (_Bool)p_isInCollaborationMode;
- (void)dealloc;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2;
- (void)p_recursiveWriteWillModify:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)p_initializeQueue;

@end
