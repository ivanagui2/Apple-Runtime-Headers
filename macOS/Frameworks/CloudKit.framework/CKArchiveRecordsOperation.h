//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKArchiveRecordsOperation : CKDatabaseOperation
{
    CDUnknownBlockType _recordArchivedBlock;
    CDUnknownBlockType _archiveRecordsCompletionBlock;
    NSArray *_recordIDs;
    NSMutableDictionary *_perItemErrors;
}

@property(retain, nonatomic) NSMutableDictionary *perItemErrors; // @synthesize perItemErrors=_perItemErrors;
@property(copy, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
- (void).cxx_destruct;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (BOOL)hasCKOperationCallbacksSet;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType archiveRecordsCompletionBlock; // @synthesize archiveRecordsCompletionBlock=_archiveRecordsCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType recordArchivedBlock; // @synthesize recordArchivedBlock=_recordArchivedBlock;
- (id)initWithRecordIDs:(id)arg1;
- (id)init;

@end
