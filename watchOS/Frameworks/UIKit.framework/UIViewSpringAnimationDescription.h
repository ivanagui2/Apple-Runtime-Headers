//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface UIViewSpringAnimationDescription : NSObject
{
    _Bool _usesDampingRatioAndResponse;
    float _tension;
    float _friction;
    CDStruct_59b4c622 _parameters;
}

+ (id)descriptionWithTension:(float)arg1 friction:(float)arg2;
+ (id)descriptionWithSpringAnimationParameters:(CDStruct_59b4c622)arg1;
@property(nonatomic) CDStruct_59b4c622 parameters; // @synthesize parameters=_parameters;
@property(nonatomic) float friction; // @synthesize friction=_friction;
@property(nonatomic) float tension; // @synthesize tension=_tension;
@property(nonatomic) _Bool usesDampingRatioAndResponse; // @synthesize usesDampingRatioAndResponse=_usesDampingRatioAndResponse;

@end
