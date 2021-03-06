//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureStillImageOutputInternal, NSArray, NSDictionary;

@interface AVCaptureStillImageOutput : AVCaptureOutput
{
    AVCaptureStillImageOutputInternal *_internal;
    BOOL _stillImageStabilizationSupported;
    BOOL _automaticallyEnablesStillImageStabilizationWhenAvailable;
    BOOL _stillImageStabilizationActive;
    BOOL _highResolutionStillImageOutputEnabled;
}

+ (id)jpegStillImageNSDataRepresentation:(struct opaqueCMSampleBuffer *)arg1;
+ (id)new;
+ (void)initialize;
@property(nonatomic, getter=isHighResolutionStillImageOutputEnabled) BOOL highResolutionStillImageOutputEnabled; // @synthesize highResolutionStillImageOutputEnabled=_highResolutionStillImageOutputEnabled;
@property(readonly, nonatomic, getter=isStillImageStabilizationActive) BOOL stillImageStabilizationActive; // @synthesize stillImageStabilizationActive=_stillImageStabilizationActive;
@property(nonatomic) BOOL automaticallyEnablesStillImageStabilizationWhenAvailable; // @synthesize automaticallyEnablesStillImageStabilizationWhenAvailable=_automaticallyEnablesStillImageStabilizationWhenAvailable;
@property(readonly, nonatomic, getter=isStillImageStabilizationSupported) BOOL stillImageStabilizationSupported; // @synthesize stillImageStabilizationSupported=_stillImageStabilizationSupported;
- (BOOL)supportsVideoMaxFrameDurationForConnection:(id)arg1;
- (BOOL)supportsVideoMinFrameDurationForConnection:(id)arg1;
- (long long)defaultVideoFieldModeForConnection:(id)arg1;
- (BOOL)supportsVideoFieldModeForConnection:(id)arg1;
- (BOOL)supportsVideoOrientationForConnection:(id)arg1;
- (BOOL)supportsVideoMirroringForConnection:(id)arg1;
- (void)_handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 imageRequest:(id)arg2 error:(id)arg3;
- (void)_receiveSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)captureStillImageAsynchronouslyFromConnection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)configureAndInitiateCopyStillImageForRequest:(id)arg1;
@property(readonly, getter=isCapturingStillImage) BOOL capturingStillImage;
- (int)videoDecompressionRequirementForConnection:(id)arg1;
- (unsigned int)connectionUnitInputNumberForConnection:(id)arg1;
- (int)connectionGraphNodeForConnection:(id)arg1;
- (void)removeOutputUnitsForConnection:(id)arg1 fromGraph:(struct OpaqueCMIOGraph *)arg2 ofCaptureSession:(id)arg3;
- (BOOL)addOutputUnitsForConnection:(id)arg1 toGraph:(struct OpaqueCMIOGraph *)arg2 ofCaptureSession:(id)arg3 error:(id *)arg4;
- (BOOL)canAddConnectionForMediaType:(id)arg1;
- (id)connectionMediaTypes;
@property(readonly, nonatomic) NSArray *availableImageDataCodecTypes;
@property(readonly, nonatomic) NSArray *availableImageDataCVPixelFormatTypes;
@property(copy, nonatomic) NSDictionary *outputSettings;
- (void)_updateHighResMode;
- (void)_updateVideoDecompressorNodeForConnection:(id)arg1;
- (id)videoDecompressionSettingsForVideoConnection:(id)arg1;
- (id)_videoDecompressionSettings;
- (id)_deviceFromActiveDeviceInput;
- (void)dealloc;
- (id)init;

@end

