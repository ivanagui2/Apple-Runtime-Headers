//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSDate, NSString, SFAppleIDContactInfo, SFAppleIDIdentity, SFAppleIDValidationRecord;

@interface SFAppleIDAccount : NSObject <NSSecureCoding>
{
    NSString *_altDSID;
    NSString *_appleID;
    NSString *_certificateToken;
    NSDate *_certificateTokenCreationDate;
    SFAppleIDContactInfo *_contactInfo;
    NSDate *_creationDate;
    SFAppleIDIdentity *_identity;
    NSData *_privateKeyPersistentReference;
    SFAppleIDValidationRecord *_validationRecord;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) SFAppleIDValidationRecord *validationRecord; // @synthesize validationRecord=_validationRecord;
@property(retain, nonatomic) NSData *privateKeyPersistentReference; // @synthesize privateKeyPersistentReference=_privateKeyPersistentReference;
@property(retain, nonatomic) SFAppleIDIdentity *identity; // @synthesize identity=_identity;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) SFAppleIDContactInfo *contactInfo; // @synthesize contactInfo=_contactInfo;
@property(retain, nonatomic) NSDate *certificateTokenCreationDate; // @synthesize certificateTokenCreationDate=_certificateTokenCreationDate;
@property(retain, nonatomic) NSString *certificateToken; // @synthesize certificateToken=_certificateToken;
@property(readonly, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)initWithAppleID:(id)arg1;
- (_Bool)isEqualToAccount:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
