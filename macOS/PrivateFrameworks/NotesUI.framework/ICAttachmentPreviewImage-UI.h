//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICAttachmentPreviewImage.h"

@class NSImage;

@interface ICAttachmentPreviewImage (UI)
+ (struct NSImage *)orientedImage:(struct NSImage *)arg1 withTransform:(struct CGAffineTransform)arg2 background:(int)arg3 backgroundTransform:(struct CGAffineTransform)arg4;
+ (id)imageCache;
- (void)writeOrientedPreviewToDisk;
@property(readonly, nonatomic) NSImage *image;
- (CDUnknownBlockType)asyncImage:(CDUnknownBlockType)arg1 aboutToLoadHandler:(CDUnknownBlockType)arg2;
- (id)newImageLoaderForUpdatingImageOnCompletion:(BOOL)arg1 asyncDataLoading:(BOOL)arg2;
- (id)newImageLoaderForUpdatingImageOnCompletion:(BOOL)arg1;
- (struct NSImage *)orientedImageWithBackground:(int)arg1;
- (struct NSImage *)imageWithBackground:(int)arg1;
@property(readonly, nonatomic) NSImage *orientedImage;
- (struct CGAffineTransform)orientedImageTransform;
- (void)clearCachedOrientedImage;
- (void)setCachedOrientedImage:(struct NSImage *)arg1;
- (struct NSImage *)cachedOrientedImage;
- (id)orientedImageID;
- (void)clearCachedImage;
- (BOOL)hasCachedImage;
- (void)setCachedImage:(struct NSImage *)arg1;
- (struct NSImage *)cachedImage;
@end
