//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSServiceDelegate.h"

@class IDSService, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface NACIDSClient : NSObject <IDSServiceDelegate>
{
    IDSService *_idsService;
    NSObject<OS_dispatch_queue> *_idsDispatchQueue;
    NSObject<OS_dispatch_queue> *_idsOutgoingQueue;
    id <NACIDSClientDelegate> _delegate;
}

@property(nonatomic) __weak id <NACIDSClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)_sendMessage:(id)arg1 type:(int)arg2 timeout:(double)arg3 queueOne:(id)arg4 priority:(int)arg5;
- (void)pickAudioRouteWithIdentifier:(id)arg1 category:(id)arg2;
- (void)endObservingAudioRoutesForCategory:(id)arg1;
- (void)beginObservingAudioRoutesForCategory:(id)arg1;
- (void)_handleProminentHapticStateDidChange:(id)arg1;
- (void)_handleSystemMutedStatedDidChange:(id)arg1;
- (void)_handleRouteObservationCancelled:(id)arg1;
- (void)_handleVolumeObservationCancelled:(id)arg1;
- (void)_handleAudioRoutesDidChange:(id)arg1;
- (void)_handleVolumeWarningDidChange:(id)arg1;
- (void)_handleEUVolumeLimitDidChange:(id)arg1;
- (void)_handleHapticIntensityDidChange:(id)arg1;
- (void)_handleMutedStateDidChange:(id)arg1;
- (void)_handleVolumeControlAvailabilityDidChange:(id)arg1;
- (void)_handleVolumeValueDidChange:(id)arg1;
- (void)setSystemMuted:(_Bool)arg1;
- (void)setProminentHapticEnabled:(_Bool)arg1;
- (void)setHapticIntensity:(float)arg1;
- (void)setMuted:(_Bool)arg1 target:(id)arg2;
- (void)setVolumeValue:(float)arg1 target:(id)arg2;
- (void)endObservingVolumeForTarget:(id)arg1;
- (void)beginObservingVolumeForTarget:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
