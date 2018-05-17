//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIAlertControllerVisualStyle.h>

__attribute__((visibility("hidden")))
@interface UIAlertControllerVisualStyleActionSheet : UIAlertControllerVisualStyle
{
}

+ (void)positionContentsOfAlertController:(id)arg1 alertContentView:(id)arg2 availableSpaceView:(id)arg3 visualStyle:(id)arg4 updatableConstraints:(id)arg5;
+ (int)interfaceActionPresentationStyle;
- (_Bool)placementAvoidsKeyboard;
- (_Bool)hideCancelAction:(id)arg1 inAlertController:(id)arg2;
- (int)permittedActionLayoutDirection;
- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(_Bool)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (double)transitionDurationForPresentation:(_Bool)arg1 ofAlertController:(id)arg2;
- (struct UIEdgeInsets)contentInsets;
- (float)maximumWidth;
- (float)marginBelowLastLabelLastBaseline;
- (float)marginBelowMessageLabelLastBaseline;
- (float)marginAboveMessageLabelFirstBaseline;
- (id)messageLabelColor;
- (id)messageLabelFont;
- (float)marginBelowTitleLabelLastBaseline;
- (float)marginAboveTitleLabelFirstBaseline;
- (float)_spacingBetweenDismissButtonAndContent;
- (id)titleLabelColor;
- (id)titleLabelFont;

@end
