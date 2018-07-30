//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIAlertControllerDescriptor, UIInterfaceActionVisualStyle, UITraitCollection;

__attribute__((visibility("hidden")))
@interface UIAlertControllerVisualStyle : NSObject
{
    UIAlertControllerDescriptor *_descriptor;
    int _forcedInterfaceIdiom;
    UIInterfaceActionVisualStyle *_interfaceActionVisualStyle;
    UITraitCollection *_traitCollection;
}

+ (void)positionContentsOfAlertController:(id)arg1 alertContentView:(id)arg2 availableSpaceView:(id)arg3 visualStyle:(id)arg4 updatableConstraints:(id)arg5;
+ (int)interfaceActionPresentationStyle;
@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) UIInterfaceActionVisualStyle *interfaceActionVisualStyle; // @synthesize interfaceActionVisualStyle=_interfaceActionVisualStyle;
@property(nonatomic) int forcedInterfaceIdiom; // @synthesize forcedInterfaceIdiom=_forcedInterfaceIdiom;
@property(retain, nonatomic) UIAlertControllerDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (void).cxx_destruct;
- (id)_keyCommandInputForCancelAction;
- (_Bool)_shouldReverseActions;
- (float)_scaledMarginAboveDetailMessageFirstBaseline;
- (float)_scaledMarginBelowLastLabelLastBaseline;
- (float)_scaledMarginBelowMessageLabelLastBaseline;
- (float)_scaledMarginAboveMessageLabelFirstBaseline;
- (float)_scaledMarginBelowTitleLabelLastBaseline;
- (float)_scaledMessageSafeBaselineHeightInAlertControllerView:(id)arg1;
- (float)_scaledTitleLabelSafeBaselineHeightInAlertControllerView:(id)arg1;
- (float)_scaledSafeBaselineHeightForLabelFont:(id)arg1 inAlertControllerView:(id)arg2;
- (float)_scaledMarginAboveTitleLabelFirstBaselineInAlertControllerView:(id)arg1;
- (void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3;
- (void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;
- (struct UIEdgeInsets)actionImageMarginForAction;
- (float)contentVerticalMargin;
- (float)contentHorizontalMargin;
- (struct CGSize)minimumActionContentSize;
- (id)preferredActionFont;
- (id)regularActionFont;
- (struct UIEdgeInsets)actionSequenceEdgeInsets;
- (id)preferredActionForActions:(id)arg1 suggestedPreferredAction:(id)arg2;
- (_Bool)placementAvoidsKeyboard;
- (_Bool)shouldPreserveRespondersAcrossWindows;
- (_Bool)shouldOccludeDuringPresentation;
- (id)interactionProgressForTransitionOfType:(int)arg1 forAlertController:(id)arg2;
- (_Bool)transitionOfType:(int)arg1 shouldBeInteractiveForAlertController:(id)arg2;
- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(_Bool)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)animateRevealOfAlertControllerView:(id)arg1 alertController:(id)arg2 inContainerView:(id)arg3 duration:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (double)transitionDurationForPresentation:(_Bool)arg1 ofAlertController:(id)arg2;
- (id)dimmingViewForAlertController:(id)arg1;
- (float)textFieldHorizontalMargin;
- (struct UIEdgeInsets)textFieldContentInset;
- (struct CGSize)collectionViewOutsetSize;
- (_Bool)hideCancelAction:(id)arg1 inAlertController:(id)arg2;
- (int)permittedActionLayoutDirection;
- (id)defaultActionFont;
- (id)textFieldContainingViewWithTextField:(id)arg1;
- (struct UIEdgeInsets)contentInsetsForContainerView:(id)arg1;
- (float)maximumHeightForDisplayOnScreen:(id)arg1;
- (float)maximumWidthForTitleAndMessageContentView;
- (float)actionWidthForMinimumActionWidth:(float)arg1;
- (float)maximumWidth;
- (float)minimumWidth;
- (id)tintColorForAlertController:(id)arg1;
- (float)marginBelowLastLabelLastBaseline;
- (int)maximumNumberOfLinesInMessageLabel;
- (float)marginBelowMessageLabelLastBaseline;
- (float)marginAboveMessageLabelFirstBaseline;
- (float)_spacingBetweenDismissButtonAndContent;
- (float)_marginAboveDetailMessageFirstBaseline;
- (id)_detailMessageFont;
- (id)messageLabelColor;
- (id)messageLabelFont;
- (int)maximumNumberOfLinesInTitleLabel;
- (float)marginBelowTitleLabelLastBaseline;
- (float)marginAboveTitleLabelFirstBaseline;
- (id)titleLabelColor;
- (id)titleLabelFont;
- (void)_reloadInterfaceActionVisualStyle;
- (Class)interfaceActionVisualStyleClassForManagingConcreteVisualStyle;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end
