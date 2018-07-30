//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITimingCurveProvider.h"

@class UICubicTimingParameters;

@interface UISpringTimingParameters : NSObject <UITimingCurveProvider>
{
    _Bool _implicitDuration;
    float _dampingRatio;
    float _mass;
    float _stiffness;
    float _damping;
    struct CGVector _initialVelocity;
}

@property(nonatomic) float damping; // @synthesize damping=_damping;
@property(nonatomic) float stiffness; // @synthesize stiffness=_stiffness;
@property(nonatomic) float mass; // @synthesize mass=_mass;
@property(nonatomic) _Bool implicitDuration; // @synthesize implicitDuration=_implicitDuration;
@property(readonly, nonatomic) float dampingRatio; // @synthesize dampingRatio=_dampingRatio;
@property(readonly, nonatomic) struct CGVector initialVelocity; // @synthesize initialVelocity=_initialVelocity;
@property(readonly, nonatomic) double settlingDuration;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) UISpringTimingParameters *springTimingParameters;
@property(readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDampingRatio:(float)arg1;
- (id)init;
- (id)initWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 initialVelocity:(struct CGVector)arg4;
- (id)description;
- (id)effectiveTimingFunction;
- (id)_mediaTimingFunction;
@property(readonly, nonatomic) int timingCurveType;
- (id)initWithDampingRatio:(float)arg1 initialVelocity:(struct CGVector)arg2;

@end
