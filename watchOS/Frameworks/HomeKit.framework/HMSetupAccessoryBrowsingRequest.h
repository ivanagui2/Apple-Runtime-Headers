//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray;

@interface HMSetupAccessoryBrowsingRequest : NSObject <NSSecureCoding>
{
    NSArray *_filterCategories;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *filterCategories; // @synthesize filterCategories=_filterCategories;
- (void).cxx_destruct;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithFilterCategories:(id)arg1;
- (id)init;

@end
