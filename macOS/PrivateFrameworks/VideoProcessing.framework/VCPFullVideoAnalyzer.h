//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSMutableDictionary, VCPVideoActivityDescriptor;

@interface VCPFullVideoAnalyzer : VCPVideoAnalyzer
{
    struct EncodeAnalysis *_encodeAnalysis;
    struct PreEncodeAnalysis *_preencodeAnalysis;
    struct ObstructionAnalysis *_obstructionAnalysis;
    struct SceneAnalysis *_sceneAnalysis;
    struct MotionFilter *_motionFilter;
    struct MetaDataAnalysis *_metadataAnalysis;
    struct IrisAnalysis *_irisAnalysis;
    struct FrameBuffer _frameBuffer;
    BOOL _isTimelapse;
    BOOL _isIris;
    BOOL _isSlowMo;
    int _orientation;
    BOOL _finalized;
    BOOL _hasInterestingScene;
    NSMutableDictionary *_privateResults;
    VCPVideoActivityDescriptor *_videoActivityDescriptor;
}

@property(readonly) VCPVideoActivityDescriptor *videoActivityDescriptor; // @synthesize videoActivityDescriptor=_videoActivityDescriptor;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reviseFrameTrackScore:(struct Frame *)arg1 saliencyRegions:(id)arg2;
- (void)setNextCaptureFrame:(struct __CVBuffer *)arg1;
- (float)getSceneSwichFrequency;
- (int)addResult:(struct __CFArray *)arg1 to:(id)arg2 forKey:(id)arg3 optional:(BOOL)arg4;
- (int)addSceneAnalysisResult:(id)arg1 to:(id)arg2 optional:(BOOL)arg3;
- (id)privateResults;
- (id)results;
- (int)process:(int)arg1;
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;
- (void)prepareVideoAnalysisByScenes:(id)arg1;
- (int)seedAnalyzersWithPixelBuffer:(struct __CVBuffer *)arg1 startTime:(CDStruct_1b6d18a9)arg2;
- (void)dealloc;
- (id)initWithVideoTrack:(id)arg1 withMetaOrientation:(id)arg2 withPrivateResults:(id)arg3 isTimelapse:(BOOL)arg4 isIris:(BOOL)arg5 irisPhotoOffsetSec:(float)arg6 irisPhotoExposureSec:(float)arg7 slowMoRate:(float)arg8;

@end
