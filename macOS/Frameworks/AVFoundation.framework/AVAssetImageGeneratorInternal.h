//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVCustomVideoCompositorSession, AVVideoComposition, AVWeakReference, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetImageGeneratorInternal : NSObject
{
    AVWeakReference *weakReference;
    struct OpaqueFigAssetImageGenerator *generator;
    AVAsset *asset;
    BOOL appliesPreferredTrackTransform;
    struct CGSize maximumSize;
    NSString *apertureMode;
    CDStruct_1b6d18a9 requestedTimeToleranceBefore;
    CDStruct_1b6d18a9 requestedTimeToleranceAfter;
    NSMutableArray *requests;
    NSObject<OS_dispatch_queue> *requestsQueue;
    int nextRequestID;
    AVVideoComposition *videoComposition;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
    NSObject<OS_dispatch_queue> *imageRequestQueue;
    int cancelledRequestIDThreshold;
}

@end

