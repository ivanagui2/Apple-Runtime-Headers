//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFAccessorySettingItemProtocol-Protocol.h>

@class HFAccessorySettingsEntity, HMAccessorySetting, NSString;
@protocol HFHomeKitObject, HFMediaProfileContainer;

@interface HFAccessorySettingItem : HFItem <HFAccessorySettingItemProtocol>
{
    id <HFMediaProfileContainer> _mediaProfileContainer;
    HMAccessorySetting *_setting;
    HFAccessorySettingsEntity *_entity;
}

@property(retain, nonatomic) HFAccessorySettingsEntity *entity; // @synthesize entity=_entity;
@property(retain, nonatomic) HMAccessorySetting *setting; // @synthesize setting=_setting;
@property(retain, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
- (void).cxx_destruct;
- (void)_decorateHiddenOrDisabled:(id)arg1;
- (void)_decorateOutcomeWithResultKeys:(id)arg1;
- (void)_decorateOutcomeWithAccessorySettingResultKeys:(id)arg1;
- (void)_decorateOutcomeWithDependencies:(id)arg1;
- (_Bool)_validateKeyPathDependencies;
- (id)value;
- (id)updateValue:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) NSString *settingKeyPath;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaProfileContainer:(id)arg1 setting:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

