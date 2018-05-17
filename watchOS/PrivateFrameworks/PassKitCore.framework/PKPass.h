//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKObject.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSSet, NSString, NSURL, PKBarcode, PKImage, PKLiveRenderedShaderSet, PKNFCPayload, PKPassDisplayProfile, PKPassLiveRenderedImageSet, PKPassPersonalization, PKPaymentPass, UIImage;

@interface PKPass : PKObject <NSCopying, NSSecureCoding>
{
    PKLiveRenderedShaderSet *_liveRenderedShaderSet;
    _Bool _remotePass;
    _Bool _voided;
    _Bool _hasStoredValue;
    _Bool _liveRenderedBackground;
    _Bool _revoked;
    unsigned int _passType;
    NSString *_serialNumber;
    NSString *_passTypeIdentifier;
    NSString *_organizationName;
    NSDate *_relevantDate;
    NSDictionary *_userInfo;
    NSString *_deviceName;
    NSString *_passLibraryMachServiceName;
    NSNumber *_sequenceCounter;
    NSURL *_passURL;
    NSString *_teamID;
    NSDate *_expirationDate;
    NSString *_groupingID;
    NSSet *_embeddedLocations;
    NSSet *_embeddedBeacons;
    NSURL *_webLocationsURL;
    NSURL *_localLocationsURL;
    int _sharingMethod;
    NSURL *_sharingURL;
    NSString *_sharingText;
    NSSet *_associatedPassTypeIdentifiers;
    PKNFCPayload *_nfcPayload;
    PKImage *_partialFrontFaceImagePlaceholder;
    NSDate *_ingestedDate;
    NSDate *_modifiedDate;
}

