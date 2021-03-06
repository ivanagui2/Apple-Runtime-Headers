//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/HKClinicalBrandable-Protocol.h>
#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKClinicalBrand, NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface HKClinicalProvider : NSObject <NSCopying, NSSecureCoding, HKClinicalBrandable>
{
    _Bool _multiple;
    NSString *_externalID;
    NSString *_title;
    NSString *_subtitle;
    NSNumber *_latitude;
    NSNumber *_longitude;
    struct NSDictionary *_addressDictionary;
    NSString *_phoneNumber;
    NSURL *_informationURL;
    HKClinicalBrand *_brand;
    NSArray *_gateways;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *gateways; // @synthesize gateways=_gateways;
@property(readonly, copy, nonatomic) HKClinicalBrand *brand; // @synthesize brand=_brand;
@property(readonly, copy, nonatomic) NSURL *informationURL; // @synthesize informationURL=_informationURL;
@property(readonly, copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, copy, nonatomic) NSDictionary *addressDictionary; // @synthesize addressDictionary=_addressDictionary;
@property(readonly, nonatomic, getter=hasMultipleLocations) _Bool multiple; // @synthesize multiple=_multiple;
@property(readonly, copy, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(readonly, copy, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic, getter=isSupported) _Bool supported;
@property(readonly, copy) NSString *description;
- (id)initWithExternalID:(id)arg1 title:(id)arg2 subtitle:(id)arg3 hasMultipleLocations:(_Bool)arg4 latitude:(id)arg5 longitude:(id)arg6 addressDictionary:(struct NSDictionary *)arg7 phoneNumber:(id)arg8 informationURL:(id)arg9 brand:(id)arg10 gateways:(id)arg11;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

