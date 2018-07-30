//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSDisplayConfigurationRequest, FBSDisplayMode, NSArray, NSString;

@protocol UIApplicationSceneClientSettings <NSObject>
@property(readonly, nonatomic) _Bool disablesMirroring;
@property(readonly, nonatomic) double brightnessLevel;
@property(readonly, nonatomic) NSArray *audioCategoriesDisablingVolumeHUD;
@property(readonly, nonatomic) unsigned long long visibleMiniAlertCount;
@property(readonly, nonatomic) _Bool wantsExclusiveForeground;
@property(readonly, nonatomic) _Bool homeIndicatorAutoHidden;
@property(readonly, nonatomic) unsigned long long screenEdgesDeferringSystemGestures;
@property(readonly, nonatomic, getter=isReachabilitySupported) _Bool reachabilitySupported;
@property(readonly, copy, nonatomic) FBSDisplayConfigurationRequest *displayConfigurationRequest;
@property(readonly, copy, nonatomic) FBSDisplayMode *requestedDisplayMode;
@property(readonly, nonatomic) long long whitePointAdaptivityStyle;
@property(readonly, nonatomic) _Bool idleModeVisualEffectsEnabled;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, nonatomic) struct UIEdgeInsets primaryWindowOverlayInsets;
@property(readonly, nonatomic) long long notificationCenterRevealMode;
@property(readonly, nonatomic) long long controlCenterRevealMode;
@property(readonly, nonatomic) double controlCenterAmbiguousActivationMargin;
@property(readonly, nonatomic) unsigned long long proximityDetectionModes;
@property(readonly, nonatomic) _Bool idleTimerDisabled;
@property(readonly, nonatomic) unsigned long long supportedInterfaceOrientations;
@property(readonly, nonatomic) long long interfaceOrientation;
@property(readonly, nonatomic) _Bool interfaceOrientationChangesDisabled;
@property(readonly, nonatomic) _Bool deviceOrientationEventsEnabled;
@property(readonly, nonatomic) long long compatibilityMode;
@property(readonly, nonatomic) double defaultPNGExpirationTime;
@property(readonly, copy, nonatomic) NSString *defaultPNGName;
@property(readonly, nonatomic) long long userInterfaceStyle;
@property(readonly, nonatomic) _Bool defaultStatusBarHidden;
@property(readonly, nonatomic) long long defaultStatusBarStyle;
@property(readonly, nonatomic) unsigned int statusBarContextID;
@property(readonly, nonatomic, getter=isStatusBarForegroundTransparent) _Bool statusBarForegroundTransparent;
@property(readonly, nonatomic) _Bool statusBarHidden;
@property(readonly, nonatomic) long long statusBarStyle;
@end
