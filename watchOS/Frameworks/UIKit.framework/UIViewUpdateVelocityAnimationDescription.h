//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface UIViewUpdateVelocityAnimationDescription : NSObject
{
    id <UIVectorOperatable> _velocity;
    id <UIVectorOperatable> _targetVelocity;
}

+ (id)descriptionWithVelocity:(id)arg1 targetVelocity:(id)arg2;
@property(retain, nonatomic) id <UIVectorOperatable> targetVelocity; // @synthesize targetVelocity=_targetVelocity;
@property(retain, nonatomic) id <UIVectorOperatable> velocity; // @synthesize velocity=_velocity;
- (void).cxx_destruct;
- (id)initWithVelocity:(id)arg1 targetVelocity:(id)arg2;

@end
