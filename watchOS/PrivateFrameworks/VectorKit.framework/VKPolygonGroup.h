//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKPolygonalItemGroup.h>

@class VKSharedResources;

__attribute__((visibility("hidden")))
@interface VKPolygonGroup : VKPolygonalItemGroup
{
    struct optional<md::MeshSet<ggl::PolygonCommonStroke::MeshMesh, ggl::PolygonCommonStroke::DefaultVbo>> _strokeMeshInfo;
    vector_d473a3e0 _strokeMeshes;
    VKSharedResources *_sharedResources;
    shared_ptr_479d1306 _sourceTexture;
    shared_ptr_479d1306 _targetTexture;
    shared_ptr_479d1306 _sourceRoofTexture;
    shared_ptr_479d1306 _targetRoofTexture;
    unsigned char _lastResolvedZoom;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateTextures:(unsigned char)arg1;
- (void)addStrokeForSection:(const struct PolygonSection *)arg1 paddedCount:(unsigned int)arg2 key:(pair_3c94251f)arg3 attributes:(id)arg4 styles:(vector_0496561e *)arg5 cullingMask:(unsigned int)arg6 accessor:(struct ResourceAccessor *)arg7;
- (unsigned char)initialStyleIndexForSection:(const struct PolygonSection *)arg1 attributes:(id)arg2 styles:(const vector_0496561e *)arg3;
- (unsigned char)styleIndexForAttributes:(id)arg1 edgePair:(const CDStruct_1e94be47 *)arg2;
- (_Bool)addFillForSection:(const struct PolygonSection *)arg1 precision:(unsigned char)arg2 styleIndex:(unsigned int)arg3 cullingMask:(unsigned int)arg4 accessor:(struct ResourceAccessor *)arg5 triangulator:(id)arg6;
- (void)addPolygon:(CDStruct_013e9ddf *)arg1 hasNonWaterStyle:(_Bool)arg2 accessor:(struct ResourceAccessor *)arg3 triangulator:(id)arg4;
- (void)didFinishAddingData;
- (void)willAddDataWithAccessor:(struct ResourceAccessor *)arg1;
- (void)prepareToStrokeSection:(const struct PolygonSection *)arg1 key:(const pair_3c94251f *)arg2 styles:(vector_0496561e *)arg3 paddedCount:(unsigned int)arg4;
- (void)prepareToFillSection:(const struct PolygonSection *)arg1;
- (void)enclosePointsInBoundingBox:(Matrix_8746f91e *)arg1 count:(unsigned int)arg2;
- (void)prepareForPolygon:(CDStruct_013e9ddf *)arg1 hasNonWaterStyle:(_Bool)arg2;
- (unsigned int)createStrokePointStyleList:(CDStruct_013e9ddf *)arg1 section:(unsigned int)arg2 outPointStyles:(vector_0496561e *)arg3;
@property(readonly, nonatomic) vector_d473a3e0 *strokeMeshes;
- (void)updateTexturesIfNecessary:(float)arg1;
- (void)setNeedsTextureUpdate;
@property(readonly, nonatomic) struct FeatureAttributeSet styleAttributes;
- (shared_ptr_479d1306)_textureForName:(const basic_string_8c74bb18 *)arg1;
- (void)dealloc;
- (id)initWithStyleQuery:(shared_ptr_c5d816ee *)arg1 tileZoom:(float)arg2 fixedAroundCentroid:(const Matrix_8746f91e *)arg3 contentScale:(float)arg4 sharedResources:(id)arg5;
@property(readonly, nonatomic) struct Texture2D *targetRoofTexture;
@property(readonly, nonatomic) struct Texture2D *sourceRoofTexture;
@property(readonly, nonatomic) struct Texture2D *targetTexture;
@property(readonly, nonatomic) struct Texture2D *sourceTexture;

@end
