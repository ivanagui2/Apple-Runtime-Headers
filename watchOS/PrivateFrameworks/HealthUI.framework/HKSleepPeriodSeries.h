//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKGraphSeries.h>

@class HKStrokeStyle, NSArray;

@interface HKSleepPeriodSeries : HKGraphSeries
{
    HKStrokeStyle *_strokeStyle;
    HKStrokeStyle *_tiledStrokeStyle;
    NSArray *_defaultFillStyles;
    NSArray *_highlightedFillStyles;
    HKStrokeStyle *_goalLineStokeStyle;
    CDUnknownBlockType _startOfDayTransform;
    struct CGSize _cornerRadii;
}

@property(copy, nonatomic) CDUnknownBlockType startOfDayTransform; // @synthesize startOfDayTransform=_startOfDayTransform;
@property(copy, nonatomic) HKStrokeStyle *goalLineStokeStyle; // @synthesize goalLineStokeStyle=_goalLineStokeStyle;
@property(copy, nonatomic) NSArray *highlightedFillStyles; // @synthesize highlightedFillStyles=_highlightedFillStyles;
@property(copy, nonatomic) NSArray *defaultFillStyles; // @synthesize defaultFillStyles=_defaultFillStyles;
@property(copy, nonatomic) HKStrokeStyle *tiledStrokeStyle; // @synthesize tiledStrokeStyle=_tiledStrokeStyle;
@property(copy, nonatomic) HKStrokeStyle *strokeStyle; // @synthesize strokeStyle=_strokeStyle;
@property(nonatomic) struct CGSize cornerRadii; // @synthesize cornerRadii=_cornerRadii;
- (void).cxx_destruct;
- (id)stringFromTimeSinceNoon:(id)arg1;
- (void)_addAnnotationForValue:(float)arg1;
- (_Bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (_Bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (float)_maximumYForCoordinate:(id)arg1;
- (float)_minimumYForCoordinate:(id)arg1;
- (_Bool)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect)arg1 blockCoordinate:(id)arg2;
- (void)_assertCoordinateCompatibility:(id)arg1;
- (float)yAxisDifferenceToPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (float)xAxisDistanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (float)distanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_48c31d0d)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (void)_drawPaths:(id)arg1 withFillStyles:(id)arg2 strokeStyle:(id)arg3 axisRect:(struct CGRect)arg4 context:(struct CGContext *)arg5;
- (void)_drawGoalLinePath:(id)arg1 context:(struct CGContext *)arg2;
- (void)_drawWithBlockCoordinates:(id)arg1 visibleBarCount:(int)arg2 pointTransform:(struct CGAffineTransform)arg3 context:(struct CGContext *)arg4 axisRect:(struct CGRect)arg5;
- (float)barWidthForVisibleBarCount:(int)arg1 axisRect:(struct CGRect)arg2 minimumSpacing:(float)arg3;
- (int)_visibleBarCountWithZoomLevelConfiguration:(id)arg1;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;
- (_Bool)supportsMultiTouchSelection;
- (_Bool)shouldInvertAxis;

@end

