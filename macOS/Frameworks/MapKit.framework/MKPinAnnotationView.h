//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKAnnotationView.h>

@class MKImageView, NSColor;

@interface MKPinAnnotationView : MKAnnotationView
{
    MKImageView *_shadowView;
    NSColor *_pinTintColor;
    id <_MKPinAnnotationViewDelegate> _delegate;
    int _state;
    BOOL _animatesDrop;
}

+ (struct CGPoint)_rightCalloutOffset;
+ (struct CGPoint)_leftCalloutOffset;
+ (struct CGPoint)_calloutOffset;
+ (struct CGPoint)_shadowAnchorPoint;
+ (struct CGPoint)_perceivedAnchorPoint;
+ (id)_shadowImage;
+ (id)_reuseIdentifier;
+ (id)_pinsWithMapType:(unsigned long long)arg1 mapDisplayStyle:(CDStruct_51745937)arg2 pinColor:(id)arg3;
+ (id)_imageForState:(long long)arg1 mapType:(unsigned long long)arg2 displayStyle:(unsigned long long)arg3 pinColor:(id)arg4;
+ (id)_imageForLayer:(long long)arg1 state:(long long)arg2 mapType:(unsigned long long)arg3;
+ (id)_dropBounceAnimation;
+ (id)_bounceAnimation;
+ (struct CGRect)_pinFrameForPosition:(struct CGPoint)arg1;
+ (id)purplePinColor;
+ (id)greenPinColor;
+ (id)redPinColor;
+ (struct CGSize)_perceivedSize;
+ (Class)layerClass;
@property(nonatomic, setter=_setDelegate:) __weak id <_MKPinAnnotationViewDelegate> _delegate; // @synthesize _delegate;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (int)_state;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)_liftDidEnd:(id)arg1;
- (void)_liftBeforeDropDidEnd:(id)arg1;
- (void)_jump;
- (void)_dropAfterDraggingDidEnd:(id)arg1;
- (void)_liftForDraggingAfterBounceAnimated:(BOOL)arg1;
- (void)_liftForDraggingAnimated:(BOOL)arg1;
- (void)setDragState:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)setDragState:(unsigned long long)arg1;
- (void)_dropAfterDraggingAndRevertPosition:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_dropFromDistance:(double)arg1 maxDistance:(double)arg2 withDelay:(double)arg3;
- (id)_bounceAnimation:(BOOL)arg1 withDelay:(double)arg2 addToLayer:(BOOL)arg3;
- (void)_stopDropAnimationAndDropToPosition;
- (void)_cleanupAfterPinDropAnimation;
- (void)_stopDrop;
- (void)_removeAllAnimations;
- (void)_didUpdatePosition;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)_updateShadowLayer;
- (void)_setRotationRadians:(double)arg1 withAnimation:(id)arg2;
- (void)_invalidateImage;
- (id)_pinJumpImages;
- (id)_pinBounceImages;
- (id)_floatingImage;
- (id)_highlightedImage;
- (id)_image;
- (id)_pins;
- (id)description;
- (void)_setMapDisplayStyle:(CDStruct_51745937)arg1;
- (void)_setMapType:(unsigned long long)arg1;
- (struct NSEdgeInsets)alignmentRectInsets;
- (struct CGRect)_significantBounds;
@property(nonatomic) BOOL animatesDrop;
@property(retain) NSColor *pinTintColor;
@property(nonatomic) unsigned long long pinColor;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (struct CGPoint)_draggingDropOffset;

@end
