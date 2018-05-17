//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CLKVideoPlayerViewDelegate.h"

@class AVSynchronizedLayer, CALayer, CLKMediaAsset, CLKVideoPlayerView, NSString, UIImageView;

@interface CLKMediaAssetView : UIView <CLKVideoPlayerViewDelegate>
{
    CLKVideoPlayerView *_videoPlayerView;
    CLKMediaAsset *_mediaAsset;
    UIImageView *_posterView;
    UIView *_curtainView;
    unsigned int _isVideoLoaded:1;
    unsigned int _isPlaying:1;
    id _timeObserver;
    AVSynchronizedLayer *_syncLayer;
    CALayer *_posterLayer;
    long long _preparedForOperation;
    long long _transitionOperation;
    id <CLKMediaAssetViewDelegate> _delegate;
}

@property(nonatomic) __weak id <CLKMediaAssetViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CLKMediaAsset *mediaAsset; // @synthesize mediaAsset=_mediaAsset;
- (void).cxx_destruct;
- (void)fadeFromCurtainViewWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fadeToCurtainViewWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideCurtainView;
- (void)showCurtainView;
- (void)videoPlayerViewDidFinishPlayingVideoToEnd:(id)arg1;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1;
- (void)videoPlayerViewDidBeginPlaying:(id)arg1;
- (void)_reset;
- (void)_createVideoPlayerViewIfNeeded;
- (void)pauseVideoPlayerViewIfItExists;
- (void)_mediaServicesWereReset:(id)arg1;
- (void)_cancelPlayback;
- (void)resumeInterruptedPlayback;
- (void)interruptPlayback;
- (_Bool)isPlaying;
- (void)pauseWithOperation:(long long)arg1;
- (void)_completePlaybackWithOperation:(long long)arg1;
- (void)playWithOperation:(long long)arg1;
- (void)_transitionFromPosterToVideo;
- (void)prepareToPlayWithOperation:(long long)arg1;
- (CDStruct_1b6d18a9)_endTimeForOperation:(long long)arg1;
- (CDStruct_1b6d18a9)_startTimeForOperation:(long long)arg1;
- (void)changeMediaAsset:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
