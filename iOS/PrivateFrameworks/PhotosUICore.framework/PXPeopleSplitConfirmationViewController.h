//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXPeopleConfirmationViewController.h>

@class NSArray, NSLayoutConstraint, UIBarButtonItem, UIButton, UILayoutGuide, UIView;

@interface PXPeopleSplitConfirmationViewController : PXPeopleConfirmationViewController
{
    UIView *_interimLoadingView;
    UIButton *_confirmButton;
    UIButton *_denyButton;
    UIBarButtonItem *_undoButton;
    UILayoutGuide *_controlLayoutGuide;
    NSLayoutConstraint *_buttonSizeConstraint;
    NSLayoutConstraint *_firstButtonSpacingConstraint;
    NSLayoutConstraint *_secondButtonSpacingConstraint;
    NSLayoutConstraint *_controlGuideHeightConstraint;
    NSArray *_portraitConstraints;
    NSArray *_landscapeConstraints;
    NSArray *_commonConstraints;
}

@property(retain, nonatomic) NSArray *commonConstraints; // @synthesize commonConstraints=_commonConstraints;
@property(retain, nonatomic) NSArray *landscapeConstraints; // @synthesize landscapeConstraints=_landscapeConstraints;
@property(retain, nonatomic) NSArray *portraitConstraints; // @synthesize portraitConstraints=_portraitConstraints;
@property(retain, nonatomic) NSLayoutConstraint *controlGuideHeightConstraint; // @synthesize controlGuideHeightConstraint=_controlGuideHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *secondButtonSpacingConstraint; // @synthesize secondButtonSpacingConstraint=_secondButtonSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *firstButtonSpacingConstraint; // @synthesize firstButtonSpacingConstraint=_firstButtonSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *buttonSizeConstraint; // @synthesize buttonSizeConstraint=_buttonSizeConstraint;
@property(retain, nonatomic) UILayoutGuide *controlLayoutGuide; // @synthesize controlLayoutGuide=_controlLayoutGuide;
@property(retain, nonatomic) UIBarButtonItem *undoButton; // @synthesize undoButton=_undoButton;
@property(retain, nonatomic) UIButton *denyButton; // @synthesize denyButton=_denyButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIView *interimLoadingView; // @synthesize interimLoadingView=_interimLoadingView;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)noMoreSuggestionsAvailableForSuggestionManager:(id)arg1;
- (void)suggestionManager:(id)arg1 hasNewSuggestionsAvailable:(id)arg2;
- (void)_updateUndoButton;
- (id)_buttonBackgroundImageFromColor:(id)arg1;
- (void)_disableActionButtonsWithSelectedButton:(id)arg1;
- (void)_enableActionButtons;
- (id)_buttonWithTitle:(id)arg1 action:(SEL)arg2 andColor:(id)arg3;
- (void)undoButtonTapped:(id)arg1;
- (void)denyTapped:(id)arg1;
- (void)confirmTapped:(id)arg1;
- (void)suggestionDidDisplay;
- (void)updateViewWithViewState:(unsigned long long)arg1;
- (void)dealloc;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (id)initWithPerson:(id)arg1;

@end
