//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface RCLayoutMetrics : NSObject <NSCopying>
{
    CDStruct_76b83881 _metricInfo;
    NSString *_label;
    double _hPresentedRecordMemoHeight;
}

+ (id)largeVerticalMetrics;
+ (id)normalVerticalMetrics;
+ (id)largeHorizontalMetrics;
+ (id)defaultMetrics;
- (void).cxx_destruct;
@property(nonatomic) double hPresentedRecordMemoHeight; // @synthesize hPresentedRecordMemoHeight=_hPresentedRecordMemoHeight;
- (void)setMetricInfo:(CDStruct_76b83881)arg1;
@property(readonly, nonatomic) double vDeltaLockAbsoluteTopToWaveformTop;
@property(readonly, nonatomic) double hDetailNavigationBarInset;
@property(readonly, nonatomic) double hTrimModeInset;
@property(readonly, nonatomic) double hDeltaAcousticAnnotationLabelToWaveformRight;
@property(readonly, nonatomic) double hDeltaTrimProgressInset;
@property(readonly, nonatomic) double hDeltaControlButtonsSpacing;
@property(readonly, nonatomic) double hDeltaAdditionalInsetFromWaveformEdge;
@property(readonly, nonatomic) _Bool hIsWaveformFlushToEdges;
@property(readonly, nonatomic) double vDeltaControlsTopToNavigationBottom;
@property(readonly, nonatomic) double vDeltaControlsBottomToBottom;
@property(readonly, nonatomic) double vDeltaDateBaselineToControlsTop;
@property(readonly, nonatomic) double vDeltaTitleBaselineToDateBaseline;
@property(readonly, nonatomic) double vDeltaTimeBaselineToTitleBaseline;
@property(readonly, nonatomic) double vDeltaWaveformToTimeBaseline;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithLabel:(id)arg1;

@end
