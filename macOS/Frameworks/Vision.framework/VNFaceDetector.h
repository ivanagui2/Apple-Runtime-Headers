//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNDetector.h>

@class VNFaceBBoxAligner;

__attribute__((visibility("hidden")))
@interface VNFaceDetector : VNDetector
{
    struct shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector> mFaceDetectorImpl;
    VNFaceBBoxAligner *mBBoxAlignerImpl;
}

+ (BOOL)shouldDumpDebugIntermediates;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)purgeIntermediates;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (struct __CVBuffer *)newCropAroundBounds:(struct CGRect)arg1 extendBoundsWithinImageBy:(float)arg2 fromImageBuffer:(id)arg3 error:(id *)arg4;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end
