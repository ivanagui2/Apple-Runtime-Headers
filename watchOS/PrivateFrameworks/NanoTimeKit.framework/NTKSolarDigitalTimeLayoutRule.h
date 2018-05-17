//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKLayoutRule.h>

@interface NTKSolarDigitalTimeLayoutRule : NTKLayoutRule
{
    float _sunToTimeMinimumDistance;
    float _mininumY;
    float _maxinumY;
    struct CGRect _sunFrame;
}

@property(nonatomic) float maxinumY; // @synthesize maxinumY=_maxinumY;
@property(nonatomic) float mininumY; // @synthesize mininumY=_mininumY;
@property(nonatomic) float sunToTimeMinimumDistance; // @synthesize sunToTimeMinimumDistance=_sunToTimeMinimumDistance;
@property(nonatomic) struct CGRect sunFrame; // @synthesize sunFrame=_sunFrame;
- (struct CGRect)calculateLayoutFrameForBoundsSize:(struct CGSize)arg1;
- (_Bool)acceptTimeFrame:(struct CGRect)arg1 containingFrame:(struct CGRect)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
