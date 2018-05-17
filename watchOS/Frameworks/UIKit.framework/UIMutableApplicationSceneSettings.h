//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSMutableSceneSettings.h"

#import "UIApplicationSceneSettings.h"

@class NSNumber, NSString;

@interface UIMutableApplicationSceneSettings : FBSMutableSceneSettings <UIApplicationSceneSettings>
{
}

- (Class)canvasClass;
- (_Bool)isUISubclass;
- (id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned int)arg3;
- (id)keyDescriptionForSetting:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) int deviceOrientation;
@property(nonatomic) _Bool statusBarDisabled;
@property(nonatomic) _Bool idleModeEnabled;
@property(nonatomic) _Bool canShowAlerts;
@property(nonatomic) _Bool deviceOrientationEventsEnabled;
@property(nonatomic) _Bool forcedStatusBarForegroundTransparent;
@property(retain, nonatomic) NSNumber *forcedStatusBarHidden;
@property(retain, nonatomic) NSNumber *forcedStatusBarStyle;
@property(nonatomic) int userInterfaceStyle;
@property(nonatomic) unsigned int deactivationReasons;
@property(nonatomic) int statusBarStyleOverridesToSuppress;
@property(nonatomic) _Bool underLock;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
