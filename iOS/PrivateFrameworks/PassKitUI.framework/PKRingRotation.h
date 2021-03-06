//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PKRingArc, UIColor;

@interface PKRingRotation : NSObject
{
    PKRingArc *_startArc;
    PKRingArc *_endArc;
    NSArray *_ringArcs;
    UIColor *_lastRotationStartColor;
    UIColor *_lastRotationEndColor;
    NSString *_minValueSymbol;
    NSString *_maxValueSymbol;
    NSString *_inRingSymbol;
    NSArray *_ringArcViews;
    double _stickyValue;
}

@property(readonly, nonatomic) PKRingArc *endArc; // @synthesize endArc=_endArc;
@property(readonly, nonatomic) PKRingArc *startArc; // @synthesize startArc=_startArc;
@property(nonatomic) double stickyValue; // @synthesize stickyValue=_stickyValue;
@property(retain, nonatomic) NSArray *ringArcViews; // @synthesize ringArcViews=_ringArcViews;
@property(copy, nonatomic) NSString *inRingSymbol; // @synthesize inRingSymbol=_inRingSymbol;
@property(copy, nonatomic) NSString *maxValueSymbol; // @synthesize maxValueSymbol=_maxValueSymbol;
@property(copy, nonatomic) NSString *minValueSymbol; // @synthesize minValueSymbol=_minValueSymbol;
@property(copy, nonatomic) UIColor *lastRotationEndColor; // @synthesize lastRotationEndColor=_lastRotationEndColor;
@property(copy, nonatomic) UIColor *lastRotationStartColor; // @synthesize lastRotationStartColor=_lastRotationStartColor;
@property(retain, nonatomic) NSArray *ringArcs; // @synthesize ringArcs=_ringArcs;
- (void).cxx_destruct;
- (id)description;
- (id)lastCompletedArcForValue:(double)arg1;
- (id)arcForValue:(double)arg1;
- (_Bool)valueIsInRingRotation:(double)arg1;
- (double)arcLength;
- (double)arcMaxValue;
- (double)arcMinValue;
- (id)initWithRingArcs:(id)arg1;

@end

