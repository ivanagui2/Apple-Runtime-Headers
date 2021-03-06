//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKEditOptionContainerView-Protocol.h>

@class NSMutableDictionary, NSString, UIImage;

@interface NTKCurvedPickerView : UIView <NTKEditOptionContainerView>
{
    NSMutableDictionary *_sideViews;
    unsigned long long _activeSide;
    double _currentFraction;
    _Bool _interior;
    double _circleRadius;
    double _centerAngle;
    struct CGPoint _circleCenter;
}

@property(readonly, nonatomic) struct CGPoint circleCenter; // @synthesize circleCenter=_circleCenter;
@property(readonly, nonatomic) _Bool interior; // @synthesize interior=_interior;
@property(readonly, nonatomic) double centerAngle; // @synthesize centerAngle=_centerAngle;
@property(readonly, nonatomic) double circleRadius; // @synthesize circleRadius=_circleRadius;
- (void).cxx_destruct;
- (double)_alphaForIndex:(unsigned long long)arg1;
- (double)_angleForIndex:(unsigned long long)arg1;
- (struct CGAffineTransform)_transformForAngle:(double)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_setCurrentFraction:(double)arg1;
- (void)transitionToFraction:(double)arg1 fromSideAtIndex:(unsigned long long)arg2 toSideAtIndex:(unsigned long long)arg3;
- (void)transitionToSideAtIndex:(unsigned long long)arg1;
- (void)enumerateSideViewsWithBlock:(CDUnknownBlockType)arg1;
- (id)viewForSideAtIndex:(unsigned long long)arg1;
- (void)setView:(id)arg1 forSideAtIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long numberOfVisibleSides;
@property(readonly, nonatomic) unsigned long long numberOfSides;
@property(retain, nonatomic) UIImage *maskImage;
- (void)setCircleRadius:(double)arg1 centerAngle:(double)arg2 circleCenter:(struct CGPoint)arg3 interior:(_Bool)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

