//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNGeometry.h>

@interface SCNBox : SCNGeometry
{
    float _boxwidth;
    float _boxheight;
    float _boxlength;
    float _boxchamferRadius;
    int _boxwidthSegmentCount;
    int _boxheightSegmentCount;
    int _boxlengthSegmentCount;
    int _boxchamferSegmentCount;
    int _boxprimitiveType;
}

+ (_Bool)supportsSecureCoding;
+ (id)box;
+ (id)boxWithWidth:(float)arg1 height:(float)arg2 length:(float)arg3 chamferRadius:(float)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setupObjCModelFrom:(id)arg1;
- (id)description;
- (_Bool)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(float *)arg2;
- (_Bool)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
@property(nonatomic) int widthSegmentCount;
@property(nonatomic) float width;
- (void)setPrimitiveType:(int)arg1;
- (int)primitiveType;
@property(nonatomic) int lengthSegmentCount;
@property(nonatomic) float length;
@property(nonatomic) int heightSegmentCount;
@property(nonatomic) float height;
@property(nonatomic) int chamferSegmentCount;
@property(nonatomic) float chamferRadius;
-     // Error parsing type: v12@0:4^{__C3DParametricGeometry={__C3DGeometry={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}C}{?=ffffffffffffiiiiiiiiiiiI}{?=^?^?^?^?^?^?}^{__CFData}}8, name: _syncObjCModel:
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)presentationGeometry;
- (id)presentationBox;
-     // Error parsing type: @12@0:4^{__C3DParametricGeometry={__C3DGeometry={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}C}{?=ffffffffffffiiiiiiiiiiiI}{?=^?^?^?^?^?^?}^{__CFData}}8, name: initPresentationParametricGeometryWithParametricGeometryRef:
-     // Error parsing type: ^{__C3DGeometry={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}C}8@0:4, name: __createCFObject
-     // Error parsing type: @12@0:4^{__C3DParametricGeometry={__C3DGeometry={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}C}{?=ffffffffffffiiiiiiiiiiiI}{?=^?^?^?^?^?^?}^{__CFData}}8, name: initWithParametricGeometryRef:
- (id)init;

@end
