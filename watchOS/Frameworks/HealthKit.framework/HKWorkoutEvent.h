//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSDateInterval, NSDictionary;

@interface HKWorkoutEvent : NSObject <NSSecureCoding, NSCopying>
{
    int _type;
    NSDateInterval *_dateInterval;
    NSDictionary *_metadata;
}

+ (_Bool)supportsSecureCoding;
+ (id)workoutEventWithType:(int)arg1 dateInterval:(id)arg2 metadata:(id)arg3;
+ (id)workoutEventWithType:(int)arg1 date:(id)arg2 metadata:(id)arg3;
+ (id)workoutEventWithType:(int)arg1 date:(id)arg2;
+ (id)_workoutEventWithInternalEvent:(id)arg1;
+ (id)_workoutEventWithType:(int)arg1 dateInterval:(id)arg2 metadata:(id)arg3;
+ (id)_workoutEventWithType:(int)arg1 date:(id)arg2 metadata:(id)arg3;
+ (id)_newWorkoutEventWithType:(int)arg1 dateInterval:(id)arg2 metadata:(id)arg3;
@property(readonly, copy) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
- (void).cxx_destruct;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_validateConfiguration;
- (void)_assertPropertiesValid;
@property(readonly, copy) NSDate *date;
@property(readonly) int type;
- (id)init;
- (id)_init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end
