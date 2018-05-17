//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ImageCaptureCore/ICCameraItem.h>

@class NSArray;

@interface ICCameraFolder : ICCameraItem
{
    id _folderProperties;
}

- (void)sendDidRemoveItemMessageToDelegateOfCameraDevice:(id)arg1;
- (void)sendDidAddItemMessageToDelegateOfCameraDevice:(id)arg1;
- (id)metadataIfAvailable;
- (struct CGImage *)largeThumbnailIfAvailable;
- (struct CGImage *)thumbnailIfAvailable;
- (id)getFileWithID:(unsigned long long)arg1;
- (id)getFolderWithID:(unsigned long long)arg1;
- (void)deleteFileWithID:(unsigned long long)arg1;
- (void)deleteFolderWithID:(unsigned long long)arg1;
- (BOOL)hasThumbnail;
- (id)folders;
- (id)filesSet;
- (id)files;
- (id)modificationDate;
- (id)creationDate;
- (id)valueForUndefinedKey:(id)arg1;
@property(readonly) NSArray *contents;
- (void)deleteFolder:(id)arg1;
- (void)deleteFile:(id)arg1;
- (void)deleteItem:(id)arg1;
- (void)addFolder:(id)arg1;
- (void)addFile:(id)arg1;
- (void)removeContent;
- (void)addContent:(id)arg1;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 parentFolder:(id)arg2 device:(id)arg3;

@end
