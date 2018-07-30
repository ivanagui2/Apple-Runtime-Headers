//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSMutableArray;

@interface UISUISecurityContext : NSObject <NSSecureCoding>
{
    int _activationCount;
    NSMutableArray *_URLsBeingAccessed;
    NSArray *_securityScopedResources;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *securityScopedResources; // @synthesize securityScopedResources=_securityScopedResources;
- (void).cxx_destruct;
- (id)accessibleURLs;
- (void)deactivate;
- (void)activate;
@property(readonly, nonatomic) _Bool isActive; // @dynamic isActive;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)securityScopedResourcesMatchingPredicate:(CDUnknownBlockType)arg1;
- (id)description;
- (id)initWithSecurityScopedResources:(id)arg1;

@end
