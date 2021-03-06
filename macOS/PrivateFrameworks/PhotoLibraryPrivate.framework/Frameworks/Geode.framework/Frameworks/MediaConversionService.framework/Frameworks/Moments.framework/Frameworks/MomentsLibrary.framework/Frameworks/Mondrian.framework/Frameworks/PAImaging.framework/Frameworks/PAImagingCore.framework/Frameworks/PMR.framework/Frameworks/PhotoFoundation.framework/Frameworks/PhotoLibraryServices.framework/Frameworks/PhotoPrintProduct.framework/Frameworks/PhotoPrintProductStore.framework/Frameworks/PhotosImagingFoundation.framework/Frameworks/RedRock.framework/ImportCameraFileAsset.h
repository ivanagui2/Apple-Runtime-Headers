//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedRock/ImportAsset.h>

@class ICCameraFile;

@interface ImportCameraFileAsset : ImportAsset
{
    ICCameraFile *_cameraFile;
}

+ (id)assetFileForFile:(id)arg1;
+ (id)UTIForCameraFile:(id)arg1;
- (void).cxx_destruct;
- (id)nameKey;
- (id)dateKey;
- (id)sizeKey;
- (id)exifImageDate;
- (id)assetId;
- (id)originatingAssetID;
- (void)importForRecord:(id)arg1 copyMethod:(unsigned long long)arg2 parentRecord:(id)arg3;
- (void)cancelThumbnailRequest;
- (id)thumbnailForSize:(unsigned long long)arg1 error:(id *)arg2;
- (id)loadMetadata;
- (id)assetAsRelatedAsset:(id)arg1 toPrimary:(id)arg2;
- (void)loadRelatedFiles;
- (id)mediaGroupId;
- (unsigned char)burstPickType;
- (id)burstUUID;
- (struct CGSize)imageSize;
- (id)gmtImageDate;
- (id)imageDate;
- (BOOL)isViewable;
- (BOOL)hasAdjustments;
- (BOOL)isTagged;
- (BOOL)isRendered;
- (BOOL)isSloMo;
- (BOOL)hasAudioAttachment;
- (BOOL)isLivePhoto;
- (BOOL)isRaw;
- (BOOL)canDelete;
- (BOOL)canReference;
- (BOOL)canPreserveFolderStructure;
- (id)source;
- (BOOL)isEqualToFile:(id)arg1;
- (id)representedObject;
- (BOOL)isDirectory;
- (id)fileExtension;
- (id)fileModificationDate;
- (id)fileCreationDate;
- (unsigned long long)fileSize;
- (id)fileName;
- (id)path;
- (BOOL)containsDateKey:(id)arg1;
- (void)dealloc;
- (id)initWithCameraFile:(id)arg1 uti:(id)arg2 category:(unsigned char)arg3;

@end

