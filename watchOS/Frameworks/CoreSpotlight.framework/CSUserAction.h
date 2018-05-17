//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSCoderEncoder.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSObject<OS_xpc_object>, NSSet, NSString, NSUUID;

@interface CSUserAction : NSObject <CSCoderEncoder, NSSecureCoding>
{
    NSString *_itemIdentifier;
    NSString *_contentAction;
    NSDictionary *_userInfo;
    NSSet *_keywords;
    unsigned int _eligibility;
    NSUUID *_uaIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)actionFromUserActivity:(id)arg1 searchableItem:(id)arg2;
@property(retain, nonatomic) NSUUID *uaIdentifier; // @synthesize uaIdentifier=_uaIdentifier;
@property unsigned int eligibility; // @synthesize eligibility=_eligibility;
@property(retain) NSSet *keywords; // @synthesize keywords=_keywords;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy) NSString *contentAction; // @synthesize contentAction=_contentAction;
@property(copy) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)_propertiesDescription;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpc_dictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithCSCoder:(id)arg1;
- (id)initWithXPCDict:(id)arg1;

@end
