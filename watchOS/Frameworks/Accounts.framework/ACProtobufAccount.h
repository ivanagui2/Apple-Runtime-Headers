//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class ACProtobufAccountCredential, ACProtobufAccountType, ACProtobufDate, ACProtobufURL, NSDictionary, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ACProtobufAccount : PBCodable <NSCopying>
{
    NSString *_accountDescription;
    ACProtobufAccountType *_accountType;
    NSString *_authenticationType;
    ACProtobufAccountCredential *_credential;
    NSString *_credentialType;
    NSMutableArray *_dataclassProperties;
    ACProtobufDate *_date;
    NSMutableArray *_dirtyAccountProperties;
    NSMutableArray *_dirtyDataclassProperties;
    NSMutableArray *_dirtyProperties;
    NSMutableArray *_enabledDataclasses;
    NSString *_identifier;
    ACProtobufDate *_lastCredentialRenewalRejectionDate;
    ACProtobufURL *_objectID;
    NSString *_owningBundleID;
    NSString *_parentAccountIdentifier;
    NSMutableArray *_properties;
    NSMutableArray *_provisionedDataclasses;
    NSString *_username;
    _Bool _active;
    _Bool _authenticated;
    _Bool _supportsAuthentication;
    _Bool _visible;
}

+ (Class)dirtyDataclassPropertiesType;
+ (Class)dirtyAccountPropertiesType;
+ (Class)dirtyPropertiesType;
+ (Class)provisionedDataclassesType;
+ (Class)enabledDataclassesType;
+ (Class)dataclassPropertiesType;
+ (Class)propertiesType;
@property(retain, nonatomic) NSMutableArray *dirtyDataclassProperties; // @synthesize dirtyDataclassProperties=_dirtyDataclassProperties;
@property(retain, nonatomic) NSMutableArray *dirtyAccountProperties; // @synthesize dirtyAccountProperties=_dirtyAccountProperties;
@property(retain, nonatomic) NSMutableArray *dirtyProperties; // @synthesize dirtyProperties=_dirtyProperties;
@property(retain, nonatomic) NSString *owningBundleID; // @synthesize owningBundleID=_owningBundleID;
@property(retain, nonatomic) ACProtobufDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *credentialType; // @synthesize credentialType=_credentialType;
@property(retain, nonatomic) NSString *authenticationType; // @synthesize authenticationType=_authenticationType;
@property(retain, nonatomic) NSMutableArray *provisionedDataclasses; // @synthesize provisionedDataclasses=_provisionedDataclasses;
@property(retain, nonatomic) NSMutableArray *enabledDataclasses; // @synthesize enabledDataclasses=_enabledDataclasses;
@property(retain, nonatomic) NSString *parentAccountIdentifier; // @synthesize parentAccountIdentifier=_parentAccountIdentifier;
@property(retain, nonatomic) ACProtobufURL *objectID; // @synthesize objectID=_objectID;
@property(retain, nonatomic) NSMutableArray *dataclassProperties; // @synthesize dataclassProperties=_dataclassProperties;
@property(nonatomic) _Bool supportsAuthentication; // @synthesize supportsAuthentication=_supportsAuthentication;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) ACProtobufDate *lastCredentialRenewalRejectionDate; // @synthesize lastCredentialRenewalRejectionDate=_lastCredentialRenewalRejectionDate;
@property(nonatomic) _Bool authenticated; // @synthesize authenticated=_authenticated;
@property(retain, nonatomic) NSMutableArray *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) ACProtobufAccountCredential *credential; // @synthesize credential=_credential;
@property(retain, nonatomic) ACProtobufAccountType *accountType; // @synthesize accountType=_accountType;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)dirtyDataclassPropertiesAtIndex:(unsigned int)arg1;
- (unsigned int)dirtyDataclassPropertiesCount;
- (void)addDirtyDataclassProperties:(id)arg1;
- (void)clearDirtyDataclassProperties;
- (id)dirtyAccountPropertiesAtIndex:(unsigned int)arg1;
- (unsigned int)dirtyAccountPropertiesCount;
- (void)addDirtyAccountProperties:(id)arg1;
- (void)clearDirtyAccountProperties;
- (id)dirtyPropertiesAtIndex:(unsigned int)arg1;
- (unsigned int)dirtyPropertiesCount;
- (void)addDirtyProperties:(id)arg1;
- (void)clearDirtyProperties;
@property(readonly, nonatomic) _Bool hasOwningBundleID;
@property(readonly, nonatomic) _Bool hasDate;
@property(readonly, nonatomic) _Bool hasCredentialType;
@property(readonly, nonatomic) _Bool hasAuthenticationType;
- (id)provisionedDataclassesAtIndex:(unsigned int)arg1;
- (unsigned int)provisionedDataclassesCount;
- (void)addProvisionedDataclasses:(id)arg1;
- (void)clearProvisionedDataclasses;
- (id)enabledDataclassesAtIndex:(unsigned int)arg1;
- (unsigned int)enabledDataclassesCount;
- (void)addEnabledDataclasses:(id)arg1;
- (void)clearEnabledDataclasses;
@property(readonly, nonatomic) _Bool hasParentAccountIdentifier;
@property(readonly, nonatomic) _Bool hasObjectID;
- (id)dataclassPropertiesAtIndex:(unsigned int)arg1;
- (unsigned int)dataclassPropertiesCount;
- (void)addDataclassProperties:(id)arg1;
- (void)clearDataclassProperties;
@property(readonly, nonatomic) _Bool hasLastCredentialRenewalRejectionDate;
- (id)propertiesAtIndex:(unsigned int)arg1;
- (unsigned int)propertiesCount;
- (void)addProperties:(id)arg1;
- (void)clearProperties;
@property(readonly, nonatomic) _Bool hasUsername;
@property(readonly, nonatomic) _Bool hasAccountDescription;
@property(readonly, nonatomic) _Bool hasCredential;
@property(copy, nonatomic) NSDictionary *dataclassPropertiesDictionary;
@property(copy, nonatomic) NSDictionary *propertiesDictionary;

@end
