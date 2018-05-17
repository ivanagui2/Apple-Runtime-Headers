//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<TVPMediaItem>, TVPVideoPlayerViewController;

@protocol TVPVideoPlayerViewControllerDelegate <NSObject>

@optional
- (_Bool)videoPlayerViewController:(TVPVideoPlayerViewController *)arg1 shouldAllowVideoPlaybackWithoutVisualsForMediaItem:(NSObject<TVPMediaItem> *)arg2;
- (void)videoPlayerViewController:(TVPVideoPlayerViewController *)arg1 loadRelatedContentForMediaItem:(NSObject<TVPMediaItem> *)arg2 withCompletionHandler:(void (^)(TVPRelatedContent *))arg3;
@end
