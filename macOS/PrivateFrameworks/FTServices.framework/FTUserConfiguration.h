//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface FTUserConfiguration : NSObject
{
}

+ (id)sharedInstance;
@property(readonly, nonatomic) BOOL _nonWifiFaceTimeEntitled;
@property(nonatomic) BOOL isDeviceInDualPhoneIdentityMode;
@property(readonly, copy, nonatomic) NSNumber *selectedPhoneNumberRegistrationSubscriptionNumber;
@property(copy, nonatomic) NSString *selectedPhoneNumberRegistrationSubscriptionLabel;
@property(nonatomic) BOOL allowAnyNetwork;
@property(nonatomic) BOOL cellularFaceTimeEnabled;
- (BOOL)nonBluetoothAllowedForBundleId:(id)arg1;
- (BOOL)wifiAllowedForBundleId:(id)arg1;
- (BOOL)cellularDataEnabledForBundleId:(id)arg1;
- (BOOL)_adequateInternalOrCarrierInstall;
- (void)dealloc;
- (id)init;

@end

