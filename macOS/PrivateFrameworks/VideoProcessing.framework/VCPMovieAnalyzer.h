//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, NSMutableDictionary;

@interface VCPMovieAnalyzer : NSObject
{
    unsigned long long _requestedAnalyses;
    AVAsset *_avAsset;
    NSMutableDictionary *_analysis;
    BOOL _isSlowmo;
    BOOL _isShortMovie;
    BOOL _isTimelapse;
    BOOL _isIris;
    BOOL _irisFlash;
    float _irisPhotoOffsetSec;
    float _irisPhotoExposureSec;
    float _fpsRate;
    NSMutableDictionary *_privateResults;
    long long _status;
}

+ (id)movieForAsset:(id)arg1 withResources:(id)arg2;
+ (BOOL)canAnalyzeUndegraded:(id)arg1 withResources:(id)arg2;
@property(readonly) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)analyzeAsset:(CDUnknownBlockType)arg1;
- (int)analyzeVideoTrack:(id)arg1 start:(CDStruct_1b6d18a9)arg2 cancel:(CDUnknownBlockType)arg3;
- (int)analyzeVideoSegment:(id)arg1 timerange:(const CDStruct_e83c9415 *)arg2 cancel:(CDUnknownBlockType)arg3;
- (id)createVideoAnalyzer:(id)arg1;
- (id)createDecoderForTrack:(id)arg1 timerange:(const CDStruct_e83c9415 *)arg2;
- (int)performMetadataAnalysisWithCancelBlock:(CDUnknownBlockType)arg1;
- (id)initWithIrisAVAsset:(id)arg1 irisPhotoOffsetSec:(float)arg2 irisPhotoExposureSec:(float)arg3 irisFlashFired:(BOOL)arg4 forAnalysisTypes:(unsigned long long)arg5;
- (id)initWithAVAsset:(id)arg1 forAnalysisTypes:(unsigned long long)arg2 isIris:(BOOL)arg3;
- (id)initWithPHAsset:(id)arg1 existingAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3;
- (id)initWithPHAsset:(id)arg1 forAnalysisTypes:(unsigned long long)arg2;

@end
