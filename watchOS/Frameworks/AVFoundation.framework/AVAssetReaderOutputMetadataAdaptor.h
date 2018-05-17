//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAssetReaderOutputAdaptor.h"

@class AVAssetReaderOutputMetadataAdaptorInternal, AVAssetReaderTrackOutput;

@interface AVAssetReaderOutputMetadataAdaptor : NSObject <AVAssetReaderOutputAdaptor>
{
    AVAssetReaderOutputMetadataAdaptorInternal *_internal;
}

+ (id)assetReaderOutputMetadataAdaptorWithAssetReaderTrackOutput:(id)arg1;
- (id)nextTimedMetadataGroup;
@property(readonly, nonatomic) AVAssetReaderTrackOutput *assetReaderTrackOutput;
- (long)addExtractionForOutput:(id)arg1 figAssetReader:(struct OpaqueFigAssetReader *)arg2 options:(id)arg3 withOutputExtactionID:(int *)arg4;
- (void)finalize;
- (void)dealloc;
- (id)initWithAssetReaderTrackOutput:(id)arg1;
- (id)init;

@end
