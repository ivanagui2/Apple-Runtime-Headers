//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString, NSURL, PKPaymentSetupProductImageAssetURLs, PKPaymentSetupProductImageAssets;

@interface PKPaymentSetupProduct : NSObject <NSCopying>
{
    NSString *_displayName;
    unsigned int _type;
    NSSet *_regions;
    NSString *_productIdentifier;
    NSString *_partnerIdentifier;
    NSArray *_requiredFields;
    NSArray *_supportedProtocols;
    NSURL *_termsURL;
    int _supportedProvisioningMethods;
    NSDictionary *_readerModeMetadata;
    unsigned int _flags;
    int _hsa2Requirement;
    PKPaymentSetupProductImageAssetURLs *_imageAssetURLs;
    PKPaymentSetupProductImageAssets *_imageAssets;
    NSArray *_associatedStoreIdentifiers;
    NSURL *_appLaunchURL;
    NSArray *_paymentOptions;
    NSDictionary *_rawDictionary;
    NSString *_identifier;
    NSDictionary *_minimumOSVersion;
    NSMutableDictionary *_requestedProvisioningMethods;
}

+ (id)partnerProductsFromArrayOfPartners:(id)arg1 andProducts:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *requestedProvisioningMethods; // @synthesize requestedProvisioningMethods=_requestedProvisioningMethods;
@property(retain, nonatomic) NSDictionary *minimumOSVersion; // @synthesize minimumOSVersion=_minimumOSVersion;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSDictionary *rawDictionary; // @synthesize rawDictionary=_rawDictionary;
@property(readonly, copy, nonatomic) NSArray *paymentOptions; // @synthesize paymentOptions=_paymentOptions;
@property(copy, nonatomic) NSURL *appLaunchURL; // @synthesize appLaunchURL=_appLaunchURL;
@property(copy, nonatomic) NSArray *associatedStoreIdentifiers; // @synthesize associatedStoreIdentifiers=_associatedStoreIdentifiers;
@property(readonly, nonatomic) PKPaymentSetupProductImageAssets *imageAssets; // @synthesize imageAssets=_imageAssets;
@property(readonly, nonatomic) PKPaymentSetupProductImageAssetURLs *imageAssetURLs; // @synthesize imageAssetURLs=_imageAssetURLs;
@property(readonly, nonatomic) int hsa2Requirement; // @synthesize hsa2Requirement=_hsa2Requirement;
@property(readonly, nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(readonly, copy, nonatomic) NSDictionary *readerModeMetadata; // @synthesize readerModeMetadata=_readerModeMetadata;
@property(nonatomic) int supportedProvisioningMethods; // @synthesize supportedProvisioningMethods=_supportedProvisioningMethods;
@property(copy, nonatomic) NSURL *termsURL; // @synthesize termsURL=_termsURL;
@property(copy, nonatomic) NSArray *supportedProtocols; // @synthesize supportedProtocols=_supportedProtocols;
@property(copy, nonatomic) NSArray *requiredFields; // @synthesize requiredFields=_requiredFields;
@property(copy, nonatomic) NSString *partnerIdentifier; // @synthesize partnerIdentifier=_partnerIdentifier;
@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(copy, nonatomic) NSSet *regions; // @synthesize regions=_regions;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (_Bool)supportsOSVersion:(id)arg1 deviceClass:(id)arg2;
- (id)provisioningMethodTypes;
- (void)setProvisioningMethodMetadata:(id)arg1 forType:(id)arg2;
- (id)provisioningMethodMetadataForType:(id)arg1;
- (int)allSupportedProtocols;
@property(readonly, copy, nonatomic) NSString *partnerName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProductDictionary:(id)arg1;
- (id)_initWithDisplayName:(id)arg1 partnerDictionary:(id)arg2 productIdentifier:(id)arg3 paymentOptions:(id)arg4 termsURL:(id)arg5 provisioningMethods:(id)arg6 readerModeMetadata:(id)arg7 requiredFields:(id)arg8 imageAssets:(id)arg9 minimumOSVersion:(id)arg10 region:(id)arg11 hsa2Requirement:(id)arg12;

@end
