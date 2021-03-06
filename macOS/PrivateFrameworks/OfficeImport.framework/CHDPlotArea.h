//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CHDAxesCollection, CHDChartTypesCollection, OADGraphicProperties;

@interface CHDPlotArea : NSObject
{
    CHDChartTypesCollection *mChartTypes;
    CHDAxesCollection *mAxes;
    OADGraphicProperties *mGraphicProperties;
    _Bool mCategoryAxesReversed;
    _Bool mCategoryAxesReversedOverridden;
    _Bool mContainsVolumeStockType;
}

- (void).cxx_destruct;
- (id)description;
- (void)setContainsVolumeStockType:(_Bool)arg1;
- (_Bool)containsVolumeStockType;
- (void)setGraphicProperties:(id)arg1;
- (id)graphicProperties;
- (void)markSecondaryAxes;
- (_Bool)hasSecondaryYAxisDeleted;
- (_Bool)hasSecondaryAxis;
- (id)axes;
- (id)chartTypes;
- (id)initWithChart:(id)arg1;
- (_Bool)isCategoryAxesReversed:(_Bool)arg1;

@end

