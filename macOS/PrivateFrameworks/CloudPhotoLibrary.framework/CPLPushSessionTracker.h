//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPLChangeBatch, CPLEngineStore, CPLPushChangeTasks, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet;

@interface CPLPushSessionTracker : NSObject
{
    NSMutableSet *_unquarantinedRecordIdentifiers;
    NSMutableSet *_incomingBatchRecordIdentifiers;
    NSMutableDictionary *_storedClientRecords;
    NSMutableDictionary *_storedCloudRecords;
    NSMutableArray *_addedRecords;
    NSMutableArray *_updatedRecords;
    NSMutableArray *_deletedRecordIdentifiers;
    NSMutableArray *_changesWithResourceChanges;
    NSMutableDictionary *_fullRecords;
    NSMutableDictionary *_resourcesToUpload;
    BOOL _diffedBatchCanLowerQuota;
    BOOL _expandHasBeenSuccessful;
    BOOL _diffHasBeenSuccessful;
    BOOL _applyHasBeenSuccessful;
    CPLChangeBatch *_incomingBatch;
    CPLEngineStore *_store;
    CPLChangeBatch *_expandedBatch;
    CPLPushChangeTasks *_pushChangeTasks;
    CPLChangeBatch *_diffedBatch;
    unsigned long long _ignoredRecordCount;
    NSDate *_now;
}

@property(readonly, nonatomic) BOOL applyHasBeenSuccessful; // @synthesize applyHasBeenSuccessful=_applyHasBeenSuccessful;
@property(readonly, nonatomic) BOOL diffHasBeenSuccessful; // @synthesize diffHasBeenSuccessful=_diffHasBeenSuccessful;
@property(readonly, nonatomic) BOOL expandHasBeenSuccessful; // @synthesize expandHasBeenSuccessful=_expandHasBeenSuccessful;
@property(copy, nonatomic) NSDate *now; // @synthesize now=_now;
@property(readonly, nonatomic) BOOL diffedBatchCanLowerQuota; // @synthesize diffedBatchCanLowerQuota=_diffedBatchCanLowerQuota;
@property(readonly, nonatomic) unsigned long long ignoredRecordCount; // @synthesize ignoredRecordCount=_ignoredRecordCount;
@property(readonly, nonatomic) CPLChangeBatch *diffedBatch; // @synthesize diffedBatch=_diffedBatch;
@property(readonly, nonatomic) CPLPushChangeTasks *pushChangeTasks; // @synthesize pushChangeTasks=_pushChangeTasks;
@property(readonly, nonatomic) NSSet *unquarantinedRecordIdentifiers; // @synthesize unquarantinedRecordIdentifiers=_unquarantinedRecordIdentifiers;
@property(readonly, nonatomic) CPLChangeBatch *expandedBatch; // @synthesize expandedBatch=_expandedBatch;
@property(readonly, nonatomic) CPLEngineStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) CPLChangeBatch *incomingBatch; // @synthesize incomingBatch=_incomingBatch;
- (void).cxx_destruct;
- (BOOL)shouldCancelSyncSessionTryingToUploadChange:(id)arg1;
- (BOOL)applyChangesToClientCacheWithError:(id *)arg1;
@property(readonly, nonatomic) NSDictionary *resourcesToUpload;
@property(readonly, nonatomic) NSArray *deletedRecordIdentifiers;
@property(readonly, nonatomic) NSArray *updatedRecords;
@property(readonly, nonatomic) NSArray *addedRecords;
- (void)enumerateDiffWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)computeDiff;
- (BOOL)computeExpandedBatch;
- (BOOL)hasCloudRecordWithLocalIdentifier:(id)arg1;
- (id)storedCloudRecordWithLocalIdentifier:(id)arg1;
- (BOOL)hasClientRecordWithLocalIdentifier:(id)arg1;
- (id)storedClientRecordWithLocalIdentifier:(id)arg1;
- (BOOL)knowsClientRecordWithIdentifier:(id)arg1;
@property(readonly, nonatomic) BOOL hasPushChangeTasks;
- (BOOL)hasIncomingRecordWithIdentifier:(id)arg1;
- (id)initWithIncomingBatch:(id)arg1 store:(id)arg2 error:(id *)arg3;

@end
