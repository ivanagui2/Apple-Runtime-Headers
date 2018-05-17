//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCSyncDownOperation.h>

@class CKQueryCursor, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BRCMigrationQueryOperation : BRCSyncDownOperation
{
    NSString *_migrationKey;
    CKQueryCursor *_continuationCursor;
    NSMutableArray *_recordsWithShareID;
    NSMutableArray *_sharedIDsToFetch;
    NSMutableArray *_shares;
}

+ (id)allMigrationKeysOrdered;
+ (id)sharesMigrationKey;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (void)_saveQueryRecords:(id)arg1;
- (void)_performAfterFetchShares:(CDUnknownBlockType)arg1;
- (void)_performAfterQueryingForShareIDs:(CDUnknownBlockType)arg1;
- (void)_performQuery:(id)arg1 recordFetchedBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)shouldRetryForError:(id)arg1;
- (id)initWithServerZone:(id)arg1 migrationKey:(id)arg2 continuationCursor:(id)arg3;

@end
