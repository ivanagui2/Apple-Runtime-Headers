//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCNSourceRendererRegistry : NSObject
{
    struct __CFDictionary *_registry;
}

+ (id)sharedRegistry;
- (void)removeSourceRenderersForSource:(id)arg1;
- (void)removeSourceRenderersForEngineContext:(struct __C3DEngineContext *)arg1;
- (id)sourceRendererForEngineContext:(struct __C3DEngineContext *)arg1 source:(id)arg2 textureSource:(id)arg3;
- (void)rendererDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

@end
