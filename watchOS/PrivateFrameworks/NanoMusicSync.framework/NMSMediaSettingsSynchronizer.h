//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUserDefaults;

@interface NMSMediaSettingsSynchronizer : NSObject
{
    _Bool _isObserving;
    NSUserDefaults *_mediaPlaybackCoreDefaults;
    NSUserDefaults *_mobileIPodDefaults;
    NSUserDefaults *_nanoMusicSyncDefaults;
}

+ (id)sharedSynchronizer;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)endObservingUpdates;
- (void)_reconcileGreenTeaSettingsIfNecessary;
- (void)_createDefaultGreenTeaSettingsIfNecessary;
- (void)beginObservingUpdates;
- (void)dealloc;

@end
