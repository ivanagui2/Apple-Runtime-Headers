//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NWKRoutineDateInterval, WFLocation;

@interface NWKRoutineLocation : NSObject <NSSecureCoding, NSCopying>
{
    WFLocation *_location;
    NWKRoutineDateInterval *_interval;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NWKRoutineDateInterval *interval; // @synthesize interval=_interval;
@property(retain, nonatomic) WFLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToRoutineLocation:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)initWithLocation:(id)arg1 entryDate:(id)arg2 exitDate:(id)arg3;

@end
