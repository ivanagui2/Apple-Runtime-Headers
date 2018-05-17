//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlaybackCore/MPCMediaRemoteController.h>

@class MPCFuture;

@interface _MPCMediaRemoteNullController : MPCMediaRemoteController
{
    MPCFuture *_playQueueIdentifiersFuture;
    MPCFuture *_contentItemForIdentifierFuture;
    MPCFuture *_contentItemArtworkForIdentifierFuture;
}

+ (_Bool)_shouldRegisterForNotifications;
- (void).cxx_destruct;
- (void)updateOptimisticStateForCommand:(unsigned int)arg1 options:(id)arg2;
- (void)invalidateAllTokens;
- (id)contentItemArtworkForContentItemIdentifier:(id)arg1 artworkIdentifier:(id)arg2 size:(struct CGSize)arg3;
- (int)contentItemArtworkCacheStateForIdentifier:(id)arg1 size:(struct CGSize)arg2;
- (id)contentItemForIdentifier:(id)arg1;
- (int)contentItemCacheStateForIdentifier:(id)arg1;
- (id)playingIdentifier;
- (int)playingIdentifierCacheState;
- (id)playQueueIdentifiersForRequest:(void *)arg1;
- (id)playQueueIdentifiersForRange:(struct _MSVSignedRange)arg1;
- (int)playQueueIdentifiersCacheStateForRange:(struct _MSVSignedRange)arg1;
- (void)sendCommand:(unsigned int)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)supportedCommands;
- (int)supportedCommandsCacheState;
- (id)playbackState;
- (int)playbackStateCacheState;
- (id)_init;

@end
