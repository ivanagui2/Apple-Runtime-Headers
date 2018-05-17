//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HKAxisLabelDimension.h"

@class NSNumberFormatter, NSString;

@interface HKAxisLabelDimensionScalar : NSObject <HKAxisLabelDimension>
{
    NSNumberFormatter *_formatter;
    NSString *_negativeZeroString;
}

+ (int)_fractionDigitsForStep:(float)arg1;
@property(retain, nonatomic) NSString *negativeZeroString; // @synthesize negativeZeroString=_negativeZeroString;
@property(retain, nonatomic) NSNumberFormatter *formatter; // @synthesize formatter=_formatter;
- (void).cxx_destruct;
- (id)stringForLocation:(id)arg1;
- (void)setStepSizeForLabels:(float)arg1;
- (float)ticksPerStepSize:(float)arg1;
- (float)niceStepSizeLargerThan:(float)arg1;
- (id)init;

@end
