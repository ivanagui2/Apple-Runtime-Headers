//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSTableCell.h"

@class UIDatePicker;

@interface STUIDateTimePickerCell : PSTableCell
{
    UIDatePicker *_datePicker;
}

+ (double)preferredHeight;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (id)datePicker;
- (void)timeZoneChanged:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end
