//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPickerView.h>

#import <PassKitUI/PKDatePickerInternalImplementationProtocol-Protocol.h>
#import <PassKitUI/UIPickerViewDataSource-Protocol.h>
#import <PassKitUI/UIPickerViewDelegate-Protocol.h>

@class NSCalendar, NSDate, NSDateFormatter, NSString;

@interface PKDatePickerImpl_PickerView : UIPickerView <PKDatePickerInternalImplementationProtocol, UIPickerViewDataSource, UIPickerViewDelegate>
{
    unsigned int _calendarUnit;
    struct _NSRange _possibleRange;
    NSDateFormatter *_dateFormatter;
    NSCalendar *_calendar;
    id _changeTarget;
    SEL _changeAction;
}

- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (float)pickerView:(id)arg1 widthForComponent:(int)arg2;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (id)_stringForIndex:(unsigned int)arg1;
- (id)_dateForIndex:(unsigned int)arg1;
- (unsigned int)_numberOfItems;
- (unsigned int)_defaultIndex;
- (id)_dateComponentsForCalendarUnit:(unsigned int)arg1 value:(int)arg2;
- (id)_dateFormatForCalendarUnit:(unsigned int)arg1;
- (void)prepareToDie;
- (void)setDateValueChangedTarget:(id)arg1 action:(SEL)arg2;
@property(retain, nonatomic) NSDate *date;
- (void)dealloc;
- (id)initShowingDay:(_Bool)arg1 month:(_Bool)arg2 year:(_Bool)arg3 useDarkAppearance:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

