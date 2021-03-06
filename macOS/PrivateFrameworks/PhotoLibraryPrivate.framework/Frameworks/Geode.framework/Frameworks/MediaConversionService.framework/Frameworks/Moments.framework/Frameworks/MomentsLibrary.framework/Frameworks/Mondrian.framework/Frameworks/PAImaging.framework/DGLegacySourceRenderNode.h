//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUSourceNode.h>

@class DGLegacyRenderSource;

@interface DGLegacySourceRenderNode : NUSourceNode
{
    DGLegacyRenderSource *_legacySource;
}

@property(retain) DGLegacyRenderSource *legacySource; // @synthesize legacySource=_legacySource;
- (void).cxx_destruct;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(id *)arg3;
- (id)_evaluateImageProperties:(out id *)arg1;
- (CDStruct_912cb5d2)pixelSize;
- (long long)sourceOrientation;
- (id)initWithLegacyRenderSource:(id)arg1;

@end

