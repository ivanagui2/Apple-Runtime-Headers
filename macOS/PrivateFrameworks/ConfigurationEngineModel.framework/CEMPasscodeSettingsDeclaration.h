//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import "CEMRegisteredTypeProtocol.h"

@class NSNumber, NSString;

@interface CEMPasscodeSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
}

+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredType;
+ (id)registeredClass;
- (id)serializePayload:(id)arg1 withAssetProviders:(id)arg2;
- (BOOL)validStatusDictionary:(id)arg1 error:(id *)arg2;
- (BOOL)validPayloadDictionary:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;
@property(readonly, nonatomic) NSNumber *payloadAllowAutoUnlock;
@property(readonly, nonatomic) NSNumber *payloadAllowPasscodeModification;
@property(readonly, nonatomic) NSNumber *payloadAllowFingerprintModification;
@property(readonly, nonatomic) NSNumber *payloadAllowFingerprintForUnlock;
@property(readonly, nonatomic) NSNumber *payloadPasscodeLockGracePeriod;
@property(readonly, nonatomic) NSNumber *payloadManualFetchingWhenRoaming;
@property(readonly, nonatomic) NSNumber *payloadChangeAtNextAuth;
@property(readonly, nonatomic) NSNumber *payloadMinutesUntilFailedLoginReset;
@property(readonly, nonatomic) NSNumber *payloadMaxGracePeriod;
@property(readonly, nonatomic) NSNumber *payloadPinHistory;
@property(readonly, nonatomic) NSNumber *payloadRequireAlphanumeric;
@property(readonly, nonatomic) NSNumber *payloadMinLength;
@property(readonly, nonatomic) NSNumber *payloadMinComplexChars;
@property(readonly, nonatomic) NSNumber *payloadMaxPINAgeInDays;
@property(readonly, nonatomic) NSNumber *payloadMaxInactivity;
@property(readonly, nonatomic) NSNumber *payloadMaxFailedAttempts;
@property(readonly, nonatomic) NSNumber *payloadForcePIN;
@property(readonly, nonatomic) NSNumber *payloadAllowSimple;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
