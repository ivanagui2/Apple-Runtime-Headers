//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPAVRoutingController, MPVolumeController, NACEventThrottler;

__attribute__((visibility("hidden")))
@interface _NACVolumeObserverRecord : NSObject
{
    _Bool _volumeControlAvailable;
    _Bool _volumeWarningEnabled;
    _Bool _muted;
    float _EUVolumeLimit;
    NACEventThrottler *_throttler;
    MPVolumeController *_volumeController;
    MPAVRoutingController *_routingController;
}

@property(retain, nonatomic) MPAVRoutingController *routingController; // @synthesize routingController=_routingController;
@property(retain, nonatomic) MPVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(retain, nonatomic) NACEventThrottler *throttler; // @synthesize throttler=_throttler;
@property(nonatomic) float EUVolumeLimit; // @synthesize EUVolumeLimit=_EUVolumeLimit;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic, getter=isVolumeWarningEnabled) _Bool volumeWarningEnabled; // @synthesize volumeWarningEnabled=_volumeWarningEnabled;
@property(nonatomic, getter=isVolumeControlAvailable) _Bool volumeControlAvailable; // @synthesize volumeControlAvailable=_volumeControlAvailable;
- (void).cxx_destruct;

@end
