//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SCNResourceManager <NSObject>
- (struct __C3DEngineStats *)stats;
- (void)flush;
- (void)removeAllShaders;
-     // Error parsing type: @24@0:8^{__C3DMeshElement={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}II^{__C3DMeshElement}CCC{?=c^{__CFData}I^I{?=qq}CB}fff^v^{__C3DMeshSource}[2]^{?}I}16, name: renderResourceForMeshElement:
-     // Error parsing type: @24@0:8^{__C3DMeshSource={__C3DGenericSource={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}^{__C3DSourceAccessor}(?=^{__CFData}^v^v)qb1b1b1}SCC}16, name: renderResourceForMeshSource:
- (id)wireframeResourceForRendererElement:(struct __C3DRendererElement *)arg1 engineContext:(struct __C3DEngineContext *)arg2;
-     // Error parsing type: @24@0:8^{__C3DGeometry={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v^v}{?=CfIC(?={?=ff}{?=f}{?=f}{?=Cb1b1})}C}16, name: renderResourceForTessellatedGeometry:
-     // Error parsing type: @48@0:8^{__C3DMaterial=}16^{__C3DGeometry={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v^v}{?=CfIC(?={?=ff}{?=f}{?=f}{?=Cb1b1})}C}24@32^{__C3DEngineContext=}40, name: renderResourceForMaterial:geometry:renderPipeline:engineContext:
-     // Error parsing type: @24@0:8^{__C3DTextureSampler={__CFRuntimeBase=QAQ}iiiiii{C3DColor4=(?=[4f]{?=ffff})}fCiQ}16, name: renderResourceForSampler:
- (id)renderResourceForSkinner:(struct __C3DSkinner *)arg1 baseMesh:(struct __C3DMesh *)arg2;
-     // Error parsing type: @32@0:8^{__C3DMorph=}16^{__C3DGeometry={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v^v}{?=CfIC(?={?=ff}{?=f}{?=f}{?=Cb1b1})}C}24, name: renderResourceForMorph:baseGeometry:
- (id)renderResourceForMesh:(struct __C3DMesh *)arg1;
- (id)renderResourceForRasterizerState:(struct __C3DRasterizerStates *)arg1;
@end
