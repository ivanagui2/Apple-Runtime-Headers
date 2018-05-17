//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "SCNAnimatable.h"
#import "SCNBoundingVolume.h"
#import "SCNShadable.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SCNGeometryElement, SCNGeometrySource, SCNMaterial, SCNOrderedDictionary, SCNProgram, SCNShadableHelper;

@interface SCNGeometry : NSObject <SCNAnimatable, SCNBoundingVolume, SCNShadable, NSCopying, NSSecureCoding>
{
    // Error parsing type: ^{__C3DGeometry={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}C}, name: _geometry
    unsigned int _isPresentationInstance:1;
    NSMutableArray *_sources;
    NSMutableArray *_elements;
    NSArray *_sourceChannels;
    NSMutableArray *_materials;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    NSArray *_levelsOfDetail;
    unsigned int _subdivisionLevel;
    _Bool _subdivisionIsAdaptive;
    CDStruct_4c02ed10 _subdivisionSettings;
    SCNGeometrySource *_edgeCreasesSource;
    SCNGeometryElement *_edgeCreasesElement;
    SCNShadableHelper *_shadableHelper;
    struct SCNVector3 *_fixedBoundingBoxExtrema;
    NSString *_name;
    NSMutableDictionary *_valuesForUndefinedKeys;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (id)geometryWithSources:(id)arg1 elements:(id)arg2 sourceChannels:(id)arg3;
+ (id)geometryWithSources:(id)arg1 elements:(id)arg2;
+ (id)geometry;
+     // Error parsing type: @12@0:4^{__C3DGeometry={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}C}8, name: geometryWithGeometryRef:
+ (id)floorWithOptions:(id)arg1;
+ (id)torusWithRingRadius:(float)arg1 pipeRadius:(float)arg2 options:(id)arg3;
+ (id)capsuleWithRadius:(float)arg1 height:(float)arg2 options:(id)arg3;
+ (id)tubeWithInnerRadius:(float)arg1 outerRadius:(float)arg2 height:(float)arg3 options:(id)arg4;
+ (id)coneWithHeight:(float)arg1 topRadius:(float)arg2 bottomRadius:(float)arg3 options:(id)arg4;
+ (id)cylinderWithRadius:(float)arg1 height:(float)arg2 options:(id)arg3;
+ (id)sphereWithRadius:(float)arg1 options:(id)arg2;
+ (id)pyramidWithWidth:(float)arg1 height:(float)arg2 length:(float)arg3 options:(id)arg4;
+ (id)boxWithWidth:(float)arg1 height:(float)arg2 length:(float)arg3 cornerRadius:(float)arg4 options:(id)arg5;
+ (id)planeWithWidth:(float)arg1 height:(float)arg2 options:(id)arg3;
+ (id)morpherWithMDLMesh:(id)arg1;
+ (id)geometryWithMDLMesh:(id)arg1;
+ (id)geometryWithMDLMesh:(id)arg1 submesh:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
-     // Error parsing type: ^{__C3DGeometry={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}C}8@0:4, name: __createCFObject
- (void)_customDecodingOfSCNGeometry:(id)arg1;
- (void)_customEncodingOfSCNGeometry:(id)arg1;
- (void)unbindAnimatablePath:(id)arg1;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)_scnBindings;
- (_Bool)isAnimationForKeyPaused:(id)arg1;
- (void)setSpeed:(float)arg1 forAnimationKey:(id)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(float)arg2;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(float)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (void)_pauseAnimation:(_Bool)arg1 forKey:(id)arg2 pausedByNode:(_Bool)arg3;
- (id)animationPlayerForKey:(id)arg1;
- (void)_copyAnimationsFrom:(id)arg1;
- (id)_scnAnimationForKey:(id)arg1;
- (id)animationForKey:(id)arg1;
- (void)_syncObjCAnimations;
@property(readonly) NSArray *animationKeys;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (_Bool)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (struct __C3DAnimationManager *)animationManager;
- (const void *)__CFObject;
@property(retain, nonatomic) SCNProgram *program;
- (void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)handleBindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)shaderModifiersArgumentsNames;
@property(copy, nonatomic) NSDictionary *shaderModifiers;
- (void)_setupShadableHelperIfNeeded;
- (id)customMaterialAttributes;
- (id)customMaterialAttributeNames;
- (id)customMaterialProperties;
- (id)customMaterialPropertyNames;
- (void)_shadableSetValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)_unifyNormals;
- (struct __C3DMaterial *)materialRef;
- (struct __C3DMaterial *)materialRefCreateIfNeeded;
@property(retain, nonatomic) SCNGeometrySource *edgeCreasesSource;
@property(retain, nonatomic) SCNGeometryElement *edgeCreasesElement;
@property(nonatomic) _Bool wantsAdaptiveSubdivision;
@property(nonatomic) unsigned int subdivisionLevel;
- (void)set_subdivisionSettings:(CDStruct_4c02ed10)arg1;
- (CDStruct_4c02ed10)_subdivisionSettings;
@property(copy, nonatomic) NSArray *levelsOfDetail;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (_Bool)parseSpecialKey:(id)arg1 withPath:(id)arg2 intoDestination:(id *)arg3 remainingPath:(id *)arg4;
- (void)setPrimitiveType:(int)arg1;
- (int)primitiveType;
- (void)setMaterial:(id)arg1;
- (id)material;
@property(copy, nonatomic) NSArray *materials;
- (void)removeAllMaterials;
- (void)replaceMaterial:(id)arg1 with:(id)arg2;
- (void)replaceMaterialAtIndex:(unsigned int)arg1 withMaterial:(id)arg2;
- (void)removeMaterialAtIndex:(unsigned int)arg1;
- (void)removeMaterial:(id)arg1;
- (void)insertMaterial:(id)arg1 atIndex:(unsigned int)arg2;
@property(retain, nonatomic) SCNMaterial *firstMaterial;
- (id)_firstMaterial;
- (id)mutableMaterials;
- (void)replaceObjectInMaterialsAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectFromMaterialsAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 inMaterialsAtIndex:(unsigned int)arg2;
- (id)objectInMaterialsAtIndex:(unsigned int)arg1;
- (unsigned int)countOfMaterials;
- (id)materialWithName:(id)arg1;
- (id)_materialWithName:(id)arg1;
- (void)_expand;
- (id)keyForNodeAttributes;
- (id)scene;
- (struct __C3DScene *)sceneRef;
- (id)_renderableCopy;
- (id)interleavedCopy;
- (id)mutableCopy;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setupObjCModelFrom:(id)arg1;
- (void)_setAttributes:(id)arg1;
- (id)getBoundingBox;
- (id)getBoundingSphere;
-     // Error parsing type: B16@0:4^8^f12, name: simdGetBoundingSphereCenter:radius:
- (_Bool)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(float *)arg2;
- (void)setBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
- (_Bool)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
- (_Bool)_hasFixedBoundingBoxExtrema;
- (id)geometryElementAtIndex:(int)arg1;
@property(readonly, nonatomic) int geometryElementCount;
@property(readonly, nonatomic) NSArray *geometryElements;
- (id)geometrySourceForSemantic:(id)arg1;
- (id)geometrySourcesForSemantic:(id)arg1;
- (id)geometrySourceChannels;
@property(readonly, nonatomic) NSArray *geometrySources;
- (void)_setupGeometryElements;
- (void)_setupGeometrySources;
- (void)_releaseCachedSourcesAndElements;
- (_Bool)isPausedOrPausedByInheritance;
- (id)presentationInstance;
- (id)presentationGeometry;
-     // Error parsing type: v12@0:4^{__C3DGeometry={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}C}8, name: setGeometryRef:
-     // Error parsing type: v12@0:4^{__C3DGeometry={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}C}8, name: _setGeometryRef:
-     // Error parsing type: ^{__C3DGeometry={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}C}8@0:4, name: geometryRef
@property(readonly, copy) NSString *description;
- (id)geometryDescription;
- (void)_syncObjCModel;
- (void)_syncEntityObjCModel;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *name;
- (_Bool)isPresentationInstance;
- (void)dealloc;
-     // Error parsing type: @12@0:4^{__C3DGeometry={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}C}8, name: initPresentationGeometryWithGeometryRef:
-     // Error parsing type: @12@0:4^{__C3DGeometry={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}C}8, name: initWithGeometryRef:
- (id)init;
- (void)setValueForKey:(id)arg1 optionKey:(id)arg2 options:(id)arg3;
- (id)_geometryByWeldingVerticesWithThreshold:(float)arg1 normalThreshold:(float)arg2;
- (void)_discardOriginalTopology;
- (id)_geometryByRemovingSkinnerSources;
- (id)_geometryByAddingSourcesOfSkinner:(id)arg1;
- (id)_geometryByUnifyingNormalsWithCreaseThreshold:(float)arg1;
- (id)debugQuickLookData;
- (id)debugQuickLookObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
