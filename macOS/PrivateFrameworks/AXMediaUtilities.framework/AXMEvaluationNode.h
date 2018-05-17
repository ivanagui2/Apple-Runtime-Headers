//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AXMediaUtilities/AXMVisionEngineNode.h>

#import "NSSecureCoding.h"

@interface AXMEvaluationNode : AXMVisionEngineNode <NSSecureCoding>
{
    double _minimumConfidence;
    unsigned long long _priority;
    unsigned long long _effectivePriority;
}

+ (unsigned long long)defaultPriority;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long effectivePriority; // @synthesize effectivePriority=_effectivePriority;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(nonatomic) double minimumConfidence; // @synthesize minimumConfidence=_minimumConfidence;
- (BOOL)shouldEvaluate:(id)arg1;
- (void)evaluate:(id)arg1;
- (void)resetEffectivePriority;
- (void)boostEffectivePriority;
- (void)nodeInitialize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
