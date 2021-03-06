//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKit/NTKColoringView.h>

@interface NTKRingView : NTKColoringView
{
    _Bool _showsRingsBackground;
    float _ringWidth;
    float _radius;
    float _fillFraction;
    float _ringAnimationDelta;
    float _appearanceAnimationProgress;
}

@property(nonatomic) _Bool showsRingsBackground; // @synthesize showsRingsBackground=_showsRingsBackground;
@property(nonatomic) float appearanceAnimationProgress; // @synthesize appearanceAnimationProgress=_appearanceAnimationProgress;
@property(nonatomic) float ringAnimationDelta; // @synthesize ringAnimationDelta=_ringAnimationDelta;
@property(nonatomic) float fillFraction; // @synthesize fillFraction=_fillFraction;
@property(nonatomic) float radius; // @synthesize radius=_radius;
@property(nonatomic) float ringWidth; // @synthesize ringWidth=_ringWidth;
- (void)_drawRingWithRadius:(float)arg1 fillFraction:(float)arg2 alpha:(float)arg3;
- (void)_drawFillFractionRings;
- (void)_drawBackgroundRings;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

