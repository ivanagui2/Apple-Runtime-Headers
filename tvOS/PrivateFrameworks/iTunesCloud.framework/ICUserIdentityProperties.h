//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSMutableCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class ICDelegateToken, NSDate, NSNumber, NSString;

@interface ICUserIdentityProperties : NSObject <NSMutableCopying, NSCopying, NSSecureCoding>
{
    NSString *_alternateDSID;
    NSString *_carrierBundleDeviceIdentifier;
    _Bool _cloudBackupEnabled;
    _Bool _delegated;
    ICDelegateToken *_delegateToken;
    NSNumber *_dsid;
    NSString *_firstName;
    NSString *_iCloudPersonID;
    NSString *_lastName;
    _Bool _managedAppleID;
    _Bool _sandboxed;
    NSString *_storefrontIdentifier;
    _Bool _subscriptionStatusEnabled;
    NSString *_username;
    NSDate *_ageVerificationExpirationDate;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic, setter=setICloudPersonID:) NSString *iCloudPersonID; // @synthesize iCloudPersonID=_iCloudPersonID;
@property(readonly, nonatomic, getter=isDelegated) _Bool delegated; // @synthesize delegated=_delegated;
@property(nonatomic, getter=isCloudBackupEnabled) _Bool cloudBackupEnabled; // @synthesize cloudBackupEnabled=_cloudBackupEnabled;
@property(readonly, nonatomic, getter=isSubscriptionStatusEnabled) _Bool subscriptionStatusEnabled; // @synthesize subscriptionStatusEnabled=_subscriptionStatusEnabled;
@property(readonly, nonatomic, getter=isSandboxed) _Bool sandboxed; // @synthesize sandboxed=_sandboxed;
@property(readonly, nonatomic, getter=isManagedAppleID) _Bool managedAppleID; // @synthesize managedAppleID=_managedAppleID;
@property(readonly, copy, nonatomic) NSNumber *DSID; // @synthesize DSID=_dsid;
@property(readonly, copy, nonatomic) ICDelegateToken *delegateToken; // @synthesize delegateToken=_delegateToken;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSDate *ageVerificationExpirationDate;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, copy, nonatomic) NSString *storefrontIdentifier;
@property(readonly, copy, nonatomic) NSString *lastName;
@property(readonly, copy, nonatomic) NSString *firstName;
@property(readonly, copy, nonatomic) NSString *carrierBundleDeviceIdentifier;
@property(readonly, copy, nonatomic) NSString *alternateDSID;

@end

