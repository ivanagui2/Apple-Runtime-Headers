//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _MKMarkerStyle : NSObject
{
    UIColor *_markerColor;
    float _shadowAlpha;
    UIColor *_strokeColor;
    float _strokeWidth;
    UIColor *_glyphColor;
    UIImage *_glyphImage;
}

+ (id)markerStyleForTraitCollection:(id)arg1 state:(int)arg2 styleAttributes:(id)arg3;
@property(readonly, nonatomic) UIImage *glyphImage; // @synthesize glyphImage=_glyphImage;
@property(readonly, nonatomic) UIColor *glyphColor; // @synthesize glyphColor=_glyphColor;
@property(readonly, nonatomic) float strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(readonly, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(readonly, nonatomic) float shadowAlpha; // @synthesize shadowAlpha=_shadowAlpha;
@property(readonly, nonatomic) UIColor *markerColor; // @synthesize markerColor=_markerColor;
- (void).cxx_destruct;

@end

