//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class CALayer, _NSFullScreenModalStackController;

__attribute__((visibility("hidden")))
@interface _NSFullScreenModalDimmingWindow : NSPanel
{
    _NSFullScreenModalStackController *_stackController;
    CALayer *_rootLayer;
    CALayer *_dimLayer;
    CALayer *_windowSnapshotLayer;
    BOOL _isShowingDimmingLayer;
}

- (void)moveToSpace;
- (void)endPresentationWithIncomingWindowSnapshot:(id)arg1 startingFrame:(struct CGRect)arg2 forSendDocument:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)beginPresentationWithIncomingWindowSnapshot:(id)arg1 targetFrame:(struct CGRect)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_createDimLayerIfNeeded;
@property id <_NSFullScreenModalDimmingWindowDelegate> delegate;
- (void)_setWindowTag;
- (BOOL)_ignoreForFullScreenTransition;
- (BOOL)_shouldAutoIncSubLevel;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;
- (BOOL)_canMiniaturize;
- (BOOL)isMovable;
- (BOOL)_allowsExteriorResizing;
- (BOOL)_canBeSnappingTarget;
- (BOOL)_allowsSnapping;
- (BOOL)_shouldSnapWindowsClientSide;
- (BOOL)_shouldAutoDecSubLevel;
- (id)initWithStackController:(id)arg1;
- (void)dealloc;

@end
