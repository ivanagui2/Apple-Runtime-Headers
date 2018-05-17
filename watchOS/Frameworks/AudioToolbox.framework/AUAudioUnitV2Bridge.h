//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioToolbox/AUAudioUnit.h>

@class AUParameterTree, AUV2BridgeBusArray, NSObject<OS_dispatch_queue>;

@interface AUAudioUnitV2Bridge : AUAudioUnit
{
    NSObject<OS_dispatch_queue> *_eventListenerQueue;
    struct AUListenerBase *_eventListener;
    struct AUListenerBase *_parameterListener;
    _Bool _removingObserverWithContext;
    struct OpaqueAudioComponentInstance *_audioUnit;
    _Bool _audioUnitIsOwned;
    AUV2BridgeBusArray *_inputBusses;
    AUV2BridgeBusArray *_outputBusses;
    AUParameterTree *_cachedParameterTree;
    struct unique_ptr<AUAudioUnitV2Bridge_Renderer, std::__1::default_delete<AUAudioUnitV2Bridge_Renderer>> _renderer;
    CDUnknownBlockType _MIDIOutputEventBlock;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3 context:(void *)arg4;
- (id)channelCapabilities;
- (id)parameterTree;
- (void)_createEventListenerQueue;
- (void)reset;
- (void)deallocateRenderResources;
- (_Bool)allocateRenderResourcesAndReturnError:(id *)arg1;
- (void)setMIDIOutputEventBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)MIDIOutputEventBlock;
- (CDUnknownBlockType)internalRenderBlock;
- (id)outputBusses;
- (id)inputBusses;
- (void)dealloc;
- (void)invalidateAudioUnit;
- (id)initWithAudioUnit:(struct OpaqueAudioComponentInstance *)arg1 description:(struct AudioComponentDescription)arg2;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned long)arg2 error:(id *)arg3;
- (void)init2;
- (void)_invalidateParameterTree;
- (void)_addOrRemoveParameterListeners:(_Bool)arg1;
- (long)enableBus:(unsigned long)arg1 scope:(unsigned long)arg2 enable:(_Bool)arg3;
- (void)_rebuildBusses:(unsigned long)arg1;
- (_Bool)_setElementCount:(unsigned long)arg1 count:(unsigned long)arg2 error:(id *)arg3;
- (_Bool)_elementCountWritable:(unsigned long)arg1;
- (unsigned long)_elementCount:(unsigned long)arg1;

@end
