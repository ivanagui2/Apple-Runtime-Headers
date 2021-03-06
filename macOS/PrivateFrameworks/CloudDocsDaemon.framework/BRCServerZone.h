//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCJobsMatching-Protocol.h>
#import <CloudDocsDaemon/BRCZone-Protocol.h>

@class BRCAccountSession, BRCClientZone, BRCPQLConnection, BRCPendingChangesStream, BRCServerChangeState, BRCSyncContext, BRCZoneRowID, BRMangledID, CKRecordZoneID, NSMutableDictionary, NSString;

@interface BRCServerZone : NSObject <BRCJobsMatching, BRCZone>
{
    BRCServerChangeState *_changeState;
    BRCAccountSession *_session;
    BRCPQLConnection *_db;
    NSString *_zoneName;
    BRCZoneRowID *_dbRowID;
    BRCClientZone *_clientZone;
    unsigned int _state;
    BRCSyncContext *_syncContext;
    BRCSyncContext *_metadataSyncContext;
    BOOL _needsSave;
    BRCPendingChangesStream *_pendingChanges;
}

@property(readonly, nonatomic) BRCPendingChangesStream *pendingChanges; // @synthesize pendingChanges=_pendingChanges;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) BOOL needsSave; // @synthesize needsSave=_needsSave;
@property(readonly, nonatomic) BRCPQLConnection *db; // @synthesize db=_db;
@property(retain, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) BRCClientZone *clientZone; // @synthesize clientZone=_clientZone;
@property(readonly) BRCServerChangeState *changeState; // @synthesize changeState=_changeState;
@property(readonly, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(retain, nonatomic) BRCZoneRowID *dbRowID; // @synthesize dbRowID=_dbRowID;
- (void).cxx_destruct;
- (BOOL)validateItemsLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (BOOL)validateStructureLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (BOOL)dumpTablesToContext:(id)arg1 includeAllItems:(BOOL)arg2 error:(id *)arg3;
- (BOOL)dumpStatusToContext:(id)arg1 error:(id *)arg2;
- (struct PQLResultSet *)directDirectoryChildItemIDsOfParentEnumerator:(id)arg1;
- (struct PQLResultSet *)itemsEnumeratorWithDB:(id)arg1;
- (id)itemByItemID:(id)arg1;
- (id)itemByItemID:(id)arg1 db:(id)arg2;
- (void)removeForegroundClient:(id)arg1;
- (void)addForegroundClient:(id)arg1;
@property(readonly) BOOL isCloudDocsZone;
- (void)clearStateBits:(unsigned int)arg1;
- (BOOL)setStateBits:(unsigned int)arg1;
- (void)destroyPendingChangesDBOnQueue:(BOOL)arg1;
- (void)saveQueryRecords:(id)arg1;
- (void)forceMoveToCloudDocs;
- (BOOL)serverZoneIsCreated;
- (BOOL)shouldRecreateServerZoneAfterError:(id)arg1;
- (id)deleteAllContentsOperation;
- (void)deleteAllContentsOnServerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)resetServerTruth;
- (BOOL)resetServerTruthAndDestroyZone:(BOOL)arg1;
- (void)collectTombstoneRanks:(id)arg1;
- (void)_collectTombstoneForRank:(unsigned long long)arg1;
- (unsigned long long)didSyncDownRequestID:(unsigned long long)arg1 serverChangeToken:(id)arg2 editedRecords:(id)arg3 deletedRecordIDs:(id)arg4 deletedShareRecordIDs:(id)arg5 movedZoneNames:(id)arg6 allocRankZones:(id *)arg7 syncStatus:(long long)arg8;
- (void)handleBrokenStructure;
- (BOOL)allocateRanks;
- (BOOL)fixupLocalSharingOptions;
- (long long)_fixupSharingOptions:(unsigned long long)arg1 underParentID:(id)arg2;
- (id)_structurePrefixForType:(BOOL)arg1;
- (BOOL)_saveEditedShareRecords:(id)arg1 deletedShareRecordIDs:(id)arg2 zonesNeedingAllocRanks:(id)arg3;
- (BOOL)_saveEditedContentRecords:(id)arg1 zonesNeedingAllocRanks:(id)arg2;
- (void)_reportCantSaveProblem:(id)arg1 record:(id)arg2;
- (BOOL)_saveDeletedRecordIDs:(id)arg1;
- (BOOL)_saveEditedStructureRecords:(id)arg1 zonesNeedingAllocRanks:(id)arg2;
- (BOOL)_savePendingChangesSharesIgnoringRecordIDs:(id)arg1 zonesNeedingAllocRanks:(id)arg2;
- (BOOL)_savePendingChangesDeletedRecordIDsIgnoringRecordIDs:(id)arg1;
- (BOOL)_savePendingChangesEditedContentRecordsIgnoringRecordIDs:(id)arg1 zonesNeedingAllocRanks:(id)arg2;
- (BOOL)_savePendingChangesEditedStructureRecordsIgnoringRecordIDs:(id)arg1 zonesNeedingAllocRanks:(id)arg2;
- (BOOL)_markItemDeadForRecordID:(id)arg1;
- (BOOL)_markShareIDDead:(id)arg1;
- (BOOL)_saveEditedRecord:(id)arg1 zonesNeedingAllocRanks:(id)arg2 error:(id *)arg3;
- (BOOL)_saveEditedShareRecord:(id)arg1 error:(id *)arg2;
- (BOOL)_saveEditedAliasRecord:(id)arg1 zonesNeedingAllocRanks:(id)arg2 error:(id *)arg3;
- (BOOL)_saveEditedFinderBookmarkRecord:(id)arg1 error:(id *)arg2;
- (BOOL)_saveEditedSymlinkRecord:(id)arg1 error:(id *)arg2;
- (BOOL)_saveEditedDocumentContentRecord:(id)arg1 error:(id *)arg2;
- (BOOL)_saveEditedDirOrDocStructureRecord:(id)arg1 error:(id *)arg2;
- (BOOL)_saveItemID:(id)arg1 version:(id)arg2 record:(id)arg3 iWorkSharingOptions:(unsigned long long)arg4;
- (BOOL)_saveItemID:(id)arg1 stat:(id)arg2 record:(id)arg3 error:(id *)arg4;
- (BOOL)_saveItemID:(id)arg1 stat:(id)arg2 record:(id)arg3 origName:(id)arg4 base:(id)arg5 no:(id)arg6 ext:(id)arg7;
- (id)xattrForSignature:(id)arg1;
- (BOOL)storeXattr:(id)arg1;
- (BOOL)hasXattrWithSignature:(id)arg1;
- (void)deactivateFromClientZone;
- (void)activateWithClientZone:(id)arg1 offline:(BOOL)arg2;
- (id)initWithMangledID:(id)arg1 dbRowID:(id)arg2 plist:(id)arg3 session:(id)arg4;
@property(readonly, nonatomic) NSMutableDictionary *plist;
@property(readonly, copy) NSString *description;
- (id)descriptionWithContext:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BRMangledID *mangledID;
@property(readonly, nonatomic) CKRecordZoneID *zoneID;
@property(readonly, nonatomic) NSString *ownerName;
@property(readonly, nonatomic) BRCSyncContext *metadataSyncContextIfExists;
@property(readonly, nonatomic) BRCSyncContext *metadataSyncContext;
- (id)syncContext;
- (id)asSharedZone;
- (id)asPrivateZone;
@property(readonly, nonatomic) BOOL isPrivateZone;
@property(readonly, nonatomic) BOOL isSharedZone;
- (void)scheduleMoveToCloudDocs;
- (id)matchingJobsWhereSQLClause;
- (id)jobsDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

