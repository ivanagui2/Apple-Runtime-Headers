//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTouchBarItemOverlay.h"

#import "TouchBarsAndItems.h"

@interface NSTouchBarItemOverlay (ViewBridge) <TouchBarsAndItems>
+ (id)overlayForIdentifier:(id)arg1;
- (void)swizzledHide;
- (void)swizzledShowWithOptions:(id)arg1;
- (void)removeViewServiceTouchBarControllerObservers;
- (void)addViewServiceTouchBarControllerObservers;
- (id)_viewServiceTouchBarControllerIdentifier;
- (void)setViewServiceTouchBarControllerIdentifier:(id)arg1;
- (id)viewServiceTouchBarControllerIdentifier;
- (void)swizzledDealloc;
@end
