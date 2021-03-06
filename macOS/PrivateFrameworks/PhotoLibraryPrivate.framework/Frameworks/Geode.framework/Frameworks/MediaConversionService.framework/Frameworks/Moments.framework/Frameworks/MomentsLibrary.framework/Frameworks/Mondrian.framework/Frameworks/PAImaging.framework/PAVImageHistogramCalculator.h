//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PAImaging/PAHistogramCalculator.h>

@interface PAVImageHistogramCalculator : PAHistogramCalculator
{
}

- (void)_accumulatePartialHistograms:(const struct HistogramRGBL *)arg1 count:(unsigned long long)arg2 intoHistogram:(id)arg3;
- (id)_computeRGBLHistogramWithImageRGBA32f:(id)arg1 parameters:(id)arg2;
- (id)_computeRGBLHistogramWithImageBGRA8u:(id)arg1;
- (id)_histogramWithHistogramRGBL:(const struct HistogramRGBL *)arg1 parameters:(id)arg2 imageSize:(struct PFIntSize_st)arg3;
- (id)_histogramWithHistogramRGBL8:(const struct HistogramRGBL *)arg1 imageSize:(struct PFIntSize_st)arg2;
- (BOOL)_computeRGBLHistogram:(id)arg1 fromBufferRGBA32f:(id)arg2 into:(struct HistogramRGBL *)arg3 flags:(unsigned int)arg4;
- (BOOL)_computeRGBLHistogramFromBufferBGRX8u:(id)arg1 into:(struct HistogramRGBL *)arg2 flags:(unsigned int)arg3;
- (id)_computeRGBLHistogramFromBufferRGBA32f:(id)arg1 parameters:(id)arg2;
- (id)computeRGBLHistogramFromBufferBGRX8u:(id)arg1;
- (id)_computeRGBLHistogramFromTextureRGBA32f:(id)arg1 parameters:(id)arg2 roi:(struct PFIntRect_st)arg3;
- (id)_computeRGBLHistogramFromTextureBGRA8u:(id)arg1 roi:(struct PFIntRect_st)arg2;
- (id)computeRGBLHistogramFromImage:(id)arg1 parameters:(id)arg2;
- (id)computeRGBLHistogramFromTexture:(id)arg1 parameters:(id)arg2 roi:(struct PFIntRect_st)arg3;

@end

