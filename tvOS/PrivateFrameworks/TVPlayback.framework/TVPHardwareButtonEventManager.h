//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPVolumeControllerDelegate.h"
#import "PBSBulletinServiceDelegate.h"

@class MPAVRoute, MPVolumeController, NSObject<OS_dispatch_queue>, NSString, PBSBulletin, PBSPlayPauseButtonEventAssertion, PBSVolumeButtonEventAssertion;

@interface TVPHardwareButtonEventManager : NSObject <MPVolumeControllerDelegate, PBSBulletinServiceDelegate>
{
    _Bool _canAcceptHardwareButtonEvents;
    _Bool _wantsVolumeButtonEvents;
    _Bool _wantsExclusivePlayPauseButtonEvents;
    _Bool _volumeNotificationHandlersEnabled;
    float _lastVolumeLevel;
    NSString *_name;
    MPAVRoute *_route;
    MPVolumeController *_volumeController;
    PBSPlayPauseButtonEventAssertion *_playPauseButtonAssertion;
    PBSVolumeButtonEventAssertion *_volumeButtonAssertion;
    PBSBulletin *_volumeBulletin;
    NSObject<OS_dispatch_queue> *_volumeUpdateQueue;
}

@property(nonatomic) float lastVolumeLevel; // @synthesize lastVolumeLevel=_lastVolumeLevel;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *volumeUpdateQueue; // @synthesize volumeUpdateQueue=_volumeUpdateQueue;
@property(retain, nonatomic) PBSBulletin *volumeBulletin; // @synthesize volumeBulletin=_volumeBulletin;
@property(nonatomic) _Bool volumeNotificationHandlersEnabled; // @synthesize volumeNotificationHandlersEnabled=_volumeNotificationHandlersEnabled;
@property(readonly, nonatomic) PBSVolumeButtonEventAssertion *volumeButtonAssertion; // @synthesize volumeButtonAssertion=_volumeButtonAssertion;
@property(readonly, nonatomic) PBSPlayPauseButtonEventAssertion *playPauseButtonAssertion; // @synthesize playPauseButtonAssertion=_playPauseButtonAssertion;
@property(readonly, nonatomic) MPVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(nonatomic) _Bool wantsExclusivePlayPauseButtonEvents; // @synthesize wantsExclusivePlayPauseButtonEvents=_wantsExclusivePlayPauseButtonEvents;
@property(nonatomic) _Bool wantsVolumeButtonEvents; // @synthesize wantsVolumeButtonEvents=_wantsVolumeButtonEvents;
@property(nonatomic) _Bool canAcceptHardwareButtonEvents; // @synthesize canAcceptHardwareButtonEvents=_canAcceptHardwareButtonEvents;
@property(retain, nonatomic) MPAVRoute *route; // @synthesize route=_route;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)_presentBulletinWithVolume:(float)arg1;
- (void)_updateButtonOverrides;
- (_Bool)_canControlVolume;
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(_Bool)arg2;
- (void)volumeDownRequested:(id)arg1;
- (void)volumeUpRequested:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
