//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSLayoutAnchor.h>

@interface NSLayoutDimension : NSLayoutAnchor
{
}

- (BOOL)isCompatibleWithAnchor:(id)arg1;
- (BOOL)validateOtherAttribute:(long long)arg1;
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;
- (id)constraintEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;
- (id)constraintLessThanOrEqualToConstant:(double)arg1;
- (id)constraintGreaterThanOrEqualToConstant:(double)arg1;
- (id)constraintEqualToConstant:(double)arg1;
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2;
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2;
- (id)constraintEqualToAnchor:(id)arg1 multiplier:(double)arg2;
- (id)ruleLessThanOrEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3;
- (id)ruleGreaterThanOrEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3;
- (id)ruleEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3;
- (id)ruleGreaterThanOrEqualToConstant:(double)arg1;
- (id)ruleLessThanOrEqualToConstant:(double)arg1;
- (id)ruleEqualToConstant:(double)arg1;
- (id)minusDimension:(id)arg1;
- (id)plusDimension:(id)arg1;
- (id)plus:(double)arg1;
- (id)times:(double)arg1;
- (id)anchorBySubtractingDimension:(id)arg1;
- (id)anchorByAddingDimension:(id)arg1;
- (id)anchorByAddingConstant:(double)arg1;
- (id)anchorByMultiplyingByConstant:(double)arg1;

@end
