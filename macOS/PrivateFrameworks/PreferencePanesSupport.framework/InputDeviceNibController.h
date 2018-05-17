//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class InputDeviceController, NSButton, NSString, NSView;

@interface InputDeviceNibController : NSObject
{
    NSView *mContentView;
    NSButton *mSetupBTButton;
    InputDeviceController *mController;
    NSButton *mSetupBTBackButton;
}

@property(readonly) InputDeviceController *controller; // @synthesize controller=mController;
@property(readonly) NSButton *setupBTBackButton; // @synthesize setupBTBackButton=mSetupBTBackButton;
@property(readonly) NSButton *setupBTButton; // @synthesize setupBTButton=mSetupBTButton;
@property(readonly) NSView *contentView; // @synthesize contentView=mContentView;
- (void).cxx_destruct;
- (id)fieldEditorForObject:(id)arg1;
- (void)updateButtons;
- (void)willSwitchOut;
- (void)willResignActive;
- (void)willBecomeActive;
- (void)willUnselect;
- (void)didSelect;
- (void)willSelect;
- (void)updateDevice:(id)arg1;
@property(readonly) NSString *nibFileName; // @dynamic nibFileName;
- (void)awakeFromNib;
- (void)dealloc;
- (void)_btAvailabilityDidChangeNotification:(id)arg1;

@end
