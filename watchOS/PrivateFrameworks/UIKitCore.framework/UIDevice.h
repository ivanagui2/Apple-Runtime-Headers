//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSUUID;

@interface UIDevice : NSObject
{
    int _numDeviceOrientationObservers;
    float _batteryLevel;
    struct {
        unsigned int batteryMonitoringEnabled:1;
        unsigned int proximityMonitoringEnabled:1;
        unsigned int expectsFaceContactInLandscape:1;
        unsigned int orientation:3;
        unsigned int batteryState:2;
        unsigned int proximityState:1;
        unsigned int hasTouchPadOverride:1;
        unsigned int hasTouchPad:1;
    } _deviceFlags;
}

+ (id)currentDevice;
+ (_Bool)_isWatchCompanion;
+ (_Bool)_isWatch;
+ (int)currentDeviceOrientationAllowingAmbiguous:(_Bool)arg1;
+ (id)modelSpecificLocalizedStringKeyForKey:(id)arg1;
+ (_Bool)_hasHomeButton;
+ (_Bool)_isLowEnd;
- (void)_playInputDeleteSound;
- (void)_playInputSelectSound;
- (void)_playSystemSound:(unsigned long)arg1;
- (void)_unregisterForSystemSounds:(id)arg1;
- (void)_registerForSystemSounds:(id)arg1;
- (_Bool)_isSystemSoundEnabled;
- (void)_updateSystemSoundActiveStatus:(id)arg1;
- (float)_softwareDimmingAlpha;
@property(nonatomic, setter=_setBacklightLevel:) float _backlightLevel;
- (void)playInputClick;
@property(readonly, nonatomic) int userInterfaceIdiom;
@property(readonly, nonatomic, getter=isMultitaskingSupported) _Bool multitaskingSupported;
@property(readonly, nonatomic) _Bool proximityState;
- (void)_setExpectsFaceContactInLandscape:(_Bool)arg1;
@property(nonatomic, getter=isProximityMonitoringEnabled) _Bool proximityMonitoringEnabled;
@property(readonly, nonatomic) float batteryLevel;
@property(readonly, nonatomic) int batteryState;
@property(nonatomic, getter=isBatteryMonitoringEnabled) _Bool batteryMonitoringEnabled;
@property(readonly, nonatomic, getter=isGeneratingDeviceOrientationNotifications) _Bool generatesDeviceOrientationNotifications;
- (void)endGeneratingDeviceOrientationNotifications;
- (void)beginGeneratingDeviceOrientationNotifications;
@property(readonly, nonatomic) int orientation;
- (void)setOrientation:(int)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) NSUUID *identifierForVendor;
- (id)uniqueIdentifier;
@property(readonly, retain, nonatomic) NSString *buildVersion;
@property(readonly, nonatomic) NSString *systemVersion;
@property(readonly, nonatomic) NSString *systemName;
@property(readonly, nonatomic) NSString *localizedModel;
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) NSString *name;
- (id)_deviceInfoForKey:(struct __CFString *)arg1;
- (void)_setActiveUserInterfaceIdiom:(int)arg1;
- (void)_enableDeviceOrientationEvents:(_Bool)arg1;
- (_Bool)_supportsDeepColor;
- (_Bool)_supportsForceTouch;
- (_Bool)_hasGraphicsQualityOverride;
- (void)_clearGraphicsQualityOverride;
- (void)_setGraphicsQualityOverride:(int)arg1;
- (int)_graphicsQuality;
- (void)_setHasTouchPad:(_Bool)arg1;
- (_Bool)_hasTouchPad;
- (void)_setBatteryLevel:(float)arg1;
- (void)_setBatteryState:(int)arg1;
- (void)_setProximityState:(_Bool)arg1;
@property(readonly, nonatomic) _Bool _supportsPencil;
- (int)_nativeScreenGamut;
- (int)_predictionGraphicsQuality;
- (int)_keyboardGraphicsQuality;
- (id)_tapticEngine;

@end
