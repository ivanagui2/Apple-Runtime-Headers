//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TSReading/TSDPathSource.h>

#import "TSDMixing.h"
#import "TSDSmartPathSource.h"

@interface TSDScalarPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource>
{
    int mType;
    double mScalar;
    struct CGSize mNaturalSize;
}

+ (id)pathSourceWithType:(int)arg1 scalar:(double)arg2 naturalSize:(struct CGSize)arg3;
+ (id)chevronWithScalar:(double)arg1 naturalSize:(struct CGSize)arg2;
+ (id)regularPolygonWithScalar:(double)arg1 naturalSize:(struct CGSize)arg2;
+ (id)roundedRectangleWithScalar:(double)arg1 naturalSize:(struct CGSize)arg2;
+ (id)rectangleWithNaturalSize:(struct CGSize)arg1;
@property(nonatomic) struct CGSize naturalSize; // @synthesize naturalSize=mNaturalSize;
@property(nonatomic) double scalar; // @synthesize scalar=mScalar;
@property(nonatomic) int type; // @synthesize type=mType;
- (struct CGPoint)p_getControlKnobPointForChevron;
- (void)p_setControlKnobPointForChevron:(struct CGPoint)arg1;
- (struct CGPoint)p_getControlKnobPointForRegularPolygon;
- (void)p_setControlKnobPointForRegularPolygon:(struct CGPoint)arg1;
- (struct CGPoint)p_getControlKnobPointForRoundedRect;
- (void)p_setControlKnobPointForRoundedRect:(struct CGPoint)arg1;
- (struct CGPath *)p_newChevronPath;
- (struct CGPath *)p_newRegularPolygonPath;
- (struct CGPath *)p_newRoundedRectPath;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (struct CGSize)scaleFactorForInscribedRectangle;
- (_Bool)isCircular;
- (_Bool)isRectangular;
- (id)bezierPathWithoutFlips;
- (id)valueForSetSelector:(SEL)arg1;
- (struct CGPath *)newFeedbackPathForKnob:(unsigned long long)arg1;
- (id)getFeedbackStringForKnob:(unsigned long long)arg1;
- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2;
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;
@property(readonly) unsigned long long numberOfControlKnobs;
@property(readonly, nonatomic) double maxScalar;
- (void)setScalarValue:(id)arg1;
- (void)scaleToNaturalSize:(struct CGSize)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithType:(int)arg1 scalar:(double)arg2 naturalSize:(struct CGSize)arg3;

@end
