//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDLibrary.h>

#import <PhotoLibraryPrivate/PFBSMResourceIdentification-Protocol.h>

@class LiSearchKitIndex, NSString, PFBSMResourceIdentifier, PFCache, PLPhotoAnalysisServiceClient, RDLibraryMessagesCoalescer, RDModelCache, RDPhotoModelClient, RDVersionLongLivedQueryMgr, RDVisionClient, RDVolumeCache;
@protocol PLPhotoAnalysisServiceTaxonomyResolver, RDCloudPhotoLibraryManager;

@interface RDDatabase : RDLibrary <PFBSMResourceIdentification>
{
    long long _sentMulticasterServiceConnectionClosed;
    RDVisionClient *_visionClient;
    PLPhotoAnalysisServiceClient *_photoAnalysisClient;
    int _spinlock;
    unsigned char _volumeCacheOnceToken;
    BOOL _rebuildThumbnails;
    unsigned short _openOptions;
    PFBSMResourceIdentifier *resourceAccessIdentifier;
    RDLibraryMessagesCoalescer *_messageCoalescer;
    RDVolumeCache *_volumeCache;
    RDVersionLongLivedQueryMgr *_versionLongLivedQueryMgr;
    id <PLPhotoAnalysisServiceTaxonomyResolver> _taxonomyResolver;
    id <RDCloudPhotoLibraryManager> _cloudPhotoLibraryManager;
    NSString *_uuid;
    PFCache *_bookmarkCache;
    LiSearchKitIndex *_searchKitTokenizer;
    id _photoLibrary;
    RDPhotoModelClient *_photoModelClient;
    RDModelCache *_ipsModelCache;
}

