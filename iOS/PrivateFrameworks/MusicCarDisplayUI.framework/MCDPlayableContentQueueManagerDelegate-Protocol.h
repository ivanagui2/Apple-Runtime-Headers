//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MCDPlayableContentPlaybackManager, UIViewController;

@protocol MCDPlayableContentQueueManagerDelegate <NSObject>
- (void)contentManagerCompletedAllPlayback:(MCDPlayableContentPlaybackManager *)arg1;
- (void)contentManager:(MCDPlayableContentPlaybackManager *)arg1 presentViewController:(UIViewController *)arg2;
- (void)contentManagerReloadData:(MCDPlayableContentPlaybackManager *)arg1;
- (void)contentManagerInitiatedPlaybackFromPlaybackQueue:(MCDPlayableContentPlaybackManager *)arg1;
- (void)contentManager:(MCDPlayableContentPlaybackManager *)arg1 displayItemIndex:(long long)arg2 totalItemCount:(long long)arg3;
- (void)contentManager:(MCDPlayableContentPlaybackManager *)arg1 shouldShowPlaybackQueue:(_Bool)arg2;
@end
