//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIMutableApplicationSceneSettings.h>

#import <PepperUICore/PUICApplicationSceneSettings-Protocol.h>

@class NSString;

@interface PUICMutableApplicationSceneSettings : UIMutableApplicationSceneSettings <PUICApplicationSceneSettings>
{
}

- (id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned int)arg3;
- (id)keyDescriptionForSetting:(unsigned int)arg1;
@property(retain, nonatomic) NSString *applicationBundleIdentifier;
@property(nonatomic) unsigned int puicStatusBarStyle;
@property(nonatomic) _Bool keepsContextsInBackground;
- (_Bool)isPUICSubclass;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

