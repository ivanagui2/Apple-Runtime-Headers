//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import "NSCoding.h"
#import "UIAccessibilityHUDGestureDelegate.h"
#import "UIBarPositioning.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIStatusBarTinting.h"
#import "_UIBarPositioningInternal.h"

@class NSArray, NSDictionary, NSString, UIAccessibilityHUDGestureManager, UIColor, UIImage, UILayoutGuide, UINavigationItem, _UINavigationBarItemStack, _UINavigationBarVisualProvider, _UINavigationBarVisualStyle, _UINavigationControllerRefreshControlHost, _UINavigationItemButtonView, _UIViewControllerTransitionContext;

@interface UINavigationBar : UIView <UIGestureRecognizerDelegate, UIAccessibilityHUDGestureDelegate, UIStatusBarTinting, _UIBarPositioningInternal, NSCoding, UIBarPositioning>
{
    _UINavigationBarItemStack *_stack;
    id <_UINavigationBarDelegatePrivate> _delegate;
    UIColor *_barTintColor;
    id _appearanceStorage;
    int _animationDisabledCount;
    int _barStyle;
    int _barTranslucence;
    _UIViewControllerTransitionContext *_navControllerAnimatingContext;
    _UINavigationBarVisualProvider *_visualProvider;
    _UINavigationBarVisualStyle *_visualStyle;
    UIAccessibilityHUDGestureManager *_axHUDGestureManager;
    struct NSDirectionalEdgeInsets _resolvedLayoutMargins;
    float _shadowAlpha;
    int _currentPushTransition;
    struct {
        unsigned int titleAutosizesToFit:1;
        unsigned int forceFullHeightInLandscape:1;
        unsigned int isLocked:1;
        unsigned int isIgnoringLock:1;
        unsigned int isContainedInPopover:1;
        unsigned int layoutInProgress:1;
        unsigned int delegateRespondsToFreezeLayoutForDismissalSelector:1;
    } _navbarFlags;
    _Bool _wantsLetterpressContent;
    _Bool _prefersLargeTitles;
    _Bool __startedAnimationTracking;
    _Bool __useInlineBackgroundHeightWhenLarge;
    _Bool _alwaysUseDefaultMetrics;
    int _barPosition;
    float _requestedMaxBackButtonWidth;
    UIColor *_accessibilityButtonBackgroundTintColor;
    NSDictionary *_largeTitleTextAttributes;
    float __overrideBackgroundExtension;
    NSArray *_backgroundEffects;
    int _requestedContentSize;
    float __backgroundOpacity;
    float __titleOpacity;
}

