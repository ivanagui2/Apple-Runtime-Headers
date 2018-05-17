//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSData, NSDate, NSString, VSSubscriptionSource;

@interface VSSubscription : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_expirationDate;
    long long _accessLevel;
    NSArray *_tierIdentifiers;
    NSString *_billingIdentifier;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    NSString *_derivedSubscriptionInfo;
    NSString *_providedSubscriptionInfo;
    VSSubscriptionSource *_source;
    NSString *_subscriberIdentifierHash;
}

+ (id)keyPathsForValuesAffectingVersionHash;
+ (id)keyPathsForValuesAffectingSubscriptionInfo;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *subscriberIdentifierHash; // @synthesize subscriberIdentifierHash=_subscriberIdentifierHash;
@property(copy, nonatomic) VSSubscriptionSource *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *providedSubscriptionInfo; // @synthesize providedSubscriptionInfo=_providedSubscriptionInfo;
@property(copy, nonatomic) NSString *derivedSubscriptionInfo; // @synthesize derivedSubscriptionInfo=_derivedSubscriptionInfo;
@property(copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) NSString *billingIdentifier; // @synthesize billingIdentifier=_billingIdentifier;
@property(copy, nonatomic) NSArray *tierIdentifiers; // @synthesize tierIdentifiers=_tierIdentifiers;
@property(nonatomic) long long accessLevel; // @synthesize accessLevel=_accessLevel;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *versionHash;
- (void)_updateHash:(id)arg1 withValueForProperty:(id)arg2;
- (void)setNilValueForKey:(id)arg1;
@property(copy, nonatomic) NSString *subscriptionInfo;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
