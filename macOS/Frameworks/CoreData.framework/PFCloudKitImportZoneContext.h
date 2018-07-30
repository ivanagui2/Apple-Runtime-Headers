//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSCloudKitMirroringDelegateOptions, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, NSURL, PFCloudKitMirroredRelationshipCache;

__attribute__((visibility("hidden")))
@interface PFCloudKitImportZoneContext : NSObject
{
    NSArray *_updatedRecords;
    NSDictionary *_deletedRecordTypeToRecordID;
    NSSet *_deletedObjectIDs;
    NSArray *_modifiedRecords;
    NSMutableArray *_updatedRelationships;
    NSArray *_deletedRelationships;
    NSMutableDictionary *_recordTypeToRecordNameToObjectID;
    NSMutableDictionary *_recordTypeToUnresolvedRecordNames;
    NSArray *_importOperations;
    NSArray *_invalidatedPendingRelationships;
    NSArray *_pendingRelationshipsToTry;
    NSCloudKitMirroringDelegateOptions *_mirroringOptions;
    PFCloudKitMirroredRelationshipCache *_relCache;
    NSURL *_fileBackedFuturesDirectory;
}

@property(readonly, nonatomic) PFCloudKitMirroredRelationshipCache *relCache; // @synthesize relCache=_relCache;
@property(readonly, nonatomic) NSCloudKitMirroringDelegateOptions *mirroringOptions; // @synthesize mirroringOptions=_mirroringOptions;
@property(readonly, nonatomic) NSArray *pendingRelationshipsToTry; // @synthesize pendingRelationshipsToTry=_pendingRelationshipsToTry;
@property(readonly, nonatomic) NSURL *fileBackedFuturesDirectory; // @synthesize fileBackedFuturesDirectory=_fileBackedFuturesDirectory;
@property(readonly, nonatomic) NSArray *invalidatedPendingRelationships; // @synthesize invalidatedPendingRelationships=_invalidatedPendingRelationships;
@property(readonly, nonatomic) NSArray *importOperations; // @synthesize importOperations=_importOperations;
@property(readonly, nonatomic) NSArray *deletedRelationships; // @synthesize deletedRelationships=_deletedRelationships;
@property(readonly, nonatomic) NSArray *modifiedRecords; // @synthesize modifiedRecords=_modifiedRecords;
@property(readonly, nonatomic) NSSet *deletedObjectIDs; // @synthesize deletedObjectIDs=_deletedObjectIDs;
- (void)addObjectID:(id)arg1 toCache:(id)arg2 forRecordWithType:(id)arg3 andUniqueIdentifier:(id)arg4;
- (void)addObjectID:(id)arg1 toCache:(id)arg2 andUniqueIdentifier:(id)arg3;
- (BOOL)populateUnresolvedIDsWithManagedObjectContext:(id)arg1 error:(id *)arg2;
- (void)addMirroredRelationshipToLink:(id)arg1;
- (void)registerObjectID:(id)arg1 forInsertedRecord:(id)arg2;
- (id)objectIDForRecordWithName:(id)arg1 ofType:(id)arg2;
- (void)addUnresolvedRecordName:(id)arg1 forRecordType:(id)arg2 toCache:(id)arg3;
- (BOOL)initializeCachesWithManagedObjectContext:(id)arg1 andObservedStore:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSArray *updatedRelationships; // @synthesize updatedRelationships=_updatedRelationships;
- (void)dealloc;
- (id)initWithUpdatedRecords:(id)arg1 deletedRecordTypeToRecordIDs:(id)arg2 options:(id)arg3 fileBackedFuturesDirectory:(id)arg4 relationshipCache:(id)arg5;
- (id)initWithUpdatedRecords:(id)arg1 deletedRecordTypeToRecordIDs:(id)arg2 options:(id)arg3 fileBackedFuturesDirectory:(id)arg4;

@end
