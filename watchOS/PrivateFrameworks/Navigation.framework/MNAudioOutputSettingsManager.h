//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MNAudioOutputSetting, NSArray, NSHashTable;
@protocol OS_dispatch_queue;

@interface MNAudioOutputSettingsManager : NSObject
{
    NSHashTable *_observers;
    unsigned int _routeSelection;
    NSArray *_audioSettings;
    NSArray *_pickableRoutes;
    MNAudioOutputSetting *_currentSetting;
    MNAudioOutputSetting *_currentSettingForSystem;
    _Bool _isCurrentSettingCached;
    NSObject<OS_dispatch_queue> *_pickableRoutesQueue;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSArray *audioSettings; // @synthesize audioSettings=_audioSettings;
@property(readonly, nonatomic) unsigned int routeSelection; // @synthesize routeSelection=_routeSelection;
- (void).cxx_destruct;
- (void)_pickableRoutesChanged;
- (void)updateRouteSelectionObservers;
- (void)updatedCurrentSettingForVoicePromptObservers;
- (void)updateCurrentSettingObservers;
- (void)updateSettingsObservers;
- (void)updatePickableRoutes;
- (void)updatePickableRoutesWithHandler:(CDUnknownBlockType)arg1;
- (void)reloadSettings;
- (_Bool)_pickCurrentSetting;
- (void)setHFPPreference:(_Bool)arg1 forSetting:(id)arg2;
@property(retain, nonatomic) MNAudioOutputSetting *currentSetting;
@property(readonly, nonatomic) MNAudioOutputSetting *currentSettingForVoicePrompt;
- (void)updateRouteSelection;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_mediaServerConnectionDied;
- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (void)dealloc;
- (id)init;

@end

