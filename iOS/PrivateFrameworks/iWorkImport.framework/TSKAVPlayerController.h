//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSKLayerMediaPlayerController.h"

@class AVPlayer, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface TSKAVPlayerController : NSObject <TSKLayerMediaPlayerController>
{
    AVPlayer *mPlayer;
    id <TSKMediaPlayerControllerDelegate> mDelegate;
    _Bool mStreaming;
    long long mRepeatMode;
    float mVolume;
    float mRateBeforeScrubbing;
    unsigned long long mScrubbingCount;
    _Bool mCanPlay;
    _Bool mPlaying;
    _Bool mFastReversing;
    _Bool mFastForwarding;
    _Bool mIsObservingStatus;
    NSMutableSet *mObservationTokens;
}

+ (id)keyPathsForValuesAffectingCanFastForward;
+ (id)keyPathsForValuesAffectingCanFastReverse;
+ (id)keyPathsForValuesAffectingRate;
+ (_Bool)automaticallyNotifiesObserversOfRate;
+ (id)keyPathsForValuesAffectingEndTime;
+ (_Bool)automaticallyNotifiesObserversOfEndTime;
+ (id)keyPathsForValuesAffectingStartTime;
+ (_Bool)automaticallyNotifiesObserversOfStartTime;
+ (id)keyPathsForValuesAffectingAbsoluteDuration;
+ (id)keyPathsForValuesAffectingDuration;
- (_Bool)isFastForwarding;
- (_Bool)isFastReversing;
- (_Bool)isPlaying;
- (_Bool)canPlay;
- (float)volume;
- (long long)repeatMode;
@property(readonly, nonatomic) AVPlayer *player; // @synthesize player=mPlayer;
- (id)delegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_playerItemDidJumpTime:(id)arg1;
- (void)p_playbackDidFailWithError:(id)arg1;
- (void)p_playerItemDidPlayToEndTime:(id)arg1;
- (void)playerItemDidPlayToEndTimeAtRate:(float)arg1;
- (void)removeObservationToken:(id)arg1;
- (void)addObservationToken:(id)arg1;
- (void)removePeriodicTimeObserver:(id)arg1;
- (id)addPeriodicTimeObserverForInterval:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)setFastForwarding:(_Bool)arg1;
- (_Bool)p_canFastForwardAtCurrentTime;
- (_Bool)canFastForward;
- (void)setFastReversing:(_Bool)arg1;
- (_Bool)p_canFastReverseAtCurrentTime;
- (_Bool)canFastReverse;
- (void)stopSynchronously;
- (void)setRate:(float)arg1;
- (float)rate;
- (void)setPlaying:(_Bool)arg1;
- (void)seekToEnd;
- (void)seekToBeginning;
- (void)seekBackwardByOneFrame;
- (void)seekForwardByOneFrame;
- (void)endScrubbing;
- (void)cancelPendingSeeks;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2;
- (void)beginScrubbing;
- (_Bool)isScrubbing;
- (double)remainingTime;
- (double)currentTime;
- (double)absoluteCurrentTime;
- (void)p_applyVolumeToPlayerItem;
- (void)setVolume:(float)arg1;
- (void)setRepeatMode:(long long)arg1;
- (void)setEndTime:(double)arg1;
- (double)endTime;
- (void)setStartTime:(double)arg1;
- (double)startTime;
- (double)absoluteDuration;
- (double)duration;
- (id)newLayer;
- (void)teardown;
- (void)dealloc;
- (id)init;
- (id)initWithPlayer:(id)arg1 delegate:(id)arg2 streaming:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
