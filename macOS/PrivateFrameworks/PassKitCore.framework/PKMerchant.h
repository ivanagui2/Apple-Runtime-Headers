//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>
#import <PassKitCore/PKCloudStoreCoding-Protocol.h>

@class NSString, NSURL, PKMapsBrand, PKMapsMerchant;

@interface PKMerchant : NSObject <NSSecureCoding, PKCloudStoreCoding>
{
    BOOL _hasFallbackPOIType;
    int _fallbackPOIType;
    NSString *_displayName;
    NSURL *_originURL;
    long long _adamIdentifier;
    long long _industryCode;
    NSString *_industryCategory;
    NSString *_name;
    NSString *_rawName;
    NSString *_merchantIdentifier;
    NSString *_rawCANL;
    NSString *_rawCity;
    NSString *_rawState;
    NSString *_rawCountry;
    NSString *_city;
    NSString *_state;
    NSString *_zip;
    long long _cleanConfidenceLevel;
    long long _fallbackcategory;
    NSString *_fallbackDetailedCategory;
    PKMapsMerchant *_mapsMerchant;
    PKMapsBrand *_mapsBrand;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) PKMapsBrand *mapsBrand; // @synthesize mapsBrand=_mapsBrand;
@property(retain, nonatomic) PKMapsMerchant *mapsMerchant; // @synthesize mapsMerchant=_mapsMerchant;
@property(nonatomic) int fallbackPOIType; // @synthesize fallbackPOIType=_fallbackPOIType;
@property(nonatomic) BOOL hasFallbackPOIType; // @synthesize hasFallbackPOIType=_hasFallbackPOIType;
@property(copy, nonatomic) NSString *fallbackDetailedCategory; // @synthesize fallbackDetailedCategory=_fallbackDetailedCategory;
@property(nonatomic) long long fallbackcategory; // @synthesize fallbackcategory=_fallbackcategory;
@property(nonatomic) long long cleanConfidenceLevel; // @synthesize cleanConfidenceLevel=_cleanConfidenceLevel;
@property(copy, nonatomic) NSString *zip; // @synthesize zip=_zip;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *rawCountry; // @synthesize rawCountry=_rawCountry;
@property(copy, nonatomic) NSString *rawState; // @synthesize rawState=_rawState;
@property(copy, nonatomic) NSString *rawCity; // @synthesize rawCity=_rawCity;
@property(copy, nonatomic) NSString *rawCANL; // @synthesize rawCANL=_rawCANL;
@property(copy, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
@property(copy, nonatomic) NSString *rawName; // @synthesize rawName=_rawName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *industryCategory; // @synthesize industryCategory=_industryCategory;
@property(nonatomic) long long industryCode; // @synthesize industryCode=_industryCode;
@property(nonatomic) long long adamIdentifier; // @synthesize adamIdentifier=_adamIdentifier;
@property(copy, nonatomic) NSURL *originURL; // @synthesize originURL=_originURL;
- (void).cxx_destruct;
- (void)_regenerateDisplayName;
@property(readonly, nonatomic) int poiType;
@property(readonly, nonatomic) NSString *detailedCategory;
@property(readonly, nonatomic) long long category;
@property(readonly, nonatomic) BOOL isValid;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)jsonDictionaryRepresentation;
- (id)description;
- (BOOL)isEqualToMerchant:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)hasCloudArchivableDeviceData;
- (BOOL)isCloudArchivableDeviceDataEqual:(id)arg1;
- (unsigned long long)itemType;
- (id)recordTypesAndNames;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (id)initWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

