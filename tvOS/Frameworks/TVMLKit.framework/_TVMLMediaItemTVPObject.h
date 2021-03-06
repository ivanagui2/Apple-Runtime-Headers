//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVMLKit/TVPMediaItem-Protocol.h>

@class NSMutableDictionary, NSString, NSURL, TVPSecureKeyDeliveryCoordinator, TVPSecureKeyLoader;

@interface _TVMLMediaItemTVPObject : NSObject <TVPMediaItem>
{
    NSMutableDictionary *_metadata;
    TVPSecureKeyDeliveryCoordinator *_keyDeliveryCoordinator;
    NSURL *_mediaItemURL;
    TVPSecureKeyLoader *_secureKeyLoader;
}

@property(retain, nonatomic) TVPSecureKeyLoader *secureKeyLoader; // @synthesize secureKeyLoader=_secureKeyLoader;
@property(retain, nonatomic) NSURL *mediaItemURL; // @synthesize mediaItemURL=_mediaItemURL;
- (void).cxx_destruct;
- (void)_postMetadataDidChangeNotificationWithMetadataProperties:(id)arg1;
- (void)_postMetadataWillChangeNotificationWithMetadataProperties:(id)arg1;
- (void)loadStreamingKeyForRequest:(id)arg1;
- (id)reportingDelegate;
- (void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(_Bool)arg4;
- (void)performMediaItemMetadataTransactionWithBlock:(CDUnknownBlockType)arg1;
- (void)removeMediaItemMetadataForProperty:(id)arg1;
- (void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2;
- (id)mediaItemMetadataForProperty:(id)arg1;
- (_Bool)hasTrait:(id)arg1;
- (_Bool)isEqualToMediaItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

