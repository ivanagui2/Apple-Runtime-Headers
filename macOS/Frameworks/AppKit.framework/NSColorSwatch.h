//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSDraggingSource.h"

@class NSLayoutConstraint, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface NSColorSwatch : NSView <NSDraggingSource>
{
    id colorPanel;
    long long mousedColor;
    NSMutableArray *_colors;
    long long currentHighlight;
    long long focusedColor;
    long long numRowsToToggleVisible;
    long long draggedColorIndex;
    BOOL _moveDraggedColor;
    NSLayoutConstraint *_currentHeightConstraint;
}

+ (void)initialize;
- (void)dealloc;
- (id)storeColorPanel:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)color;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)_handleDrag:(id)arg1;
- (void)favoriteColorsDidChange:(id)arg1;
- (void)readColors;
- (BOOL)getSavedNumVisibleRows:(long long *)arg1;
- (void)saveNumVisibleRows;
- (double)swatchWidth;
- (id)highlightColor:(long long)arg1;
- (void)setFocusedColorChipIndex:(long long)arg1;
- (BOOL)drawColor:(long long)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)performClick:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveInDirection:(struct CGPoint)arg1;
- (void)setKeyboardFocusRingNeedsDisplayIfNeededInRect:(struct CGRect)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)_windowChangedKeyState;
- (struct CGRect)focusedSwatchRect;
- (struct CGRect)rectOfSwatchInteriorAtIndex:(long long)arg1;
- (BOOL)_isShowingKeyboardFocus;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setColors:(id)arg1;
- (void)_setAllowInteractiveHeightChanges:(BOOL)arg1;
- (double)_currentHeightConstraintConstant;
- (void)_setCurrentHeightConstraintConstant:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;
- (id)_reallocColors:(long long)arg1;
- (void)_constrainColorIndexToVisibleBounds:(long long *)arg1 dirtyIfNeeded:(BOOL)arg2;
- (long long)numRowsToToggleVisible;
- (void)markNumRowsToToggleVisible;
- (void)setNumRowsToToggleVisible:(long long)arg1;
- (long long)numberOfVisibleCols;
- (long long)numberOfVisibleRows;
- (double)heightForNumberOfVisibleRows:(long long)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (double)newLegalColorSwatchHeightFromHeight:(double)arg1;
- (struct CGRect)frameInBaseCoordinates;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
