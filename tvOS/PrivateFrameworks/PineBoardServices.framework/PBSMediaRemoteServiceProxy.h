//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBSMediaRemoteServiceInterface.h"

@class NSMapTable, NSString;

@interface PBSMediaRemoteServiceProxy : NSObject <PBSMediaRemoteServiceInterface>
{
    _Bool _volumeControlAvailable;
    int _volumeControlNotifyToken;
    id <_PBSMediaRemoteServiceInternalInterface> _remoteProxy;
    NSMapTable *_pendingCompletionHandlers;
}

+ (_Bool)_volumeControlAvailabilityStateForToken:(int)arg1;
@property(readonly, nonatomic) NSMapTable *pendingCompletionHandlers; // @synthesize pendingCompletionHandlers=_pendingCompletionHandlers;
@property(retain, nonatomic) id <_PBSMediaRemoteServiceInternalInterface> remoteProxy; // @synthesize remoteProxy=_remoteProxy;
@property(nonatomic) _Bool volumeControlAvailable; // @synthesize volumeControlAvailable=_volumeControlAvailable;
@property(nonatomic) int volumeControlNotifyToken; // @synthesize volumeControlNotifyToken=_volumeControlNotifyToken;
- (void).cxx_destruct;
- (CDUnknownBlockType)_removeCompletionHandlerForToken:(id)arg1;
- (void)_addCompletionHandler:(CDUnknownBlockType)arg1 forToken:(id)arg2;
- (void)noteUserPresenceDetected;
- (void)dismissPinDialogWithToken:(id)arg1;
- (id)showPinDialogWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopSiriWithContext:(id)arg1;
- (void)startSiriWithContext:(id)arg1;
- (void)activateSiriWithContext:(id)arg1;
- (void)_handleVolumeControlAvailableDidChange;
- (void)handleConnectionInterruption:(id)arg1;
- (void)dealloc;
- (id)initWithRemoteServiceProxy:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
