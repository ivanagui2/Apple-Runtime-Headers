//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHAssetCreationRequest.h>

#import "PHClientSenderPropertySet.h"

@class NSManagedObjectID, NSString, PLAssetsdClientServiceSender, PLClientServerTransaction;

@interface PHAssetCreationRequestPlaceholderSupport : PHAssetCreationRequest <PHClientSenderPropertySet>
{
    PLClientServerTransaction *_serverTransaction;
    int _placeholderCreationMode;
    PLAssetsdClientServiceSender *clientSender;
}

+ (_Bool)_shouldBakeInAdjustmentsAndFlattenLivePhoto:(_Bool *)arg1 forSourceAsset:(id)arg2;
@property(retain, nonatomic) PLAssetsdClientServiceSender *clientSender; // @synthesize clientSender;
- (void).cxx_destruct;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (_Bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (id)_fetchOptionsForDuplicateAssetPhotoLibraryType;
- (void)_updateManagedAssetAfterResourceDownload:(id)arg1;
- (id)_createPlaceholderManagedAssetFromSourceManagedAsset:(id)arg1 inPhotoLibrary:(id)arg2 error:(id *)arg3;
- (void)changeFailedOnDaemonWithError:(id)arg1;
- (void)changeFailedOnClientWithError:(id)arg1;
- (void)_setDestinationAssetAvailabilityHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, nonatomic, getter=isClientEntitled) _Bool clientEntitled;
@property(readonly, nonatomic) NSString *clientName;
@property(readonly, nonatomic) int clientProcessID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) NSString *managedEntityName;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uuid;

@end
