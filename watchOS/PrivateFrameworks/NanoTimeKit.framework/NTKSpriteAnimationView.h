//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, NSArray, NSString;

@interface NTKSpriteAnimationView : UIView
{
    float _fps;
    int _frameCount;
    CALayer *_backgroundImageLayer;
    NSString *_artworkName;
    int _currentAnimationFrame;
    double _timePerFrame;
    NSArray *_layers;
    NSArray *_frames;
    _Bool _paused;
}

+ (id)_frameImagesForArtworkName:(id)arg1;
@property(readonly, nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
- (void).cxx_destruct;
- (void)setTintColors:(id)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)resume;
- (void)pause;
- (double)timeOffsetForSprite:(int)arg1;
- (id)contentsAnimation:(int)arg1;
- (void)_addAnimation:(id)arg1 atIndex:(int)arg2;
- (void)_applyLayerProperties:(id)arg1 atIndex:(int)arg2;
- (id)backgroundImage;
- (int)numberOfLayers;
- (void)_updateLayers;
- (void)_createLayers;
- (void)initializeUI;
- (void)initializeDefaults;
- (id)initWithFrame:(struct CGRect)arg1 artworkName:(id)arg2 fps:(float)arg3;

@end
