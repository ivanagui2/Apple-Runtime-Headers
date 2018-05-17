//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIBezierPath, UIScreen;

__attribute__((visibility("hidden")))
@interface _UIScreenBoundingPathUtilities : NSObject
{
    UIScreen *_screen;
    UIBezierPath *_pathPortrait;
    UIBezierPath *_pathPortraitUpsideDown;
    UIBezierPath *_pathLandscapeLeft;
    UIBezierPath *_pathLandscapeRight;
}

+ (id)boundingPathUtilitiesForScreen:(id)arg1;
@property(retain, nonatomic, getter=_pathLandscapeRight, setter=_setPathLandscapeRight:) UIBezierPath *pathLandscapeRight; // @synthesize pathLandscapeRight=_pathLandscapeRight;
@property(retain, nonatomic, getter=_pathLandscapeLeft, setter=_setPathLandscapeLeft:) UIBezierPath *pathLandscapeLeft; // @synthesize pathLandscapeLeft=_pathLandscapeLeft;
@property(retain, nonatomic, getter=_pathPortraitUpsideDown, setter=_setPathPortraitUpsideDown:) UIBezierPath *pathPortraitUpsideDown; // @synthesize pathPortraitUpsideDown=_pathPortraitUpsideDown;
@property(retain, nonatomic, getter=_pathPortrait, setter=_setPathPortrait:) UIBezierPath *pathPortrait; // @synthesize pathPortrait=_pathPortrait;
@property(nonatomic, getter=_screen) __weak UIScreen *screen; // @synthesize screen=_screen;
- (void).cxx_destruct;
- (struct CGRect)_largestInscribedRectInScreenBounds:(struct CGRect)arg1 coordinateSpaceBoundsInScreen:(struct CGRect)arg2 withCenterInScreen:(struct CGPoint)arg3 aspectRatio:(float)arg4;
- (struct CGRect)_largestInscribedRectInBoundingPathWithCenter:(struct CGPoint)arg1 aspectRatio:(float)arg2 inCoordinateSpace:(id)arg3;
- (struct CGRect)_inscribedRectInScreenBounds:(struct CGRect)arg1 coordinateSpaceBoundsInScreen:(struct CGRect)arg2 byInsettingRectInScreen:(struct CGRect)arg3 onEdges:(unsigned int)arg4;
- (struct CGRect)_inscribedRectInBoundingPathByInsettingRect:(struct CGRect)arg1 onEdges:(unsigned int)arg2 inCoordinateSpace:(id)arg3 withOptions:(unsigned int)arg4;
- (id)_bezierPathForCurrentOrientation;
- (id)initWithScreen:(id)arg1;

@end
