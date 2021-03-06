//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <ControlCenterUIKit/UIGestureRecognizerDelegate-Protocol.h>

@class CCUICAPackageDescription, CCUICAPackageView, NSString, UIColor, UIImage, UIImageView, UIView;

@interface CCUIRoundButton : UIControl <UIGestureRecognizerDelegate>
{
    _Bool _useAlternateBackground;
    CCUICAPackageDescription *_glyphPackageDescription;
    UIImage *_glyphImage;
    NSString *_glyphState;
    UIColor *_highlightColor;
    UIView *_normalStateBackgroundView;
    UIView *_selectedStateBackgroundView;
    UIView *_alternateSelectedStateBackgroundView;
    UIImageView *_glyphImageView;
    UIImageView *_selectedGlyphView;
    CCUICAPackageView *_glyphPackageView;
}

@property(retain, nonatomic) CCUICAPackageView *glyphPackageView; // @synthesize glyphPackageView=_glyphPackageView;
@property(retain, nonatomic) UIImageView *selectedGlyphView; // @synthesize selectedGlyphView=_selectedGlyphView;
@property(retain, nonatomic) UIImageView *glyphImageView; // @synthesize glyphImageView=_glyphImageView;
@property(retain, nonatomic) UIView *alternateSelectedStateBackgroundView; // @synthesize alternateSelectedStateBackgroundView=_alternateSelectedStateBackgroundView;
@property(retain, nonatomic) UIView *selectedStateBackgroundView; // @synthesize selectedStateBackgroundView=_selectedStateBackgroundView;
@property(retain, nonatomic) UIView *normalStateBackgroundView; // @synthesize normalStateBackgroundView=_normalStateBackgroundView;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(nonatomic) _Bool useAlternateBackground; // @synthesize useAlternateBackground=_useAlternateBackground;
@property(copy, nonatomic) NSString *glyphState; // @synthesize glyphState=_glyphState;
@property(retain, nonatomic) UIImage *glyphImage; // @synthesize glyphImage=_glyphImage;
@property(retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription; // @synthesize glyphPackageDescription=_glyphPackageDescription;
- (void).cxx_destruct;
- (void)_updateForStateChange;
- (void)_deactivateReachability:(id)arg1;
- (void)_primaryActionPerformed:(id)arg1;
- (void)_setCornerRadius:(double)arg1;
- (double)_cornerRadius;
- (void)_handlePressGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 useLightStyle:(_Bool)arg3;
- (id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 useLightStyle:(_Bool)arg3;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2;
- (id)initWithHighlightColor:(id)arg1 useLightStyle:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

