//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PDImageDecoder.h>

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;

@interface PDImageIODecoder : PDImageDecoder
{
    NSObject<OS_dispatch_queue> *_pendingRequestQueue;
    NSObject<OS_dispatch_queue> *_activeRequestQueue;
    NSObject<OS_dispatch_semaphore> *_concurrentRequestSemaphore;
}

+ (id)sharedDecoder;
- (void).cxx_destruct;
- (void)cancelDecodeRequestForID:(unsigned long long)arg1;
- (unsigned long long)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 maxSideLength:(long long)arg3 applyOrientationTransform:(_Bool)arg4 waitUntilComplete:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (id)init;

@end
