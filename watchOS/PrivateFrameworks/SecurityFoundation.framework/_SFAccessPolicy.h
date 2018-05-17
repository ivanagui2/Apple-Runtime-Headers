//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface _SFAccessPolicy : NSObject <NSCopying, NSSecureCoding>
{
    id _accessPolicyInternal;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) const struct __CFDictionary *secAccessibilityAttributes;
@property(copy, nonatomic) NSArray *accessControlList;
@property(copy, nonatomic) NSString *accessGroup;
@property(nonatomic) int sharingPolicy;
@property(nonatomic) CDStruct_fa52dea6 accessibility;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccessibility:(CDStruct_fa52dea6)arg1 sharingPolicy:(int)arg2;
- (id)init;

@end
