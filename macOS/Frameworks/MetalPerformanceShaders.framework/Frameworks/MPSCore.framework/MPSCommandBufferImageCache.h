//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLCommandBuffer;

@interface MPSCommandBufferImageCache : NSObject
{
    // Error parsing type: ^{MPSDevice=^^?^{MPSDevice}@^{MPSDeviceFreeList}{atomic<MTLLibraryNode *>=A^{MTLLibraryNode}}[2[2[2{atomic<void *>=A^v}]]][563{MPSPixelCapabilities=b1b1b1b1b1b2b1b8}]^{MPSFunctionTable}{atomic<void *>=A^v}Ii{MPSGPUInfo=b8b8b8b16b4b20}[79{atomic<MPSLibrary *>=A^{MPSLibrary}}]}, name: _device
    id <MTLCommandBuffer> _cmdBuffer;
    long long _debugMode;
    struct HeapNode *_freeList[65];
    struct CacheFrame *_frameList;
    struct ResourceNode *_retainedResources;
    struct MPSAutoCache *_userCacheFrame;
    unsigned long long _minimumBin;
    unsigned long long _batchSize;
    BOOL _needsRetain;
    unsigned long long _totalAllocationBytes;
    unsigned long long _cacheDelay;
}

@property(nonatomic) unsigned long long batchSizeHint; // @synthesize batchSizeHint=_batchSize;
@property(readonly, nonatomic) id <MTLCommandBuffer> commandBuffer; // @synthesize commandBuffer=_cmdBuffer;
- (id)debugDescription;
- (void)releaseHeapBlock:(id)arg1;
- (id)newHeapBlock:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithCommandBuffer:(id)arg1;

@end

