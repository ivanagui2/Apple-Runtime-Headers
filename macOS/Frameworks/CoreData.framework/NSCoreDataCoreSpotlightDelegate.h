//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectContext, NSString;

@interface NSCoreDataCoreSpotlightDelegate : NSObject
{
    NSManagedObjectContext *_context;
    NSString *_domainIdentifier;
    NSString *_indexName;
}

- (id)_lastImportedTransaction;
- (BOOL)_initialImportCompleted;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)_catchUpToCurrentTransaction;
- (id)_spotlightClientStateForHistoryTracking;
- (void)_updateSpotlightClientStateForHistoryTracking:(id)arg1;
- (void)_doFullReimport;
- (void)_importObjectsUpdatedSinceTransaction:(id)arg1;
- (id)_processTransactionsStartingAt:(id)arg1;
- (void)_reindexInstancesOf:(id)arg1 in:(id)arg2;
- (void)_updateSpotlightIndexFromSaveRequest:(id)arg1;
- (void)_updateSpotlightIndexForObjectsWithIDs:(id)arg1;
- (id)_searchableItemForObject:(id)arg1;
- (id)attributeSetForObject:(id)arg1;
- (id)_processedOidsForSaveRequest:(id)arg1;
- (id)_processedOidsForDictionary:(id)arg1;
- (void)dealloc;
- (id)initForStoreWithDescription:(id)arg1 model:(id)arg2;
- (id)indexName;
- (id)domainIdentifier;

@end
