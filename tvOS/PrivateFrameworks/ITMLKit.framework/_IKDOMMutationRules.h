//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSSet;

__attribute__((visibility("hidden")))
@interface _IKDOMMutationRules : NSObject
{
    NSArray *_conditionalities;
    NSSet *_dependentPathStrings;
}

@property(readonly, copy, nonatomic) NSSet *dependentPathStrings; // @synthesize dependentPathStrings=_dependentPathStrings;
@property(readonly, copy, nonatomic) NSArray *conditionalities; // @synthesize conditionalities=_conditionalities;
- (void).cxx_destruct;
- (id)initWithConditionalities:(id)arg1;

@end
