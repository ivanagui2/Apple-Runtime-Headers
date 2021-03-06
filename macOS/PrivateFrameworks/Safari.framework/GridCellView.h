//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <Safari/NSAccessibilityElement-Protocol.h>
#import <Safari/NSTextFieldDelegate-Protocol.h>

@class GridViewImageView, NSArray, NSMenu, NSPressGestureRecognizer, NSString, NSTextField;
@protocol GridCellViewDelegate;

__attribute__((visibility("hidden")))
@interface GridCellView : NSView <NSTextFieldDelegate, NSAccessibilityElement>
{
    NSArray *_constraints;
    BOOL _needsAccessoryViewConstraintUpdate;
    NSString *_previousText;
    NSPressGestureRecognizer *_longMousePressRecognizer;
    NSMenu *_menu;
    id _editingTerminationEventMonitor;
    BOOL _redrawsTextContentOnlyOnNeedsDisplay;
    BOOL _allowsEditing;
    id <GridCellViewDelegate> _delegate;
    GridViewImageView *_imageView;
    NSTextField *_textField;
    NSView *_accessoryView;
}

+ (BOOL)requiresConstraintBasedLayout;
+ (double)textFieldFirstBaselineBottomInset;
+ (double)imageViewBottomInset;
+ (double)imageViewHorizontalInset;
+ (double)heightExceedingWidth;
+ (struct CGSize)minimumCellViewSize;
+ (struct CGSize)maximumCellViewSize;
@property(nonatomic) BOOL allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(retain, nonatomic) NSView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) BOOL redrawsTextContentOnlyOnNeedsDisplay; // @synthesize redrawsTextContentOnlyOnNeedsDisplay=_redrawsTextContentOnlyOnNeedsDisplay;
@property(readonly, nonatomic) NSTextField *textField; // @synthesize textField=_textField;
@property(readonly, nonatomic) GridViewImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <GridCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didRecognizeImmediateAction:(id)arg1;
- (BOOL)accessibilityPerformShowMenu;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRoleDescription;
- (id)accessibilityChildren;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)accessibilityRole;
- (double)_shadowBlurRadius;
- (struct CGSize)_shadowOffset;
- (id)_shadowColor;
@property(readonly, nonatomic, getter=isAccessoryViewVisible) BOOL accessoryViewVisible;
@property(readonly, nonatomic) struct CGSize accessoryViewInset;
@property(nonatomic) BOOL drawsImageBorder;
@property(nonatomic) long long highlightState;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)_hideMenus;
- (void)_endEditing;
- (void)_unregisterForEditingTermination;
- (void)_registerForEditingTermination;
- (void)beginEditing;
@property(readonly, nonatomic, getter=isEditing) BOOL editing;
- (void)_setUpAccessoryViewConstraints;
- (void)_setUpConstraints;
- (void)_applyCustomViewAttributes;
- (void)_setUpContentViews;
- (id)_gridView;
- (void)_activate;
- (void)keyDown:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)drawFocusRingMask;
- (struct CGRect)focusRingMaskBounds;
- (void)cancelOperation:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (id)hitTest:(struct CGPoint)arg1;
- (void)updateConstraints;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setAccessoryViewVisible:(BOOL)arg1 animated:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

