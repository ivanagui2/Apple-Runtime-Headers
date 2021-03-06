//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAVRoute.h>

@class NSArray;

@interface MPAVOutputDeviceRoute : MPAVRoute
{
    void *_logicalLeaderOutputDevice;
    NSArray *_outputDevices;
}

+ (long long)pickableRouteTypeForOutputDevice:(void *)arg1;
+ (id)localDeviceUID;
+ (void *)logicalLeaderFromOutputDevices:(id)arg1;
@property(readonly, nonatomic) void *logicalLeaderOutputDevice; // @synthesize logicalLeaderOutputDevice=_logicalLeaderOutputDevice;
@property(readonly, nonatomic) NSArray *outputDevices; // @synthesize outputDevices=_outputDevices;
- (void).cxx_destruct;
- (BOOL)_anyOutputDevicePassesTest:(CDUnknownBlockType)arg1;
- (BOOL)_anyOutputDevicePassesMRFunction:(CDUnknownFunctionPointerType)arg1;
- (BOOL)supportsGrouping;
- (BOOL)isStereoPair;
- (BOOL)requiresPassword;
- (BOOL)supportsWirelessDisplay;
- (long long)pickableRouteType;
- (long long)routeSubtype;
- (long long)routeType;
- (id)playingPairedDeviceName;
- (id)groupUID;
- (id)productIdentifier;
- (id)routeUID;
- (BOOL)isPickedOnPairedDevice;
- (BOOL)isVolumeControlAvailable;
@property(readonly, nonatomic, getter=isGroupLeader) BOOL groupLeader;
- (BOOL)isProxyGroupPlayer;
- (BOOL)isDeviceSpeakerRoute;
- (BOOL)isDeviceRoute;
- (BOOL)isHomePodRoute;
- (BOOL)isCarplayRoute;
- (BOOL)isAppleTVRoute;
- (BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (BOOL)canFetchMediaDataFromSender;
- (BOOL)canPlayEncryptedProgressiveDownloadAssets;
- (BOOL)canAccessRemoteAssets;
- (id)description;
- (id)routeName;
- (id)initWithOutputDevices:(id)arg1;

@end

