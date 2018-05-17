//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import "CPLAbstractObject.h"

@class CPLEngineFileStorage, CPLPlatformObject, NSCountedSet, NSDate, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface CPLEngineResourceStorage : CPLEngineStorage <CPLAbstractObject>
{
    NSMutableSet *_identitiesToCommit;
    NSMutableSet *_identitiesToDelete;
    NSURL *_tempFolderURL;
    NSObject<OS_dispatch_queue> *_pruneStatsQueue;
    NSCountedSet *_successfulPruneStatsPerResourceType;
    NSCountedSet *_failedPruneStatsPerResourceType;
    unsigned long long _successfulPruneSize;
    NSDate *_lastPruneRequestDate;
    CPLEngineFileStorage *_fileStorage;
}

@property(readonly, nonatomic) CPLEngineFileStorage *fileStorage; // @synthesize fileStorage=_fileStorage;
- (void).cxx_destruct;
- (void)notePruningRequestForResource:(id)arg1 successful:(_Bool)arg2;
- (void)notePruningRequestForResource:(id)arg1 successful:(_Bool)arg2 prunedSize:(unsigned int)arg3;
- (id)statusDictionary;
- (id)status;
- (void)writeTransactionDidSucceed;
- (void)writeTransactionDidFail;
- (_Bool)checkIsEmpty;
- (_Bool)compactWithError:(id *)arg1;
- (_Bool)resetWithError:(id *)arg1;
- (_Bool)storeDownloadedResource:(id)arg1 atURL:(id)arg2 error:(id *)arg3;
- (id)createTempDestinationURLForResource:(id)arg1 error:(id *)arg2;
- (_Bool)hasResource:(id)arg1;
- (_Bool)releaseFileURL:(id)arg1 forResource:(id)arg2 error:(id *)arg3;
- (id)retainFileURLForResource:(id)arg1 error:(id *)arg2;
- (unsigned long long)sizeOfOriginalResourcesToUpload;
- (unsigned long long)sizeOfResourcesToUpload;
- (_Bool)dropResourceForUpload:(id)arg1 error:(id *)arg2;
- (_Bool)storeResourceForUpload:(id)arg1 error:(id *)arg2;
- (_Bool)openWithError:(id *)arg1;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end
