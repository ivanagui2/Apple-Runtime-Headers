//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface AVTArchiverBasedDomain : NSObject <NSSecureCoding>
{
    NSString *_domainIdentifier;
    NSString *_primaryAvatarIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *primaryAvatarIdentifier; // @synthesize primaryAvatarIdentifier=_primaryAvatarIdentifier;
@property(readonly, copy, nonatomic) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)domainBySettingPrimaryAvatarIdentifier:(id)arg1;
- (id)initWithDomainIdentifier:(id)arg1 primaryAvatarIdentifier:(id)arg2;

@end
