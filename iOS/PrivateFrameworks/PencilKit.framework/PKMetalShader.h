//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTLRenderPipelineDescriptor;

@interface PKMetalShader : NSObject
{
    id <MTLFunction> _vertexFunction;
    id <MTLFunction> _fragmentFunction;
    id <MTLRenderPipelineState> _pipelineState;
    unsigned long long _stencilPixelFormat;
    long long _blendMode;
    unsigned long long _colorAttachmentIndex;
    MTLRenderPipelineDescriptor *_sharedPipelineDescriptor;
    unsigned long long _numColorAttachments;
    PKMetalShader *_noBlendModeShader;
    PKMetalShader *_addBlendModeShader;
    PKMetalShader *_maxBlendModeShader;
}

@property(readonly, nonatomic) id <MTLRenderPipelineState> pipelineState; // @synthesize pipelineState=_pipelineState;
- (void).cxx_destruct;
- (id)shaderWithBlendMode:(long long)arg1;
- (id)newShaderWithBlendMode:(long long)arg1;
- (void)createPipelineState;
- (id)initWithVertexFunction:(id)arg1 fragmentFunction:(id)arg2 blendMode:(long long)arg3 colorAttachmentIndex:(unsigned long long)arg4 sharedPipelineDescriptor:(id)arg5 numColorAttachments:(unsigned long long)arg6;
- (id)initWithVertexFunction:(id)arg1 fragmentFunction:(id)arg2 sharedPipelineDescriptor:(id)arg3 numColorAttachments:(unsigned long long)arg4;
- (id)init;

@end
