//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, AVWeakReference, NSDictionary, NSString;

@interface AVPlayerItemTrackInternal : NSObject
{
    AVWeakReference *weakReferenceToPlayerItem;
    struct OpaqueFigPlaybackItem *figPlaybackItem;
    BOOL figPlaybackItemIsReadyForInspection;
    AVAsset *asset;
    int trackID;
    NSString *videoFieldMode;
    NSDictionary *loudnessInfo;
    NSDictionary *videoEnhancementFilterOptions;
    BOOL enabled;
    BOOL enabledWasSet;
    BOOL disableColorMatching;
    BOOL disableColorMatchingWasSet;
    long long activeHapticChannelIndex;
    BOOL activeHapticChannelIndexWasSet;
    float hapticVolume;
    BOOL hapticVolumeWasSet;
}

@end
