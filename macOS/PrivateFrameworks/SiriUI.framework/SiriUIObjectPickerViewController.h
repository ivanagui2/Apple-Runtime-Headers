//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class SAUIDomainObjectPicker;

@interface SiriUIObjectPickerViewController : NSViewController
{
    id <SiriUIObjectPickerViewControllerDelegate> _pickerDelegate;
    SAUIDomainObjectPicker *_picker;
}

+ (id)pickerControllerWithPicker:(id)arg1;
@property(readonly, nonatomic, getter=_picker) SAUIDomainObjectPicker *picker; // @synthesize picker=_picker;
@property(nonatomic) __weak id <SiriUIObjectPickerViewControllerDelegate> pickerDelegate; // @synthesize pickerDelegate=_pickerDelegate;
- (void).cxx_destruct;
- (void)showPicker:(id)arg1;
- (id)initWithPicker:(id)arg1;

@end