+ (_Bool)supportsSecureCoding;
+ (unsigned int)defaultSettings;
+ (_Bool)isValidObjectWithFileURL:(id)arg1 warnings:(id *)arg2 orError:(id *)arg3;
+ (Class)classForPassType:(unsigned int)arg1;
@property(nonatomic, getter=isRevoked) _Bool revoked; // @synthesize revoked=_revoked;
@property(retain, nonatomic) NSDate *modifiedDate; // @synthesize modifiedDate=_modifiedDate;
@property(retain, nonatomic) NSDate *ingestedDate; // @synthesize ingestedDate=_ingestedDate;
@property(nonatomic) _Bool liveRenderedBackground; // @synthesize liveRenderedBackground=_liveRenderedBackground;
@property(readonly, nonatomic) PKImage *partialFrontFaceImagePlaceholder; // @synthesize partialFrontFaceImagePlaceholder=_partialFrontFaceImagePlaceholder;
@property(nonatomic) _Bool hasStoredValue; // @synthesize hasStoredValue=_hasStoredValue;
@property(copy, nonatomic, setter=setNFCPayload:) PKNFCPayload *nfcPayload; // @synthesize nfcPayload=_nfcPayload;
@property(copy, nonatomic) NSSet *associatedPassTypeIdentifiers; // @synthesize associatedPassTypeIdentifiers=_associatedPassTypeIdentifiers;
@property(copy, nonatomic) NSString *sharingText; // @synthesize sharingText=_sharingText;
@property(copy, nonatomic) NSURL *sharingURL; // @synthesize sharingURL=_sharingURL;
@property(nonatomic) int sharingMethod; // @synthesize sharingMethod=_sharingMethod;
@property(copy, nonatomic) NSURL *localLocationsURL; // @synthesize localLocationsURL=_localLocationsURL;
@property(copy, nonatomic) NSURL *webLocationsURL; // @synthesize webLocationsURL=_webLocationsURL;
@property(copy, nonatomic) NSSet *embeddedBeacons; // @synthesize embeddedBeacons=_embeddedBeacons;
@property(copy, nonatomic) NSSet *embeddedLocations; // @synthesize embeddedLocations=_embeddedLocations;
@property(copy, nonatomic) NSString *groupingID; // @synthesize groupingID=_groupingID;
@property(nonatomic, getter=isVoided) _Bool voided; // @synthesize voided=_voided;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(copy, nonatomic) NSURL *passURL; // @synthesize passURL=_passURL;
@property(copy, nonatomic) NSNumber *sequenceCounter; // @synthesize sequenceCounter=_sequenceCounter;
@property(copy, nonatomic) NSString *passLibraryMachServiceName; // @synthesize passLibraryMachServiceName=_passLibraryMachServiceName;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(nonatomic, getter=isRemotePass) _Bool remotePass; // @synthesize remotePass=_remotePass;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSDate *relevantDate; // @synthesize relevantDate=_relevantDate;
@property(copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(copy, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(nonatomic) unsigned int passType; // @synthesize passType=_passType;
- (void).cxx_destruct;
- (id)_changeMessageForFieldKey:(id)arg1;
- (id)_localizationKeyForMultipleDiff;
- (_Bool)availableForAutomaticPresentationUsingBeaconContext;
- (_Bool)availableForAutomaticPresentationUsingVASContext;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToPassIncludingMetadata:(id)arg1;
@property(readonly, nonatomic) struct CGRect logoRect;
@property(readonly, nonatomic) PKLiveRenderedShaderSet *liveRenderedShaderSet;
@property(readonly, nonatomic) PKPassLiveRenderedImageSet *liveRenderedImageSet;
- (id)thumbnailImage;
- (id)stripImage;
- (id)backgroundImage;
- (id)logoImage;
@property(readonly, nonatomic) PKImage *personalizationLogoImage;
@property(readonly, nonatomic) PKImage *cardHolderPicture;
@property(readonly, nonatomic) struct CGRect stripRect;
@property(readonly, nonatomic) struct CGRect thumbnailRect;
@property(readonly, nonatomic) PKImage *partialFrontFaceImage;
@property(readonly, nonatomic) PKImage *frontFaceImage;
@property(readonly, nonatomic) PKImage *notificationIconImage;
@property(readonly, nonatomic) PKImage *iconImage;
@property(readonly, nonatomic) _Bool isPersonalizable;
@property(readonly, nonatomic) PKPassPersonalization *personalization;
@property(readonly, nonatomic) NSURL *appLaunchURL;
@property(readonly, nonatomic) NSArray *storeIdentifiers;
@property(readonly, nonatomic) NSArray *backFieldBuckets;
@property(readonly, nonatomic) NSArray *frontFieldBuckets;
@property(readonly, nonatomic) int transitType;
@property(readonly, copy, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) NSString *logoText;
@property(readonly, nonatomic) PKImage *footerImage;
@property(readonly, nonatomic) PKBarcode *barcode;
@property(readonly) NSString *notificationCenterTitle;
- (id)diff:(id)arg1;
- (id)localizedDescriptionForDiff:(id)arg1;
- (id)fieldForKey:(id)arg1;
- (id)localizedValueForFieldKey:(id)arg1;
- (_Bool)supportsSharing;
- (_Bool)isExpired;
- (_Bool)isUpdatable;
- (_Bool)isRelevantDateOld;
- (_Bool)hasValidNFCPayload;
- (_Bool)hasLocationRelevancyInfo;
- (_Bool)hasTimeOrLocationRelevancyInfo;
@property(readonly, nonatomic) PKPaymentPass *paymentPass;
@property(readonly, nonatomic) NSString *pluralLocalizedName;
@property(readonly, nonatomic) NSString *lowercaseLocalizedName;
@property(readonly, copy, nonatomic) NSString *localizedName;
@property(readonly, nonatomic) int style;
- (void)downloadRemoteAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (id)initWithData:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(copy, nonatomic) NSString *authenticationToken; // @dynamic authenticationToken;
@property(copy, nonatomic) PKPassDisplayProfile *displayProfile; // @dynamic displayProfile;
@property(readonly, copy, nonatomic) UIImage *icon; // @dynamic icon;
@property(readonly, nonatomic) NSString *uniqueID; // @dynamic uniqueID;
@property(copy, nonatomic) NSURL *webServiceURL; // @dynamic webServiceURL;

@end
