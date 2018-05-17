//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSDate, NSString;

@interface CPLRecordChange : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_uploadIdentifier;
    BOOL _shouldNotTrustCloudCache;
    BOOL _shouldFilterDefaultValuesForNewProperties;
    BOOL _isSparseFullChange;
    BOOL _inTrash;
    BOOL _inExpunged;
    BOOL _serverRecordIsCorrupted;
    NSString *_identifier;
    NSDate *_recordModificationDate;
    unsigned long long _changeType;
    NSDate *_dateDeleted;
    NSString *_realIdentifier;
    NSData *_recordChangeData;
}

+ (CDUnknownBlockType)copyPropertyBlockForDirection:(unsigned long long)arg1;
+ (CDUnknownBlockType)equalityBlockForDirection:(unsigned long long)arg1;
+ (id)_descriptionForChangeType:(unsigned long long)arg1 isSparseFullChange:(BOOL)arg2;
+ (id)descriptionForChangeType:(unsigned long long)arg1;
+ (long long)maxInlineDataSize;
+ (id)newChangeWithIdentifier:(id)arg1 changeType:(unsigned long long)arg2;
+ (id)newChangeWithType:(unsigned long long)arg1;
+ (id)newDeleteChangeWithIdentifier:(id)arg1;
+ (id)newRecordWithIdentifier:(id)arg1;
+ (id)newRecord;
+ (id)descriptionForDirection:(unsigned long long)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;
+ (Class)classForStoredClassName:(id)arg1 forCPLArchiver:(id)arg2;
+ (id)ckAssetProperties;
+ (id)assetTransferOptionsByRecordTypeAndKey;
@property(nonatomic) BOOL serverRecordIsCorrupted; // @synthesize serverRecordIsCorrupted=_serverRecordIsCorrupted;
@property(copy, nonatomic) NSData *recordChangeData; // @synthesize recordChangeData=_recordChangeData;
@property(copy, nonatomic) NSString *realIdentifier; // @synthesize realIdentifier=_realIdentifier;
@property(nonatomic) BOOL inExpunged; // @synthesize inExpunged=_inExpunged;
@property(nonatomic) BOOL inTrash; // @synthesize inTrash=_inTrash;
@property(copy, nonatomic) NSDate *dateDeleted; // @synthesize dateDeleted=_dateDeleted;
@property(nonatomic) unsigned long long changeType; // @synthesize changeType=_changeType;
@property(copy, nonatomic) NSDate *recordModificationDate; // @synthesize recordModificationDate=_recordModificationDate;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (BOOL)allResourcesAreAvailable;
- (BOOL)isResourceTypeAGeneratedDerivative:(unsigned long long)arg1;
- (unsigned long long)fullChangeTypeForFullRecord;
- (BOOL)_canLowerQuota;
- (void)_setShouldNotTrustCloudCache:(BOOL)arg1;
- (BOOL)_shouldNotTrustCloudCache;
- (void)_setUploadIdentifier:(id)arg1;
- (id)_uploadIdentifier;
- (unsigned long long)estimatedRecordSize;
- (BOOL)validateChangeWithError:(id *)arg1;
- (BOOL)validateFullRecord;
- (void)markAsSparseFullChange;
- (BOOL)isSparseFullChange;
- (CDUnknownBlockType)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (BOOL)shouldFilterDefaultValuesForNewProperties;
- (void)setShouldFilterDefaultValuesForNewProperties:(BOOL)arg1;
- (BOOL)shouldApplyPropertiesWithSelector:(SEL)arg1;
- (id)resourcesDescription;
- (id)cplFullDescription;
- (long long)dequeueOrder;
- (void)awakeFromStorage;
- (void)prepareForStorage;
- (id)allRelatedIdentifiers;
- (id)identifiersForQuarantine;
- (id)identifierForQuarantine;
- (id)proposedLocalIdentifier;
- (void)setSecondaryIdentifier:(id)arg1;
- (id)secondaryIdentifier;
- (void)setRelatedIdentifier:(id)arg1;
- (id)relatedIdentifier;
- (id)propertiesForChangeType:(unsigned long long)arg1;
- (id)mergeRecordChangeWithNewRecordChange:(id)arg1 direction:(unsigned long long)arg2;
- (BOOL)resourceChangeWillOnlyChangeDerivatives:(id)arg1;
- (id)realRecordChangeFromRecordChange:(id)arg1 direction:(unsigned long long)arg2 newRecord:(id *)arg3;
- (id)realRecordChangeFromRecordChange:(id)arg1 direction:(unsigned long long)arg2 newRecord:(id *)arg3 updatedProperties:(id *)arg4;
- (BOOL)applyChange:(id)arg1 copyPropertiesToFinalChange:(id)arg2 forChangeType:(unsigned long long)arg3 direction:(unsigned long long)arg4 updatedProperty:(id *)arg5;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)propertiesDescription;
- (unsigned long long)originalResourceSize;
- (unsigned long long)realResourceSize;
- (unsigned long long)totalResourceSize;
- (id)resourceForType:(unsigned long long)arg1;
- (void)setResources:(id)arg1;
- (id)resources;
- (BOOL)supportsDirectDeletion;
- (BOOL)supportsDeletion;
- (BOOL)supportsResources;
- (BOOL)isDelete;
- (BOOL)isFullRecord;
- (BOOL)hasChangeType:(unsigned long long)arg1;
- (BOOL)validateRecordForTracker:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)storedClassNameForCPLArchiver:(id)arg1;
- (id)proposedCloudIdentifierWithError:(id *)arg1;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)identifiersForMapping;
- (id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(BOOL)arg2 fullRecord:(id)arg3 usingClientCache:(id)arg4;
- (BOOL)shouldAppearInCKUploadContext;
- (void)fillMissingCKAssetProperties:(id)arg1 withCKRecord:(id)arg2;
- (id)initWithCKRecord:(id)arg1 ckAssetProperties:(id)arg2;
- (void)fillCKRecord:(id)arg1 withRecordMap:(id)arg2 tempCKAssetURL:(id)arg3;
- (id)ckAssetFileURLForTempCKAssetURL:(id)arg1 propertyKey:(id)arg2;

@end
