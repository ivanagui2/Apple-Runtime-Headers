//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSDictionary, NSSet, NSString, UIBarButtonItem, UIColor, UIImage, UINavigationItem, UIView;

@interface UINavigationButton : UIButton
{
    NSSet *_possibleTitles;
    int _style;
    int _barStyle;
    UIColor *_navigationBarTintColor;
    struct CGSize _boundsAdjustment;
    id _appearanceStorage;
    NSSet *_possibleSystemItems;
    unsigned int _size:2;
    unsigned int _wantsLetterpressContent:1;
    UIBarButtonItem *_originatingButtonItem;
    UINavigationItem *_originatingNavigationItem;
    _Bool _createdByBarButtonItem;
    _Bool _isFontScaleInvalid;
    _Bool _wantsBlendModeForAccessibilityBackgrounds;
    _Bool __barItemHidden;
    int _buttonItemStyle;
    NSDictionary *_stylesForSizingTitles;
    float _fontScaleAdjustment;
    UIColor *_accessibilityBackgroundTintColor;
    Class _appearanceGuideClass;
    UIView *__enclosingBar;
    float _minimumWidth;
    float _maximumWidth;
    struct UIEdgeInsets __additionalSelectionInsets;
}

+ (void)_resetRenderingModesForBackgroundImageView:(id)arg1 inBarStyle:(int)arg2 isEnabled:(_Bool)arg3 withAccessibilityBackground:(_Bool)arg4 wantsBlendModeForAccessibilityBackgrounds:(_Bool)arg5 accessibilityBackgroundTintColor:(id)arg6;
+ (id)defaultFont;
@property(nonatomic, setter=_setBarItemHidden:) _Bool _barItemHidden; // @synthesize _barItemHidden=__barItemHidden;
@property(nonatomic) __weak UIBarButtonItem *originatingButtonItem; // @synthesize originatingButtonItem=_originatingButtonItem;
@property(nonatomic) __weak UINavigationItem *originatingNavigationItem; // @synthesize originatingNavigationItem=_originatingNavigationItem;
@property(nonatomic) float maximumWidth; // @synthesize maximumWidth=_maximumWidth;
@property(nonatomic) float minimumWidth; // @synthesize minimumWidth=_minimumWidth;
@property(nonatomic, setter=_setEnclosingBar:) __weak UIView *_enclosingBar; // @synthesize _enclosingBar=__enclosingBar;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) int barStyle; // @synthesize barStyle=_barStyle;
@property(nonatomic, setter=_setAdditionalSelectionInsets:) struct UIEdgeInsets _additionalSelectionInsets; // @synthesize _additionalSelectionInsets=__additionalSelectionInsets;
@property(retain, nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // @synthesize _appearanceGuideClass;
@property(retain, nonatomic, setter=_setAccessibilityBackgroundTintColor:) UIColor *_accessibilityBackgroundTintColor; // @synthesize _accessibilityBackgroundTintColor;
@property(nonatomic, setter=_setWantsBlendModeForAccessibilityBackgrounds:) _Bool _wantsBlendModeForAccessibilityBackgrounds; // @synthesize _wantsBlendModeForAccessibilityBackgrounds;
@property(nonatomic, setter=_setFontScaleAdjustment:) float _fontScaleAdjustment; // @synthesize _fontScaleAdjustment;
@property(nonatomic, setter=_setFontScaleInvalid:) _Bool _isFontScaleInvalid; // @synthesize _isFontScaleInvalid;
@property(nonatomic, setter=_setCreatedByBarButtonItem:) _Bool _createdByBarButtonItem; // @synthesize _createdByBarButtonItem;
@property(copy, nonatomic, setter=_setStylesForSizingTitles:) NSDictionary *_stylesForSizingTitles; // @synthesize _stylesForSizingTitles;
@property(nonatomic, setter=_setButtonItemStyle:) int _buttonItemStyle; // @synthesize _buttonItemStyle;
- (void).cxx_destruct;
- (void)_uinavigationbar_prepareToAppearInNavigationItem:(id)arg1 onLeft:(_Bool)arg2;
- (id)_externalUnfocusedBorderColor;
- (_Bool)_isExternalRoundedRectButton;
- (_Bool)canBecomeFocused;
- (id)_activeVisualStyle;
- (id)_visualStyleForMetrics:(int)arg1;
- (int)_activeBarMetrics;
- (void)_setGroupName:(id)arg1 forNavigationBar:(id)arg2;
- (id)_appearanceStorage;
- (void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(int)arg2;
- (struct UIOffset)_titlePositionAdjustmentForBarMetrics:(int)arg1;
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(int)arg2;
- (_Bool)_hasBaselineAlignedAbsoluteVerticalPosition:(out float *)arg1 withinNavBar:(id)arg2 forSize:(struct CGSize)arg3;
- (float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)arg1;
- (void)_setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (id)_titleTextAttributesForState:(unsigned int)arg1;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
@property(retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;
- (void)_UIAppearance_setTintColor:(id)arg1;
- (id)_backgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 style:(int)arg3 barMetrics:(int)arg4;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 style:(int)arg3 barMetrics:(int)arg4;
- (void)_updateContentInsets;
- (void)_setBoundsAdjustment:(struct CGSize)arg1;
- (void)_setFrame:(struct CGRect)arg1 deferLayout:(_Bool)arg2;
- (void)_adjustBounds;
- (_Bool)_canHandleStatusBarTouchAtLocation:(struct CGPoint)arg1;
- (void)setNavigationBarTintColor:(id)arg1;
@property(nonatomic) int controlSize;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (_Bool)contentsEqualTo:(id)arg1 withStyle:(int)arg2;
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) NSString *title;
- (_Bool)_isModernButton;
- (void)dealloc;
- (id)initWithImage:(id)arg1 style:(int)arg2;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 width:(float)arg2 style:(int)arg3;
- (id)initWithImage:(id)arg1 width:(float)arg2 style:(int)arg3 applyBezel:(_Bool)arg4 forBarStyle:(int)arg5 buttonItemStyle:(int)arg6;
- (id)initWithTitle:(id)arg1 possibleTitles:(id)arg2 style:(int)arg3;
- (id)initWithTitle:(id)arg1 style:(int)arg2;
- (id)initWithTitle:(id)arg1;
- (id)initWithValue:(id)arg1 width:(float)arg2 style:(int)arg3 barStyle:(int)arg4 possibleTitles:(id)arg5 tintColor:(id)arg6;
- (id)initWithValue:(id)arg1 width:(float)arg2 style:(int)arg3 barStyle:(int)arg4 possibleTitles:(id)arg5 possibleSystemItems:(id)arg6 tintColor:(id)arg7 applyBezel:(_Bool)arg8 forButtonItemStyle:(int)arg9;
- (void)_setTitleFrozen:(_Bool)arg1;
- (void)_updateStyle;
- (void)_didChangeFromIdiom:(int)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;
- (void)_accessibilityButtonShapesDidChangeNotification:(id)arg1;
- (void)_accessibilityButtonShapesParametersDidChange;
- (id)_customOrAccessibilityBackgroundImageForState:(unsigned int)arg1 style:(int)arg2 isMini:(_Bool)arg3;
- (id)_adjustedDefaultTitleFont;
- (struct UIEdgeInsets)_pathImageEdgeInsets;
- (struct UIEdgeInsets)_pathTitleEdgeInsets;
- (struct UIEdgeInsets)_buttonTitleEdgeInsets;
- (int)_barButtonItemStyle;
- (void)_updateTitleColorsForState:(unsigned int)arg1;
- (void)layoutSubviews;
- (struct CGRect)_selectedIndicatorBounds;
- (void)_sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;
- (void)_setWantsLetterpressContent;
- (void)_updateTitleForLetterpress;
- (void)_updateShadowOffsetWithAttributes:(id)arg1 forState:(unsigned int)arg2;
- (struct CGSize)_defaultTitleShadowOffsetForState:(unsigned int)arg1;
- (id)_defaultTitleShadowColorForState:(unsigned int)arg1;
- (id)_externalTitleColorForState:(unsigned int)arg1;
- (id)_defaultTitleColorForState:(unsigned int)arg1;
- (_Bool)_wantsAccessibilityButtonShapes;
- (_Bool)_showsAccessibilityBackgroundWhenEnabled;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (_Bool)_isCarPlaySystemTypeButton;
- (int)buttonType;

// Remaining properties
@property(retain, nonatomic) UIColor *tintColor; // @dynamic tintColor;

@end
