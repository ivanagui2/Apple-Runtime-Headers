//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, SFSearchResult, SearchUIAppIconButton, SearchUIDragSource, SearchUIForceTouchGestureRecognizer, SearchUITableViewCell, UILabel;

@interface SearchUIIconView : UIView
{
    UIView *_iconButtonContainer;
    SearchUIAppIconButton *_iconButton;
    UILabel *_label;
    SFSearchResult *_result;
    NSLayoutConstraint *_bottomConstraint;
    SearchUIForceTouchGestureRecognizer *_forceTouchRecognizer;
    SearchUITableViewCell *_cell;
    SearchUIDragSource *_dragSource;
}

@property(retain) SearchUIDragSource *dragSource; // @synthesize dragSource=_dragSource;
@property(retain) SearchUITableViewCell *cell; // @synthesize cell=_cell;
@property(retain) SearchUIForceTouchGestureRecognizer *forceTouchRecognizer; // @synthesize forceTouchRecognizer=_forceTouchRecognizer;
@property(retain) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain) SFSearchResult *result; // @synthesize result=_result;
@property(retain) UILabel *label; // @synthesize label=_label;
@property(retain) SearchUIAppIconButton *iconButton; // @synthesize iconButton=_iconButton;
@property(retain) UIView *iconButtonContainer; // @synthesize iconButtonContainer=_iconButtonContainer;
- (void).cxx_destruct;
- (id)dragObject;
- (void)updateWithResult:(id)arg1;
- (id)viewForLastBaselineLayout;
- (void)addForceTouchGestureRecognizerIfNecessaryForTraitCollection:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewForFirstBaselineLayout;
- (void)iconButtonPressed;
- (id)labelFont;
- (id)initWithStyle:(unsigned long long)arg1 cell:(id)arg2;

@end
