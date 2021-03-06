//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PLImageCacheList, PLImageLoadingThread;

@interface PLImageCache : NSObject
{
    PLImageLoadingThread *_loader;
    PLImageCacheList *_cacheList;
}

- (id)newImageLoadingQueue;
- (void)_addImageToCache:(id)arg1;
- (void)invalidateCachedImageForSource:(id)arg1 asset:(id)arg2;
- (id)cachedImageFromSource:(id)arg1 forAsset:(id)arg2 loadIfNeeded:(_Bool)arg3 synchronously:(_Bool)arg4 priority:(int)arg5 forImageLoadingQueue:(id)arg6;
- (id)_cachedImageFromSource:(id)arg1 asset:(id)arg2;
- (id)_imageLoader;
- (void)dealloc;
- (id)init;
- (void)resumeLoading;
- (void)pauseLoading;
- (void)cancelLoadFromSource:(id)arg1 asset:(id)arg2 imageLoadingQueue:(id)arg3;
- (void)removeImageLoadingQueue:(id)arg1;
- (id)newCachedImageWithImageContents:(void *)arg1 orientation:(long long)arg2 metadata:(id)arg3 fromSource:(id)arg4 asset:(id)arg5;
- (id)cachedImageFromSource:(id)arg1 asset:(id)arg2 loadIfNeeded:(_Bool)arg3 synchronously:(_Bool)arg4 priority:(int)arg5 forImageLoadingQueue:(id)arg6 completion:(CDUnknownBlockType)arg7;

@end

