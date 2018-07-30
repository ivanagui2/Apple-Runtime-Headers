//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, VCPFullVideoAnalyzer, VCPSceneChangeAnalyzer, VCPVideoFaceMeshAnalyzer, VCPVideoFacePoseAnalyzer, VCPVideoFullFaceDetector;

@interface VCPCaptureAnalysisSession : NSObject
{
    unsigned long long _analysisTypes;
    VCPVideoFacePoseAnalyzer *_poseAnalyzer;
    VCPVideoFaceMeshAnalyzer *_meshAnalyzer;
    VCPFullVideoAnalyzer *_videoAnalysis;
    VCPVideoFullFaceDetector *_faceDetector;
    VCPSceneChangeAnalyzer *_sceneChangeAnalyzer;
    struct Rotator *_rotator;
    struct Rotator *_rotatorForFacePose;
    struct CGAffineTransform _preferredTransform;
    float _focalLengthInPixels;
    int _rotationAngleForFacePose;
    int _preferredAngle;
}

+ (id)analyzerForAnalysisTypes:(unsigned long long)arg1 withPreferredTransform:(struct CGAffineTransform)arg2 properties:(id)arg3;
- (void).cxx_destruct;
@property(readonly) NSDictionary *aggregatedResults;
- (BOOL)finalizeAnalysis;
- (id)analyzePixelBuffer:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 properties:(id)arg4 error:(id *)arg5;
-     // Error parsing type: {?=[4]}84@0:8{?=[4]}16i80, name: rotateTransform:byAngle:
- (struct CGAffineTransform)transformForAngle:(int)arg1 pixelBuffer:(struct __CVBuffer *)arg2;
- (struct CGAffineTransform)flipTransform:(struct CGAffineTransform)arg1;
- (void)dealloc;
- (BOOL)updatePreferredTransform:(const struct CGAffineTransform *)arg1 properties:(id)arg2;
- (id)initWithAnalysisTypes:(unsigned long long)arg1 withPreferredTransform:(struct CGAffineTransform)arg2 withFocalLengthInPixels:(float)arg3;
- (id)init;

@end
