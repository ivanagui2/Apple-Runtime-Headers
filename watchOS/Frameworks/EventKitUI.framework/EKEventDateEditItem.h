//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEventEditItem.h>

#import "EKCellShortener.h"
#import "EKTimeZoneViewControllerDelegate.h"

@class NSDate, NSDateComponents, NSString, NSTimeZone, PreferencesTwoPartValueCell, UIDatePicker, UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventDateEditItem : EKEventEditItem <EKTimeZoneViewControllerDelegate, EKCellShortener>
{
    NSDateComponents *_startComponents;
    NSDateComponents *_endComponents;
    _Bool _allDay;
    NSTimeZone *_startTimeZone;
    NSTimeZone *_endTimeZone;
    _Bool _showTimeZones;
    PreferencesTwoPartValueCell *_startDateCell;
    PreferencesTwoPartValueCell *_endDateCell;
    UITableViewCell *_allDayCell;
    UITableViewCell *_startTimeZoneCell;
    UITableViewCell *_endTimeZoneCell;
    UITableViewCell *_startDatePickerCell;
    UITableViewCell *_endDatePickerCell;
    int _selectedSubitem;
    UIDatePicker *_startDatePicker;
    UIDatePicker *_endDatePicker;
    _Bool _endTimeWasMessedUp;
    _Bool _changingDate;
    int _shorteningStatus;
    _Bool _pushingTZController;
    _Bool _showsAllDay;
    _Bool _proposedTime;
    NSDate *_pendingProposedTime;
    id <EKEventDateEditItemDelegate> _eventDateEditItemDelegate;
}

+ (id)_timeZoneLocalizedString;
@property(nonatomic) __weak id <EKEventDateEditItemDelegate> eventDateEditItemDelegate; // @synthesize eventDateEditItemDelegate=_eventDateEditItemDelegate;
@property(retain, nonatomic) NSDate *pendingProposedTime; // @synthesize pendingProposedTime=_pendingProposedTime;
@property(nonatomic) _Bool proposedTime; // @synthesize proposedTime=_proposedTime;
@property(nonatomic) _Bool showsAllDay; // @synthesize showsAllDay=_showsAllDay;
- (void).cxx_destruct;
- (_Bool)_shouldShowTimeZone;
- (id)_dateComponentsInSystemCalendarFromDate:(id)arg1;
- (id)_dateFromComponents:(id)arg1 timeZone:(id)arg2;
- (id)_dateInSystemCalendarFromComponents:(id)arg1;
- (id)_timeZoneDescription:(id)arg1;
- (void)_allDayChanged:(id)arg1;
- (void)_datePickerChanged:(id)arg1;
- (void)_updateDateColors;
- (void)_adjustDatePickerFrame:(id)arg1 toFillEnclosingViewWidth:(id)arg2;
- (void)_updateDatePickerAnimated:(_Bool)arg1;
- (_Bool)_endDateIsBeforeStartDate;
- (void)_resetStartString:(_Bool)arg1 endString:(_Bool)arg2;
- (void)_updateTimeWidths;
- (void)_pickNextReasonableTime;
- (void)_hideInlineDateControls;
- (void)_setEndTimeZone:(id)arg1;
- (void)_setStartTimeZone:(id)arg1;
- (void)_validateTimezones;
- (void)_setAllDay:(_Bool)arg1;
- (void)_setEndDate:(id)arg1;
- (void)_setStartDate:(id)arg1;
- (void)timeZoneViewControllerDidCancel:(id)arg1;
- (void)timeZoneViewController:(id)arg1 didSelectTimeZone:(id)arg2;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (id)_calendarForEventComponents:(_Bool)arg1;
- (void)endInlineEditing;
- (void)editor:(id)arg1 didStartEditingItem:(id)arg2;
- (_Bool)usesDetailViewControllerForSubitem:(unsigned int)arg1;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned int)arg2;
- (_Bool)editor:(id)arg1 canSelectSubitem:(unsigned int)arg2;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (void)shortenCell:(id)arg1;
- (void)_datePickerDoubleTapped:(id)arg1;
- (id)_endDatePickerCell;
- (id)_startDatePickerCell;
- (id)_newDatePicker;
- (id)_endTimeZoneCell;
- (id)_startTimeZoneCell;
- (id)_allDayCell;
- (id)_endDateCell;
- (id)_startDateCell;
- (unsigned int)numberOfSubitems;
- (int)_subitemForRow:(int)arg1;
- (int)_rowForSubitem:(int)arg1;
- (_Bool)isInline;
- (_Bool)forceRefreshLocationItemOnSave;
- (_Bool)forceRefreshInviteesItemOnSave;
- (_Bool)requiresReconfigurationOnSave;
- (_Bool)configureForCalendarConstraints:(id)arg1;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (void)_adjustStartAndEndComponentsForEventIfNeeded:(id)arg1;
- (void)_refreshDatePicker;
- (void)refreshFromCalendarItemAndStore;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
