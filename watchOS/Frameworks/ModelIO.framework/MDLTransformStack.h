//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MDLTransformComponent.h"
#import "NSCopying.h"

@class CAAnimation, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface MDLTransformStack : NSObject <NSCopying, MDLTransformComponent>
{
    _Bool _resetsTransform;
    NSMutableArray *_transformOps;
    NSMutableDictionary *_animatedValues;
}

+     // Error parsing type: {?=[4]}20@0:4@8d12, name: globalTransformWithObject:atTime:
+     // Error parsing type: {?=[4]}20@0:4@8d12, name: localTransformWithObject:atTime:
@property(retain, nonatomic) NSMutableDictionary *animatedValues; // @synthesize animatedValues=_animatedValues;
@property(copy, nonatomic) NSMutableArray *transformOps; // @synthesize transformOps=_transformOps;
@property(nonatomic) _Bool resetsTransform; // @synthesize resetsTransform=_resetsTransform;
- (void).cxx_destruct;
@property(readonly, nonatomic) CAAnimation *transformAnimation;
- (void)clearTransformStack;
-     // Error parsing type: {?=[4]}16@0:4d8, name: localTransformAtTime:
-     // Error parsing type: v72@0:4{?=[4]}8, name: setLocalTransform:
-     // Error parsing type: v80@0:4{?=[4]}8d72, name: setLocalTransform:forTime:
// Error parsing type for property matrix:
// Property attributes: T{?=[4]},N

-     // Error parsing type: {?=[4]}16@0:4d8, name: double4x4AtTime:
-     // Error parsing type: {?=[4]}16@0:4d8, name: float4x4AtTime:
- (unsigned int)count;
- (id)animatedValueWithName:(id)arg1;
- (id)addMatrixOp:(id)arg1 inverse:(_Bool)arg2;
- (id)addScaleOp:(id)arg1 inverse:(_Bool)arg2;
- (id)addRotateOp:(id)arg1 order:(unsigned int)arg2 inverse:(_Bool)arg3;
- (id)addRotateZOp:(id)arg1 inverse:(_Bool)arg2;
- (id)addRotateYOp:(id)arg1 inverse:(_Bool)arg2;
- (id)addRotateXOp:(id)arg1 inverse:(_Bool)arg2;
- (id)addTranslateOp:(id)arg1 inverse:(_Bool)arg2;
- (id)animatedScalarWithName:(id)arg1 shouldCreateIfMissing:(_Bool)arg2;
- (id)animatedMatrix4x4WithName:(id)arg1 shouldCreateIfMissing:(_Bool)arg2;
- (id)animatedVector4WithName:(id)arg1 shouldCreateIfMissing:(_Bool)arg2;
- (id)animatedVector3WithName:(id)arg1 shouldCreateIfMissing:(_Bool)arg2;
- (id)init;
@property(readonly, copy, nonatomic) NSArray *keyTimes;
@property(readonly, nonatomic) double maximumTime;
@property(readonly, nonatomic) double minimumTime;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
