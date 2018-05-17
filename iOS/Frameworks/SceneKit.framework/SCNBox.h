//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNGeometry.h>

@interface SCNBox : SCNGeometry
{
    double _boxwidth;
    double _boxheight;
    double _boxlength;
    double _boxchamferRadius;
    long long _boxwidthSegmentCount;
    long long _boxheightSegmentCount;
    long long _boxlengthSegmentCount;
    long long _boxchamferSegmentCount;
    long long _boxprimitiveType;
}

+ (_Bool)supportsSecureCoding;
+ (id)box;
+ (id)boxWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 chamferRadius:(double)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setupObjCModelFrom:(id)arg1;
- (id)description;
- (_Bool)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(double *)arg2;
- (_Bool)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
@property(nonatomic) long long widthSegmentCount;
@property(nonatomic) double width;
- (void)setPrimitiveType:(long long)arg1;
- (long long)primitiveType;
@property(nonatomic) long long lengthSegmentCount;
@property(nonatomic) double length;
@property(nonatomic) long long heightSegmentCount;
@property(nonatomic) double height;
@property(nonatomic) long long chamferSegmentCount;
@property(nonatomic) double chamferRadius;
-     // Error parsing type: v24@0:8^{__C3DParametricGeometry={__C3DGeometry={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}C}{?=ffffffffffffiiiiiiiiiiiI}{?=^?^?^?^?^?^?}^{__CFData}}16, name: _syncObjCModel:
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)presentationGeometry;
- (id)presentationBox;
-     // Error parsing type: @24@0:8^{__C3DParametricGeometry={__C3DGeometry={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}C}{?=ffffffffffffiiiiiiiiiiiI}{?=^?^?^?^?^?^?}^{__CFData}}16, name: initPresentationParametricGeometryWithParametricGeometryRef:
-     // Error parsing type: ^{__C3DGeometry={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}C}16@0:8, name: __createCFObject
-     // Error parsing type: @24@0:8^{__C3DParametricGeometry={__C3DGeometry={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}C}{?=ffffffffffffiiiiiiiiiiiI}{?=^?^?^?^?^?^?}^{__CFData}}16, name: initWithParametricGeometryRef:
- (id)init;

@end
