//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSTableCell.h"

@class UIActivityIndicatorView, UISwitch;

@interface PKSwitchSpinnerTableCell : PSTableCell
{
    UIActivityIndicatorView *_spinner;
    UISwitch *_switch;
    _Bool _showSpinner;
    id <PKSwitchSpinnerTableCellDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_switchToggled:(id)arg1;
- (void)_updateSubviews;
- (void)setShowSpinner:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setSwitchIsOn:(_Bool)arg1;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (_Bool)canReload;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end
