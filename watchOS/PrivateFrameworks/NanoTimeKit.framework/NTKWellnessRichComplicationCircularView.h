//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKit/NTKRichComplicationCircularBaseView.h>

@class NSMutableArray, NTKRingsAndDotsView;

@interface NTKWellnessRichComplicationCircularView : NTKRichComplicationCircularBaseView
{
    NTKRingsAndDotsView *_ringsView;
    NSMutableArray *_ringsFillFractions;
    struct CGRect _prevLayoutBounds;
}

- (void).cxx_destruct;
- (void)_updateRingWithTemplate:(id)arg1;
- (void)_showEmptyViews;
- (void)_handleTemplate:(id)arg1 reason:(int)arg2;
- (void)layoutSubviews;
- (id)init;

@end

