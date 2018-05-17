//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSDictionary;

@interface DMFFetchRestrictionsResultObject : CATTaskResultObject
{
    NSDictionary *_restrictions;
    NSDictionary *_globalRestrictions;
    NSDictionary *_profileRestrictions;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDictionary *profileRestrictions; // @synthesize profileRestrictions=_profileRestrictions;
@property(readonly, copy, nonatomic) NSDictionary *globalRestrictions; // @synthesize globalRestrictions=_globalRestrictions;
@property(readonly, copy, nonatomic) NSDictionary *restrictions; // @synthesize restrictions=_restrictions;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRestrictions:(id)arg1;

@end
