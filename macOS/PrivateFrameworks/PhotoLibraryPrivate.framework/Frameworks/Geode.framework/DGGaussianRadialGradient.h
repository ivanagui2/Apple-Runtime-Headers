//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIColor, CIVector, NSNumber;

@interface DGGaussianRadialGradient : CIFilter
{
    CIVector *inputCenter;
    CIColor *inputColor0;
    CIColor *inputColor1;
    NSNumber *inputRadius;
    NSNumber *inputSoftness;
}

+ (id)filterWithName:(id)arg1;
+ (void)initialize;
- (id)outputImage;

@end

