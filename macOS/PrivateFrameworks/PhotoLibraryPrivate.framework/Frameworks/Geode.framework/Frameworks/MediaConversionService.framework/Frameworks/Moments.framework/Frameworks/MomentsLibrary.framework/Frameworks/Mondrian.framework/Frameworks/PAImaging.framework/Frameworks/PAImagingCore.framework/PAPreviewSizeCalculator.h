//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PAPreviewSizeCalculator : NSObject
{
    long long _calculatorVersion;
}

+ (long long)latestCalculatorVersion;
+ (int)microRasterFormat:(id)arg1;
+ (struct CGSize)microRasterSize:(id)arg1;
+ (struct CGSize)calculateLatestSizeForVersion:(id)arg1 imageStyle:(unsigned short)arg2;
+ (id)imageSizePolicyForVersion:(id)arg1 imageStyle:(unsigned short)arg2;
+ (struct CGSize)databaseSizeForVersion:(id)arg1 imageStyle:(unsigned short)arg2;
+ (struct CGSize)calculateSizeForVersion:(id)arg1 imageStyle:(unsigned short)arg2;
+ (struct CGSize)calculateSizeForVersion:(id)arg1 imageStyle:(unsigned short)arg2 outputScale:(double *)arg3;
+ (id)latestCalculatorForVersion:(id)arg1;
+ (id)calculatorForVersion:(id)arg1;
- (id)imageSizePolicyForStyle:(unsigned short)arg1;
- (struct CGSize)databaseSizeForImageStyle:(unsigned short)arg1 imageProxyState:(id)arg2;
- (struct CGSize)_unrotatedProcessedSize:(id)arg1;
- (int)microRasterFormat;
- (long long)calculatorVersion;
- (struct CGSize)microRasterSize:(id)arg1;
- (struct CGSize)calculateSizeForImageStyle:(unsigned short)arg1 description:(id)arg2 outputScale:(double *)arg3;
- (struct CGSize)calculateSizeForImageStyle:(unsigned short)arg1 description:(id)arg2;
- (id)initWithCalculatorVersion:(long long)arg1;
- (id)init;

@end

