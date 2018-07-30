//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/MTLIndirectCommandBufferDescriptor.h>

@interface MTLIndirectCommandBufferDescriptorInternal : MTLIndirectCommandBufferDescriptor
{
    unsigned long long _commandTypes;
    _Bool _inheritPipelineState;
    _Bool _inheritBuffers;
    unsigned long long _maxVertexBufferBindCount;
    unsigned long long _maxFragmentBufferBindCount;
    unsigned long long _maxKernelBufferBindCount;
}

- (void)setMaxFragmentBufferBindCount:(unsigned long long)arg1;
- (unsigned long long)maxFragmentBufferBindCount;
- (void)setMaxVertexBufferBindCount:(unsigned long long)arg1;
- (unsigned long long)maxVertexBufferBindCount;
- (void)setInheritBuffers:(_Bool)arg1;
- (_Bool)inheritBuffers;
- (void)setCommandTypes:(unsigned long long)arg1;
- (unsigned long long)commandTypes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
