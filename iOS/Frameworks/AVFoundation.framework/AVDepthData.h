//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCameraCalibrationData, AVDepthDataInternal, NSArray;

@interface AVDepthData : NSObject
{
    AVDepthDataInternal *_internal;
}

+ (id)_allSupportedDepthDataPixelFormatTypes;
+ (id)depthDataFromDictionaryRepresentation:(id)arg1 error:(id *)arg2;
+ (void)initialize;
- (struct __CVBuffer *)_copyPixelBufferRepresentationWithPixelFormatType:(unsigned int)arg1;
- (struct __CFString *)auxiliaryImageType;
- (struct CGImageMetadata *)copyAuxiliaryMetadata;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 depthMetadataDictionary:(id)arg2;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 auxiliaryMetadata:(struct CGImageMetadata *)arg2;
- (float)portraitScore;
- (_Bool)portraitScoreIsHigh;
- (id)depthBlurEffectRenderingParameters;
- (float)depthBlurEffectSimulatedAperture;
- (short)depthDataVersionMinor;
- (short)depthDataVersionMajor;
@property(readonly) AVCameraCalibrationData *cameraCalibrationData;
@property(readonly) long long depthDataAccuracy;
@property(readonly, getter=isDepthDataFiltered) _Bool depthDataFiltered;
@property(readonly) long long depthDataQuality;
@property(readonly) struct __CVBuffer *depthDataMap;
@property(readonly) unsigned int depthDataType;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id *)arg1;
@property(readonly) NSArray *availableDepthDataTypes;
- (id)depthDataByReplacingDepthDataMapWithPixelBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (id)depthDataByConvertingToDepthDataType:(unsigned int)arg1;
- (id)depthDataByApplyingExifOrientation:(unsigned int)arg1;
- (void)dealloc;
- (id)description;
- (id)debugDescription;

@end
