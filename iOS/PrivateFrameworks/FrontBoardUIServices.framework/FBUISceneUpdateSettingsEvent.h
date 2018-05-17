//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FrontBoardUIServices/FBUISceneEvent.h>

@class FBSSceneSettings, FBSSceneSettingsDiff;

@interface FBUISceneUpdateSettingsEvent : FBUISceneEvent
{
    FBSSceneSettings *_settings;
    FBSSceneSettingsDiff *_diff;
}

@property(retain, nonatomic) FBSSceneSettingsDiff *settingsDiff; // @synthesize settingsDiff=_diff;
@property(copy, nonatomic) FBSSceneSettings *settings; // @synthesize settings=_settings;
- (void)dealloc;

@end
