//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface CKFetchRecordsOperation : CKDatabaseOperation
{
    _Bool _shouldFetchAssetContent;
    _Bool _shouldFetchAssetContentInMemory;
    _Bool _dropInMemoryAssetContentASAP;
    _Bool _isFetchCurrentUserOperation;
    CDUnknownBlockType _perRecordProgressBlock;
    CDUnknownBlockType _perRecordCompletionBlock;
    CDUnknownBlockType _fetchRecordsCompletionBlock;
    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    NSMutableSet *_packagesToDestroy;
    NSMutableDictionary *_assetInfoByArrayIndexByRecordKeyByRecordID;
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;
    NSMutableDictionary *_recordIDsToRecords;
    NSMutableDictionary *_recordErrors;
    NSDictionary *_desiredPackageFileIndices;
    NSDictionary *_recordIDsToETags;
    NSDictionary *_recordIDsToVersionETags;
    NSDictionary *_webSharingIdentityDataByRecordID;
}

+ (id)fetchCurrentUserRecordOperation;
@property(retain, nonatomic) NSDictionary *webSharingIdentityDataByRecordID; // @synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID;
@property(retain, nonatomic) NSDictionary *recordIDsToVersionETags; // @synthesize recordIDsToVersionETags=_recordIDsToVersionETags;
@property(retain, nonatomic) NSDictionary *recordIDsToETags; // @synthesize recordIDsToETags=_recordIDsToETags;
@property(nonatomic) _Bool isFetchCurrentUserOperation; // @synthesize isFetchCurrentUserOperation=_isFetchCurrentUserOperation;
@property(copy, nonatomic) NSDictionary *desiredPackageFileIndices; // @synthesize desiredPackageFileIndices=_desiredPackageFileIndices;
@property(retain, nonatomic) NSMutableDictionary *recordErrors; // @synthesize recordErrors=_recordErrors;
@property(retain, nonatomic) NSMutableDictionary *recordIDsToRecords; // @synthesize recordIDsToRecords=_recordIDsToRecords;
@property(retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // @synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey;
@property(retain, nonatomic) NSMutableDictionary *assetInfoByArrayIndexByRecordKeyByRecordID; // @synthesize assetInfoByArrayIndexByRecordKeyByRecordID=_assetInfoByArrayIndexByRecordKeyByRecordID;
@property(nonatomic) _Bool dropInMemoryAssetContentASAP; // @synthesize dropInMemoryAssetContentASAP=_dropInMemoryAssetContentASAP;
@property(nonatomic) _Bool shouldFetchAssetContentInMemory; // @synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory;
@property(nonatomic) _Bool shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property(retain, nonatomic) NSMutableSet *packagesToDestroy; // @synthesize packagesToDestroy=_packagesToDestroy;
@property(copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(copy, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
- (void).cxx_destruct;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)assetInfoForRecordID:(id)arg1 recordKey:(id)arg2 arrayIndex:(id)arg3;
- (_Bool)claimPackagesInRecord:(id)arg1 error:(id *)arg2;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType fetchRecordsCompletionBlock; // @synthesize fetchRecordsCompletionBlock=_fetchRecordsCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perRecordCompletionBlock; // @synthesize perRecordCompletionBlock=_perRecordCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perRecordProgressBlock; // @synthesize perRecordProgressBlock=_perRecordProgressBlock;
- (id)initWithRecordIDs:(id)arg1;
- (id)init;

@end
