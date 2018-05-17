//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitUI/PKTableViewCell.h>

#import "PKDatePickerDelegate.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSArray, NSString, PKDatePicker, PKPaymentSetupField, UIColor, UIPickerView;

@interface PKPaymentSetupFieldCell : PKTableViewCell <UITextFieldDelegate, PKDatePickerDelegate, UIPickerViewDelegate, UIPickerViewDataSource>
{
    PKDatePicker *_dateInputView;
    UIPickerView *_pickerInputView;
    _Bool _ignoreCurrentValueChangedNotifications;
    NSArray *_defaultLeadingBarButtonGroups;
    NSArray *_defaultTrailingBarButtonGroups;
    NSArray *_defaultCenterBarButtonGroups;
    _Bool _canResignFirstResponder;
    _Bool _enabled;
    _Bool _shouldDrawSeperator;
    _Bool _shouldDrawFullWidthSeperator;
    id <PKPaymentSetupFieldCellDelegate> _delegate;
    PKPaymentSetupField *_paymentSetupField;
    float _minimumTextLabelWidth;
    UIColor *_editableTextFieldTextColor;
    UIColor *_editableTextFieldDisabledTextColor;
    UIColor *_editableTextFieldCameraCapturedTextColor;
}

+ (id)reuseIdentifier;
+ (int)tableViewCellStyle;
+ (float)minimumCellHeight;
+ (id)paymentSetupFieldCellForField:(id)arg1 fromTableView:(id)arg2;
@property(copy, nonatomic) UIColor *editableTextFieldCameraCapturedTextColor; // @synthesize editableTextFieldCameraCapturedTextColor=_editableTextFieldCameraCapturedTextColor;
@property(copy, nonatomic) UIColor *editableTextFieldDisabledTextColor; // @synthesize editableTextFieldDisabledTextColor=_editableTextFieldDisabledTextColor;
@property(copy, nonatomic) UIColor *editableTextFieldTextColor; // @synthesize editableTextFieldTextColor=_editableTextFieldTextColor;
@property(nonatomic) _Bool shouldDrawFullWidthSeperator; // @synthesize shouldDrawFullWidthSeperator=_shouldDrawFullWidthSeperator;
@property(nonatomic) _Bool shouldDrawSeperator; // @synthesize shouldDrawSeperator=_shouldDrawSeperator;
@property(nonatomic) float minimumTextLabelWidth; // @synthesize minimumTextLabelWidth=_minimumTextLabelWidth;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) PKPaymentSetupField *paymentSetupField; // @synthesize paymentSetupField=_paymentSetupField;
@property(nonatomic) id <PKPaymentSetupFieldCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)datePicker:(id)arg1 didChangeDate:(id)arg2;
- (void)_editableTextFieldValueChanged:(id)arg1;
- (void)_editableTextFieldDidBeginEditing:(id)arg1;
- (void)_pullCurrentValueFromField;
- (void)_pushCurrentValueToField;
- (void)updatePaymentSetupFieldWithCurrentCellValue;
- (struct CGRect)_separatorFrame;
@property(nonatomic) _Bool canResignFirstResponder;
- (void)prepareForReuse;
- (float)heightForWidth:(float)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_paymentSetupFieldCurrentValueChangedNotification:(id)arg1;
- (void)_updateDisplayForFieldTypePicker:(id)arg1;
- (void)_updateDisplayForFieldTypeDate:(id)arg1;
- (void)_updateDisplayForFieldTypeText:(id)arg1;
- (void)_applyDefaultValues;
- (void)_updateDisplay:(_Bool)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithSetupField:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)init;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