+ (struct PFAsyncDispatchMulticaster *)globalMulticaster;
+ (id)libraryVersionFromLiError:(id)arg1;
+ (BOOL)sendsCreateFinished;
+ (BOOL)isLibraryKeyWellKnown:(id)arg1;
+ (void)checkLibraryURL:(id)arg1 haveSecurityScopedBookmark:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
+ (BOOL)checkLibraryURL:(id)arg1 haveSecurityScopedBookmark:(BOOL)arg2 error:(id *)arg3;
+ (id)startupLanguageName;
+ (void)initialize;
+ (unsigned short)iLMBDatabaseOptions;
+ (BOOL)serverSupportsGraphPeopleHome;
+ (BOOL)isFaceCropEnabled;
+ (id)defaultAccessPathsAndOptions;
+ (void)sizeOfDatabaseAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (unsigned long long)sizeOfFolderAtURL:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) BOOL rebuildThumbnails; // @synthesize rebuildThumbnails=_rebuildThumbnails;
@property(readonly, nonatomic) RDModelCache *ipsModelCache; // @synthesize ipsModelCache=_ipsModelCache;
@property(readonly, nonatomic) RDPhotoModelClient *photoModelClient; // @synthesize photoModelClient=_photoModelClient;
@property __weak id photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(retain, nonatomic) LiSearchKitIndex *searchKitTokenizer; // @synthesize searchKitTokenizer=_searchKitTokenizer;
@property(retain, nonatomic) PFCache *bookmarkCache; // @synthesize bookmarkCache=_bookmarkCache;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) id <RDCloudPhotoLibraryManager> cloudPhotoLibraryManager; // @synthesize cloudPhotoLibraryManager=_cloudPhotoLibraryManager;
@property(retain, nonatomic) id <PLPhotoAnalysisServiceTaxonomyResolver> taxonomyResolver; // @synthesize taxonomyResolver=_taxonomyResolver;
@property(readonly, nonatomic) RDVersionLongLivedQueryMgr *versionLongLivedQueryMgr; // @synthesize versionLongLivedQueryMgr=_versionLongLivedQueryMgr;
@property(nonatomic) unsigned short openOptions; // @synthesize openOptions=_openOptions;
@property(retain, nonatomic) RDVolumeCache *volumeCache; // @synthesize volumeCache=_volumeCache;
@property(readonly, nonatomic) RDLibraryMessagesCoalescer *messageCoalescer; // @synthesize messageCoalescer=_messageCoalescer;
@property(retain) PFBSMResourceIdentifier *resourceAccessIdentifier; // @synthesize resourceAccessIdentifier;
- (void).cxx_destruct;
- (void)forceThumbnailRegeneration;
- (id)filterForVersionsInMomentsWithType:(unsigned char)arg1;
- (id)allPlaces;
- (unsigned long long)countOfAllMoments;
- (unsigned long long)countOfVideosInMoments;
- (unsigned long long)countOfAudiosInMoments;
- (unsigned long long)countOfSupportedImagesInMoments;
- (unsigned long long)countOfAllImagesInMoments;
- (unsigned long long)countOfAllNonReferencedVersionsWithSyncFailure;
- (unsigned long long)countOfAllVersionsWithNoSyncStatus;
- (unsigned long long)countOfAllReferencedMedia;
- (unsigned long long)countOfAllMasters;
- (id)totalFileSizeIncludeHidden:(BOOL)arg1;
- (id)latestImageDateIncludeHidden:(BOOL)arg1;
- (id)earliestImageDateIncludeHidden:(BOOL)arg1;
- (id)computeTokensForSearchString:(id)arg1 ignoreSubTokens:(BOOL)arg2;
- (void)handleModelChanges:(id)arg1 changeGroupType:(unsigned char)arg2;
- (void)removeMessagesReceiver:(struct NSObject *)arg1;
- (void)addWeakMessagesReceiver:(struct NSObject *)arg1;
- (void)addMessagesReceiver:(struct NSObject *)arg1;
- (void)setURL:(id)arg1 forBookmarkModelId:(long long)arg2;
- (id)urlForBookmark:(id)arg1 accessMode:(unsigned char)arg2;
- (void)checkSceneLocale;
- (void)checkSceneTaxonomyHash;
- (id)searchResultNodesForSceneClassifications:(id)arg1 error:(id *)arg2;
- (id)sceneNodesForSceneIdentifiers:(id)arg1 error:(id *)arg2;
@property(readonly) PLPhotoAnalysisServiceClient *photoAnalysisClient;
@property(readonly) RDVisionClient *visionClient;
- (id)errorCodeMappingForError:(id)arg1;
- (id)availableMasterIds;
- (id)mediaTypesFolder;
- (id)libraryFolder;
- (BOOL)databaseDirectoryExists;
- (void)serviceConnectionClosed;
- (void)close;
- (void)handleAlert:(unsigned char)arg1;
- (BOOL)isLibraryTypeSharing;
- (void)makeLibraryTypeSharing;
- (BOOL)openCanonicalLibraryWithMode:(unsigned char)arg1 options:(unsigned short)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)openLibraryWithKey:(id)arg1 mode:(unsigned char)arg2 options:(unsigned short)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)libraryURLForKey:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setupVolumeCache;
- (BOOL)openLibraryURL:(id)arg1 mode:(unsigned char)arg2 options:(unsigned short)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)modelCacheSupported;
- (void)dealloc;
- (id)initAsWellKnownClient:(unsigned char)arg1;
- (BOOL)prepareForFaceCropsAndReturnError:(id *)arg1;
- (void)linkFromURL:(id)arg1 toURL:(id)arg2 fileManager:(id)arg3 error:(id)arg4;
- (CDUnknownBlockType)nonDestructiveUpgradeConfigurationBlock;
- (id)projectsDirectoryPath;
- (id)segmentDirectoryPath;
- (id)proxyDirectoryPath;
- (id)legacyModelResourcesDirectoryPath;
- (id)modelResourcesDirectoryPath;
- (id)momentsDirectoryPath;
- (id)pluginsDirectoryPath;
- (id)masksDirectoryPath;
- (id)thumbnailsDirectoryPath;
- (id)assetsDirectoryPath;
- (id)previewsDirectoryPath;
- (id)attachmentsDirectoryPath;
- (id)versionsDirectoryPath;
- (id)mastersDirectoryPath;
- (id)databaseDirectoryPath;
- (id)libraryPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

