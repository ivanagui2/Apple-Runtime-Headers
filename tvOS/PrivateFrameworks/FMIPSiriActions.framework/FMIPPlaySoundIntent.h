//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "INIntent.h"

#import "FMIPIdentifiable.h"

@class INObject;

@interface FMIPPlaySoundIntent : INIntent <FMIPIdentifiable>
{
}

+ (long long)playSoundDeviceClassForDeviceType:(long long)arg1;
+ (id)identityTag;
+ (id)playSoundIntentWithDeviceId:(id)arg1 deviceType:(long long)arg2 deviceDisplayName:(id)arg3;
- (id)rootAggregateKey;

// Remaining properties
@property(copy, nonatomic) INObject *deviceId; // @dynamic deviceId;
@property(nonatomic) long long playSoundDeviceClass; // @dynamic playSoundDeviceClass;

@end
