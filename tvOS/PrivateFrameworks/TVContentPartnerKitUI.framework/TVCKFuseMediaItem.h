//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVPBaseMediaItem.h"

@class SSVPlaybackLeaseAsset, SSVPlaybackLeaseResponse, TVCKDataItem, TVCKMutableBookmark;

@interface TVCKFuseMediaItem : TVPBaseMediaItem
{
    _Bool _isMusicVideo;
    _Bool _shouldBookmarkMusicVideo;
    long long _adamID;
    TVCKDataItem *_dataItem;
    SSVPlaybackLeaseResponse *_leaseResponse;
    unsigned long long _loadingContext;
    SSVPlaybackLeaseAsset *_currentLeaseAsset;
    TVCKMutableBookmark *_bookmark;
}

+ (double)_playedThresholdTimeForDuration:(double)arg1;
+ (id)_extractLeaseAssetFromLeaseResponse:(id)arg1;
+ (_Bool)isPendingStartLeaseSession;
+ (void)setPendingStartLeaseSession:(_Bool)arg1;
@property(retain, nonatomic) TVCKMutableBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(retain, nonatomic) SSVPlaybackLeaseAsset *currentLeaseAsset; // @synthesize currentLeaseAsset=_currentLeaseAsset;
@property(nonatomic) unsigned long long loadingContext; // @synthesize loadingContext=_loadingContext;
@property(retain, nonatomic) SSVPlaybackLeaseResponse *leaseResponse; // @synthesize leaseResponse=_leaseResponse;
@property(nonatomic) _Bool shouldBookmarkMusicVideo; // @synthesize shouldBookmarkMusicVideo=_shouldBookmarkMusicVideo;
@property(nonatomic) _Bool isMusicVideo; // @synthesize isMusicVideo=_isMusicVideo;
@property(retain, nonatomic) TVCKDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) long long adamID; // @synthesize adamID=_adamID;
- (void).cxx_destruct;
- (id)_bookmarkNetTime;
- (id)_propertyNameMappings;
- (void)cleanUpMediaItem;
- (void)prepareForLoadingWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)hasTrait:(id)arg1;
- (_Bool)isEqualToMediaItem:(id)arg1;
- (void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(_Bool)arg4;
- (id)mediaItemMetadataForProperty:(id)arg1;
- (id)mediaItemURL;
- (id)initWithAdamID:(long long)arg1 isMusicVideo:(_Bool)arg2;
- (id)initWithAdamID:(long long)arg1;

@end
