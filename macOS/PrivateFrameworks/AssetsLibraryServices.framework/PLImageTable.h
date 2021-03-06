//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssetsLibraryServices/PLThumbPersistenceManager-Protocol.h>

@class NSMutableArray, NSString, PLImageFormat;

@interface PLImageTable : NSObject <PLThumbPersistenceManager>
{
    NSString *_path;
    int _sideLength;
    BOOL _squareCropped;
    PLImageFormat *_format;
    int _imageRowBytes;
    int _imageLength;
    int _entryLength;
    BOOL _readOnly;
    BOOL _dying;
    int _fid;
    long long _fileLength;
    long long _entryCount;
    long long _segmentCount;
    unsigned long long _segmentLength;
    NSMutableArray *_allSegments;
}

+ (void)releaseSegmentCache;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (struct CGImage *)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 decodeSession:(void *)arg3;
- (BOOL)validateData:(id)arg1 withToken:(id)arg2;
- (id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 dataOffset:(int *)arg8;
- (id)_debugDescription;
- (void)finishEntryAtIndex:(unsigned long long)arg1 withImageData:(id)arg2 sourceImageSize:(struct CGSize)arg3 assetUUID:(id)arg4;
- (struct CGSize)imageSize;
- (void)verifyThumbnailDataForIndex:(unsigned long long)arg1 uuid:(id)arg2;
- (void)compactWithOccupiedIndexes:(id)arg1;
- (id)preflightCompactionWithOccupiedIndexes:(id)arg1;
- (BOOL)_compactWithOccupiedIndexes:(id)arg1 outPhotoUUIDToIndexMap:(id *)arg2;
- (void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 withToken:(id)arg2;
- (id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1;
- (void)deleteEntryWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3;
- (void)flushEntryAtAddress:(void *)arg1;
- (void)_flushEntryAtAddress:(void *)arg1 count:(int)arg2;
- (void)_addEntriesIfNecessaryForIndex:(long long)arg1;
- (BOOL)_setEntryCount:(long long)arg1;
- (long long)entryCount;
- (void)touchEntriesInRange:(struct _NSRange)arg1;
- (id)dataForEntryAtIndex:(unsigned long long)arg1 createIfNeeded:(BOOL)arg2;
- (void)_updateSegmentCount;
- (void)_reloadSegmentAtIndex:(long long)arg1;
- (void)_releaseSegment:(id)arg1;
- (void)lockAndReleaseSegment:(id)arg1;
- (void)_releaseSegmentAtIndex:(long long)arg1;
- (id)_segmentAtIndex:(long long)arg1;
- (void)performLockedBlock:(CDUnknownBlockType)arg1;
- (BOOL)usesThumbIdentifiers;
@property(readonly, getter=isSquareCropped) BOOL squareCropped;
@property(readonly, nonatomic) BOOL isReadOnly;
@property(readonly, nonatomic) int sideLength;
@property(readonly, nonatomic) PLImageFormat *format;
- (unsigned long long)_segmentLength;
- (int)_fileDescriptor;
- (void)dealloc;
- (id)initWithPath:(id)arg1 readOnly:(BOOL)arg2 format:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, getter=isReadOnly) BOOL readOnly;
@property(readonly) Class superclass;

@end

