//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <webrtc/WK_RTCVideoDecoder-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WK_RTCVideoDecoderH264 : NSObject <WK_RTCVideoDecoder>
{
    struct opaqueCMFormatDescription *_videoFormat;
    struct OpaqueCMMemoryPool *_memoryPool;
    struct OpaqueVTDecompressionSession *_decompressionSession;
    CDUnknownBlockType _callback;
    int _error;
}

- (void).cxx_destruct;
- (id)implementationName;
- (void)setVideoFormat:(struct opaqueCMFormatDescription *)arg1;
- (void)destroyDecompressionSession;
- (void)configureDecompressionSession;
- (int)resetDecompressionSession;
- (long long)releaseDecoder;
- (void)setError:(int)arg1;
- (void)setCallback:(CDUnknownBlockType)arg1;
- (long long)decode:(id)arg1 missingFrames:(BOOL)arg2 codecSpecificInfo:(id)arg3 renderTimeMs:(long long)arg4;
- (long long)startDecodeWithSettings:(id)arg1 numberOfCores:(int)arg2;
- (long long)startDecodeWithNumberOfCores:(int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

