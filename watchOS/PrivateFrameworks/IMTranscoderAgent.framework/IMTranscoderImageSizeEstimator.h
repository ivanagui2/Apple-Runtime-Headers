//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMTranscoderImageSizeEstimator : NSObject
{
    struct CGSize _originalSize;
    double _normalizedInputFactor;
}

+ (id)newEstimatorWithURL:(id)arg1 uti:(id)arg2 imageSource:(struct CGImageSource *)arg3;
- (unsigned int)estimatedSizeForOutputUTI:(id)arg1 maximumDimension:(int)arg2 quality:(double)arg3;
- (double)_estimatedBytesPerPixelForJPEGQuality:(double)arg1;
- (double)_normalizedInputFactorForUTI:(id)arg1 bytesPerPixel:(double)arg2;
- (double)_nominalBytesPerPixelForUTI:(id)arg1;
- (struct CGSize)_newSizeForMaximumDimension:(int)arg1 originalSize:(struct CGSize)arg2;
- (id)initWithUTI:(id)arg1 originalSize:(struct CGSize)arg2 fileSize:(unsigned int)arg3;
- (id)initWithUTI:(id)arg1 imageSource:(struct CGImageSource *)arg2;

@end
