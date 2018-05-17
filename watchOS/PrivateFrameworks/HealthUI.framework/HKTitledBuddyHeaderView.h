//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, NSString, UIButton, UILabel, UITextView;

@interface HKTitledBuddyHeaderView : UIView
{
    UITextView *_bodyTextView;
    UIButton *_optionalLinkButton;
    NSString *_bodyText;
    int _bodyTextAlignment;
    NSLayoutConstraint *_logoTitleGapConstraint;
    NSLayoutConstraint *_bodyZeroHeightConstraint;
    NSLayoutConstraint *_bodyBottomConstraint;
    NSLayoutConstraint *_titleBottomConstraint;
    NSLayoutConstraint *_bodyFirstBaselineConstraint;
    NSLayoutConstraint *_bodyLastBaselineToLinkConstraint;
    NSLayoutConstraint *_linkButtonLastBaselineToBottomConstraint;
    NSLayoutConstraint *_titleLabelBaselineConstraint;
    id <HKTitledBuddyHeaderViewDelegate> _delegate;
    UILabel *_titleLabel;
}

@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <HKTitledBuddyHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_attributedBodyTextWithString:(id)arg1 alignment:(int)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)deactivateDefaultTitleLabelBaselineConstraint;
- (void)_linkButtonTapped:(id)arg1;
- (void)setBodyText:(id)arg1 alignment:(int)arg2;
- (id)bodyTextView;
@property(nonatomic) int bodyTextAlignment;
@property(retain, nonatomic) NSString *bodyText;
@property(retain, nonatomic) NSString *titleText;
- (float)bottomPadding;
- (void)_updateBodyTextViewConstraints;
- (void)_updateForCurrentSizeCategory;
- (id)initWithTopInset:(float)arg1 linkButtonTitle:(id)arg2;

@end
