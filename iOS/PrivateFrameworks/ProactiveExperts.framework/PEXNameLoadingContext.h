//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface PEXNameLoadingContext : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_bundleIdentifier;
    NSArray *_recipients;
}

+ (_Bool)supportsSecureCoding;
+ (id)nameLoadingContextWithRecipients:(id)arg1;
+ (id)nameLoadingContextWithBundleIdentifier:(id)arg1;
+ (id)globalContext;
- (void).cxx_destruct;
- (_Bool)isEqualToNameLoadingContext:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isGlobalContext;
- (id)initWithBundleIdentifier:(id)arg1 recipients:(id)arg2;

@end
