//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNGeometry.h>

@interface SCNCylinder : SCNGeometry
{
    float _cylinderradius;
    float _cylinderheight;
    float _cylinderradialSpan;
    int _cylinderheightSegmentCount;
    int _cylinderradialSegmentCount;
    int _cylinderprimitiveType;
}

+ (_Bool)supportsSecureCoding;
+ (id)cylinderWithRadius:(float)arg1 height:(float)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setupObjCModelFrom:(id)arg1;
- (id)description;
- (_Bool)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(float *)arg2;
- (_Bool)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
@property(nonatomic) float radius;
- (void)setRadialSpan:(float)arg1;
- (float)radialSpan;
@property(nonatomic) int radialSegmentCount;
- (void)setPrimitiveType:(int)arg1;
- (int)primitiveType;
@property(nonatomic) int heightSegmentCount;
@property(nonatomic) float height;
-     // Error parsing type: v12@0:4^{__C3DParametricGeometry={__C3DGeometry={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}C}{?=ffffffffffffiiiiiiiiiiiI}{?=^?^?^?^?^?^?}^{__CFData}}8, name: _syncObjCModel:
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)presentationGeometry;
- (id)presentationCylinder;
-     // Error parsing type: @12@0:4^{__C3DParametricGeometry={__C3DGeometry={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}C}{?=ffffffffffffiiiiiiiiiiiI}{?=^?^?^?^?^?^?}^{__CFData}}8, name: initPresentationParametricGeometryWithParametricGeometryRef:
-     // Error parsing type: ^{__C3DGeometry={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}C}8@0:4, name: __createCFObject
-     // Error parsing type: @12@0:4^{__C3DParametricGeometry={__C3DGeometry={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}C}{?=ffffffffffffiiiiiiiiiiiI}{?=^?^?^?^?^?^?}^{__CFData}}8, name: initWithParametricGeometryRef:
- (id)init;

@end