+ (_Bool)_useCustomBackButtonAction;
+ (void)_setUseCustomBackButtonAction:(_Bool)arg1;
+ (id)_visualProviderForNavigationBar:(id)arg1;
+ (_Bool)_supportsCanvasView;
+ (void)_initializeForIdiom:(int)arg1;
+ (double)defaultAnimationDuration;
+ (id)defaultPromptFont;
+ (struct CGSize)defaultSizeWithPrompt;
+ (struct CGSize)defaultSize;
+ (struct CGSize)defaultSizeWithPromptForOrientation:(int)arg1;
+ (struct CGSize)defaultSizeForOrientation:(int)arg1;
+ (id)_defaultVisualStyleForOrientation:(int)arg1;
+ (id)_statusBarBaseTintColorForStyle:(int)arg1 translucent:(_Bool)arg2 tintColor:(id)arg3;
+ (id)_statusBarBaseTintColorForStyle:(int)arg1 translucent:(_Bool)arg2 tintColor:(id)arg3 backgroundImage:(id)arg4 viewSize:(struct CGSize)arg5;
+ (_Bool)_forceLegacyVisualProvider;
@property(nonatomic, setter=_setAlwaysUseDefaultMetrics:) _Bool alwaysUseDefaultMetrics; // @synthesize alwaysUseDefaultMetrics=_alwaysUseDefaultMetrics;
@property(nonatomic, setter=_setTitleOpacity:) float _titleOpacity; // @synthesize _titleOpacity=__titleOpacity;
@property(nonatomic, setter=_setBackgroundOpacity:) float _backgroundOpacity; // @synthesize _backgroundOpacity=__backgroundOpacity;
@property(nonatomic, setter=_setUseInlineBackgroundHeightWhenLarge:) _Bool _useInlineBackgroundHeightWhenLarge; // @synthesize _useInlineBackgroundHeightWhenLarge=__useInlineBackgroundHeightWhenLarge;
@property(nonatomic) int requestedContentSize; // @synthesize requestedContentSize=_requestedContentSize;
@property(copy, nonatomic) NSArray *backgroundEffects; // @synthesize backgroundEffects=_backgroundEffects;
@property(readonly, nonatomic) _Bool _startedAnimationTracking; // @synthesize _startedAnimationTracking=__startedAnimationTracking;
@property(nonatomic, setter=_setOverrideBackgroundExtension:) float _overrideBackgroundExtension; // @synthesize _overrideBackgroundExtension=__overrideBackgroundExtension;
@property(copy, nonatomic) NSDictionary *largeTitleTextAttributes; // @synthesize largeTitleTextAttributes=_largeTitleTextAttributes;
@property(nonatomic) _Bool prefersLargeTitles; // @synthesize prefersLargeTitles=_prefersLargeTitles;
@property(nonatomic) int barStyle; // @synthesize barStyle=_barStyle;
@property(nonatomic, setter=_setWantsLetterpressContent:) _Bool _wantsLetterpressContent; // @synthesize _wantsLetterpressContent;
@property(retain, nonatomic, setter=_setAccessibilityButtonBackgroundTintColor:) UIColor *_accessibilityButtonBackgroundTintColor; // @synthesize _accessibilityButtonBackgroundTintColor;
@property(nonatomic, setter=_setRequestedMaxBackButtonWidth:) float _requestedMaxBackButtonWidth; // @synthesize _requestedMaxBackButtonWidth;
@property(readonly, nonatomic) int barPosition; // @synthesize barPosition=_barPosition;
- (void).cxx_destruct;
- (id)preferredFocusedView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint)arg2;
- (_Bool)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint)arg2;
- (_Bool)_accessibilityHUDGestureManagerShouldBegin:(id)arg1;
- (void)_setupAXHUDGestureIfNecessary;
- (void)_accessibility_triggerBarButtonItem:(id)arg1;
- (void)_accessibility_triggerBackButton;
- (id)_accessibility_contentsOfNavigationBar;
- (void)_accessibility_navigationBarContentsDidChange;
- (id)_accessibility_navigationController;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (int)_backgroundBackdropStyle;
- (void)_setAutoAdjustTitle:(_Bool)arg1;
- (int)_barStyle;
- (void)layoutSubviews;
- (void)_updateActiveBarMetrics;
- (void)updateConstraints;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)setNeedsLayout;
- (void)_fadeAllViewsIn;
- (void)_fadeAllViewsOut;
- (id)_allViews;
- (struct CGRect)availableTitleArea;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_barSizeDidChange:(struct CGSize)arg1;
- (int)_barPosition;
- (void)_setBarPosition:(int)arg1;
- (void)_updateBackIndicatorImage;
- (_Bool)_suppressBackIndicator;
- (void)_didChangeFromIdiom:(int)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;
- (void)_accessibilityButtonShapesDidChangeNotification:(id)arg1;
- (void)_accessibilityButtonShapesParametersDidChange;
- (void)_updatePalette:(id)arg1;
- (void)_setNeedsBackgroundViewUpdate;
- (void)_getBackgroundImage:(id *)arg1 shouldRespectOversizedBackgroundImage:(_Bool *)arg2 actualBarMetrics:(int *)arg3 actualBarPosition:(int *)arg4;
- (void)showBackButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)hideButtons;
- (id)createButtonWithContents:(id)arg1 width:(float)arg2 barStyle:(int)arg3 buttonStyle:(int)arg4 isRight:(_Bool)arg5;
- (void)setButton:(int)arg1 enabled:(_Bool)arg2;
- (void)_updateBackButtonVisibilityIfTop:(id)arg1 animated:(_Bool)arg2;
- (void)_updateContentIfTopItem:(id)arg1 animated:(_Bool)arg2;
- (void)showLeftButton:(id)arg1 withStyle:(int)arg2 rightButton:(id)arg3 withStyle:(int)arg4;
- (void)showButtonsWithLeft:(id)arg1 right:(id)arg2 leftBack:(_Bool)arg3;
- (void)showButtonsWithLeftTitle:(id)arg1 rightTitle:(id)arg2 leftBack:(_Bool)arg3;
- (void)showButtonsWithLeftTitle:(id)arg1 rightTitle:(id)arg2;
- (void)drawBackButtonBackgroundInRect:(struct CGRect)arg1 withStyle:(int)arg2 pressed:(_Bool)arg3;
- (void)drawBackgroundInRect:(struct CGRect)arg1 withStyle:(int)arg2;
- (int)animationDisabledCount;
- (_Bool)_isAnimationEnabled;
- (_Bool)isAnimationEnabled;
- (void)_enableAnimation;
- (void)enableAnimation;
- (void)_disableAnimation;
- (void)disableAnimation;
- (struct CGRect)promptBounds;
- (id)promptView;
- (id)prompt;
- (void)_setPrompt:(id)arg1;
- (void)setPrompt:(id)arg1;
- (struct CGRect)_incomingNavigationBarFrame;
- (void)_sendNavigationBarAnimateTransition;
- (void)_sendNavigationBarResize;
- (void)_sendResizeForPromptChange;
- (_Bool)_delegateWantsNavigationBarHidden;
- (void)updatePrompt;
- (id)_backButtonForBackItem:(id)arg1 topItem:(id)arg2;
@property(readonly, nonatomic) _UINavigationItemButtonView *currentBackButton;
- (_Bool)_shouldShowBackButtonForNavigationItem:(id)arg1;
- (_Bool)_hasBackButton;
- (_Bool)_hasLegacyProvider;
- (void)_animateForSearchPresentation:(_Bool)arg1;
@property(readonly, nonatomic) _Bool _wantsLargeTitleDisplayed;
@property(retain, nonatomic) _UINavigationControllerRefreshControlHost *refreshControlHost;
- (_Bool)supportsRefreshControlHosting;
- (id)_contentView;
@property(readonly, nonatomic) UIView *currentRightView;
- (id)_currentRightViews;
@property(readonly, nonatomic) UIView *currentLeftView;
- (id)_currentLeftViews;
- (void)setTitleView:(id)arg1;
- (void)_updateTitleViewIfTop:(id)arg1;
- (_Bool)_titleAutoresizesToFit;
- (_Bool)titleAutoresizesToFit;
- (void)setTitleAutoresizesToFit:(_Bool)arg1;
- (void)setRightMargin:(float)arg1;
- (id)_statusBarTintColor;
@property(retain, nonatomic) UIColor *barTintColor;
- (id)_effectiveBarTintColor;
- (void)_setIsContainedInPopover:(_Bool)arg1;
- (void)_propagateEffectiveBarTintColorWithPreviousColor:(id)arg1;
- (id)_titleTextColor;
- (id)buttonItemTextColor;
- (id)buttonItemShadowColor;
@property(nonatomic) _Bool forceFullHeightInLandscape;
@property(nonatomic, getter=isTranslucent) _Bool translucent;
- (_Bool)_modernIsTranslucent;
- (_Bool)_legacyIsTranslucent;
- (int)_statusBarStyle;
- (void)_setBarStyle:(int)arg1;
- (void)_updateNavigationBarItemsForStyle:(int)arg1;
- (void)_updateNavigationBarItemsForStyle:(int)arg1 previousTintColor:(id)arg2;
- (void)didAddSubview:(id)arg1;
- (void)_updateNavigationBarItem:(id)arg1 forStyle:(int)arg2 previousTintColor:(id)arg3;
- (void)removeConstraint:(id)arg1;
- (void)addConstraint:(id)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(_Bool)arg1;
@property(nonatomic) __weak id <UINavigationBarDelegate> delegate;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_willMoveToWindow:(id)arg1;
- (_Bool)_shouldShowBackButtonForScreen:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)animationFactory;
- (void)popForCarplayPressAtFakePoint:(struct CGPoint)arg1;
- (_Bool)_allowInteractionDuringTransition;
- (void)_setBackIndicatorPressed:(_Bool)arg1 initialPress:(_Bool)arg2;
- (void)_evaluateBackIndicatorForHilightedState:(_Bool)arg1 ofBarButtonItem:(id)arg2 inNavigationItem:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (_Bool)_canHandleStatusBarTouchAtLocation:(struct CGPoint)arg1;
- (void)_reenableUserInteractionWhenReadyWithContext:(id)arg1;
- (void)_reenableUserInteraction;
- (id)navigationItemAtPoint:(struct CGPoint)arg1;
- (void)_cancelInteractiveTransition;
- (void)_cancelInProgressPushOrPop;
- (void)safeAreaInsetsDidChange;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize)intrinsicContentSize;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)layoutMarginsDidChange;
- (struct NSDirectionalEdgeInsets)_resolvedLayoutMargins;
- (_Bool)_heightDependentOnOrientation;
- (CDStruct_b2fbf00d)_heightRangeForNavigationItem:(id)arg1 fittingWidth:(float)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) int currentContentSize;
- (_Bool)_canShowBackgroundEffects;
- (id)_effectiveBackgroundEffects;
- (int)effectiveInterfaceOrientation;
- (int)_effectiveMetricsForMetrics:(int)arg1;
- (void)_addItems:(id)arg1 withEffectiveDelegate:(id)arg2 transition:(int)arg3;
- (void)_addItem:(id)arg1 withEffectiveDelegate:(id)arg2 transition:(int)arg3;
- (void)_setItemsUpToItem:(id)arg1 transition:(int)arg2;
- (void)_setItems:(id)arg1 transition:(int)arg2 reset:(_Bool)arg3;
- (void)_setItems:(id)arg1 transition:(int)arg2;
- (void)_setItems:(id)arg1 transition:(int)arg2 reset:(_Bool)arg3 resetOwningRelationship:(_Bool)arg4;
- (void)_displayItemsKeepingOwningNavigationBar:(id)arg1;
- (void)_redisplayItems;
- (_Bool)_didVisibleItemsChangeWithNewItems:(id)arg1 oldItems:(id)arg2;
- (void)setItems:(id)arg1 animated:(_Bool)arg2;
- (int)_transitionForOldItems:(id)arg1 newItems:(id)arg2;
@property(copy, nonatomic) NSArray *items;
- (void)setNavigationItems:(id)arg1;
- (id)navigationItems;
@property(readonly, nonatomic) _UINavigationBarItemStack *_stack;
@property(readonly, nonatomic) UINavigationItem *backItem;
@property(readonly, nonatomic) UINavigationItem *topItem;
- (void)_popNavigationItemWithTransitionAssistant:(id)arg1;
- (void)_completePopOperationAnimated:(_Bool)arg1 transitionAssistant:(id)arg2;
- (void)popNavigationItem;
- (id)_popNavigationItemWithTransition:(int)arg1;
- (void)_pushNestedNavigationItem:(id)arg1;
- (void)_popNestedNavigationItem;
- (id)popNavigationItemAnimated:(_Bool)arg1;
- (void)_pushNavigationItem:(id)arg1 transitionAssistant:(id)arg2;
- (void)_completePushOperationAnimated:(_Bool)arg1 transitionAssistant:(id)arg2;
- (void)pushNavigationItem:(id)arg1;
- (int)_currentBarStyle;
- (void)_cancelInteractiveTransition:(float)arg1 completionSpeed:(float)arg2 completionCurve:(int)arg3;
- (void)_finishInteractiveTransition:(float)arg1 completionSpeed:(float)arg2 completionCurve:(int)arg3;
- (void)_updateInteractiveTransition:(float)arg1;
- (void)_pushNavigationItem:(id)arg1 transition:(int)arg2;
@property(readonly, nonatomic) NSArray *_animationIds;
- (void)pushNavigationItem:(id)arg1 animated:(_Bool)arg2;
- (void)_pushNavigationItemUsingCurrentTransition:(id)arg1;
- (void)_customViewChangedForButtonItem:(id)arg1;
@property(readonly, nonatomic) int state;
- (id)_defaultTitleFontWithScaleAdjustment:(float)arg1;
- (id)_defaultTitleFont;
- (id)_defaultTitleFontFittingHeight:(float)arg1 withScaleAdjustment:(float)arg2;
@property(nonatomic, getter=isLocked) _Bool locked;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_setDecodedItems:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)_hostsLayoutEngineAllowsTAMIC_NO;
- (void)_commonNavBarInit;
- (_Bool)_subclassImplementsDrawRect;
- (void)_updateOpacity;
- (struct CGSize)defaultSizeForOrientation:(int)arg1;
- (float)defaultHeight;
- (float)defaultHeightForMetrics:(int)arg1;
- (float)defaultBackButtonAlignmentHeight;
- (id)_currentVisualStyle;
- (id)_appearanceStorage;
@property(readonly, nonatomic) _Bool isMinibar;
- (int)_activeBarMetrics;
@property(nonatomic, setter=_setDeferShadowToSearchBar:) _Bool _deferShadowToSearchBar;
@property(nonatomic, setter=_setHidesShadow:) _Bool _hidesShadow;
@property(retain, nonatomic) UIImage *shadowImage;
- (float)titleVerticalPositionAdjustmentForBarMetrics:(int)arg1;
- (void)setTitleVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
@property(copy, nonatomic) NSDictionary *titleTextAttributes;
- (void)traitCollectionDidChange:(id)arg1;
- (id)backgroundImageForBarPosition:(int)arg1 barMetrics:(int)arg2;
- (void)setBackgroundImage:(id)arg1 forBarPosition:(int)arg2 barMetrics:(int)arg3;
- (void)_sendNavigationBarDidChangeStyle;
- (id)backgroundImageForBarMetrics:(int)arg1;
- (void)setBackgroundImage:(id)arg1 forBarMetrics:(int)arg2;
- (void)_effectiveBarTintColorDidChangeWithPreviousColor:(id)arg1;
@property(retain, nonatomic) UIColor *tintColor; // @dynamic tintColor;
- (void)_updatePaletteBackgroundIfNecessary;
- (void)_configurePaletteConstraintsIfNecessary;
- (void)_tintViewAppearanceDidChange;
- (void)setSemanticContentAttribute:(int)arg1;
- (int)_itemStackCount;
@property(readonly, nonatomic) UILayoutGuide *_userContentGuide;
- (float)_effectiveBackIndicatorLeftMargin;
@property(nonatomic, setter=_setBackIndicatorLeftMargin:) float _backIndicatorLeftMargin;
@property(retain, nonatomic) UIImage *backIndicatorTransitionMaskImage;
@property(retain, nonatomic) UIImage *backIndicatorImage;
- (void)_setBackdropViewLayerGroupName:(id)arg1;
@property(readonly, retain, nonatomic) NSString *_backdropViewLayerGroupName;
@property(readonly, nonatomic) float _heightIncludingBackground;
@property(readonly, nonatomic) _Bool _isContainedInPopover;
- (void)tintColorDidChange;
@property(readonly, nonatomic) int _barTranslucence;
- (id)_effectiveDelegate;
- (_Bool)_isAlwaysHidden;
- (void)_palette:(id)arg1 isAttaching:(_Bool)arg2 didComplete:(_Bool)arg3;
- (id)_backgroundViewForPalette:(id)arg1;
- (void)_setReversesButtonTextShadowOffsetWhenPressed:(_Bool)arg1;
- (void)_setButtonTextShadowOffset:(struct CGSize)arg1;
- (void)_setPressedButtonItemTextColor:(id)arg1 shadowColor:(id)arg2;
- (void)_setButtonItemTextColor:(id)arg1 shadowColor:(id)arg2;
- (void)_setButtonItemTextColor:(id)arg1 shadowColor:(id)arg2 forState:(unsigned int)arg3;
- (void)_setBackButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned int)arg3;
- (void)_setButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned int)arg3;
- (void)_setBackgroundImage:(id)arg1 mini:(id)arg2;
- (void)_applySPIAppearanceToButtons;
@property(nonatomic, setter=_setDisableBlurTinting:) _Bool _disableBlurTinting;
@property(nonatomic, setter=_setShadowAlpha:) float _shadowAlpha;
- (float)_internalShadowAlpha;
@property(retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
- (void)_performUpdatesIgnoringLock:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (float)_defaultAutolayoutSpacing;
- (float)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(int)arg2 inContainer:(id)arg3 isGuide:(_Bool)arg4;
- (_Bool)_hasCustomAutolayoutNeighborSpacingForAttribute:(int *)arg1;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;
- (id)backButtonViewAtPoint:(struct CGPoint)arg1;
- (void)_uikit_applyValueFromTraitStorage:(id)arg1 forKeyPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
