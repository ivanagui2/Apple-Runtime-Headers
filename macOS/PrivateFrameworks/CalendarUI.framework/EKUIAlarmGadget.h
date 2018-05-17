//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUI/EKUILabeledGadget.h>

@class EKAlarm, EKUIAlarmButton, EKUIAlarmCompositeGadget, EKUIAlarmContainerView, EKUIPopUpButton, NSArray;

@interface EKUIAlarmGadget : EKUILabeledGadget
{
    BOOL _addButtonAvailible;
    EKAlarm *_alarm;
    EKUIAlarmContainerView *_container;
    EKUIPopUpButton *_alarmPicker;
    EKUIAlarmButton *_addButton;
    unsigned long long _currentTrigger;
    EKUIAlarmCompositeGadget *_alarmsContainer;
    NSArray *_alarmConstraints;
}

@property(retain) NSArray *alarmConstraints; // @synthesize alarmConstraints=_alarmConstraints;
@property __weak EKUIAlarmCompositeGadget *alarmsContainer; // @synthesize alarmsContainer=_alarmsContainer;
@property unsigned long long currentTrigger; // @synthesize currentTrigger=_currentTrigger;
@property(retain) EKUIAlarmButton *addButton; // @synthesize addButton=_addButton;
@property(retain) EKUIPopUpButton *alarmPicker; // @synthesize alarmPicker=_alarmPicker;
@property(retain) EKUIAlarmContainerView *container; // @synthesize container=_container;
@property BOOL addButtonAvailible; // @synthesize addButtonAvailible=_addButtonAvailible;
@property(retain) EKAlarm *alarm; // @synthesize alarm=_alarm;
- (void).cxx_destruct;
- (void)updateWithAlarm:(id)arg1;
- (id)defaultAlarmDescriptionWithAbbreviation:(BOOL)arg1;
- (id)alarmDescriptionWithAbbreviation:(BOOL)arg1;
- (id)viewForBaselineAlignment;
- (double)preferredControlWidth;
- (double)pixelsBetweenLabelAndControl;
- (double)baselineOffset;
- (id)control;
- (id)labelString;
- (BOOL)shouldDisplay;
- (BOOL)isEditable;
- (BOOL)hideAddAlarmView;
- (void)mouseExitedGadgetView;
- (BOOL)showAddAlarmView;
- (void)mouseEnteredGadgetView;
- (void)updateConstraints;
- (void)updateAlarmWithTrigger:(unsigned long long)arg1;
- (unsigned long long)triggerForRelativeOffset:(double)arg1;
- (double)relativeOffsetForTrigger:(unsigned long long)arg1;
- (id)titleForTrigger:(unsigned long long)arg1 abbreviated:(BOOL)arg2 hasTravelTime:(BOOL)arg3;
- (void)alarmTriggerSelected;
- (id)addMenuItemForTrigger:(unsigned long long)arg1;
- (void)setMenuItem:(id)arg1 title:(id)arg2 withAbbreviatedTitle:(id)arg3;
- (void)updateMenu;
- (id)initWithCompositeGadget:(id)arg1;

@end
