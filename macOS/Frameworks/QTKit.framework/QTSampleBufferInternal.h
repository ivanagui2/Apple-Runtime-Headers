//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface QTSampleBufferInternal : NSObject
{
    struct opaqueCMSampleBuffer *figSampleBuffer;
    struct OpaqueCMBlockBuffer *contiguousFigBlockBufferCache;
    CDStruct_a14ad952 *audioBufferListWith16ByteAlignmentStorage;
    CDStruct_a14ad952 *audioBufferListWithout16ByteAlignmentStorage;
    struct __CVBuffer *cvPixelBufferCache;
    long long sampleUseCount;
    int figSampleBufferLock;
}

@end
