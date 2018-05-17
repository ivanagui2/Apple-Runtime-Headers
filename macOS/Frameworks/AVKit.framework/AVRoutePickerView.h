//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "AVRoutePickerViewRemoteViewControllerDelegate.h"
#import "NSPopoverDelegate.h"

@class AVMicaPackage, AVRoutePickerRemoteViewController, NSButton, NSColor, NSMutableDictionary, NSPopover, NSString;

@interface AVRoutePickerView : NSView <NSPopoverDelegate, AVRoutePickerViewRemoteViewControllerDelegate>
{
    NSButton *_pickerButton;
    AVMicaPackage *_pickerButtonMicaPackage;
    struct CGSize _oldSize;
    NSColor *_defaultButtonColor;
    NSColor *_defaultActiveButtonColor;
    NSMutableDictionary *_pickerButtonColors;
    BOOL _airPlayActive;
    BOOL _routePickerButtonBordered;
    NSPopover *_audioRoutingPopover;
    AVRoutePickerRemoteViewController *_audioRoutesRemoteViewController;
    id <AVRoutePickerViewDelegate> _delegate;
}

@property __weak id <AVRoutePickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setAirPlayActive:(BOOL)arg1;
- (BOOL)_isAirPlayActive;
- (void)_outputContextDevicesDidChange:(id)arg1;
- (void)_unregisterNotifications;
- (void)_registerNotifications;
- (void)_updateAirPlayActive;
- (void)_updatePickerButtonEnabledState;
- (void)_updatePickerButtonAppearance;
- (void)_pickerButtonPressed:(id)arg1;
- (void)routePickerRemoteViewControllerDidBecomeReadyForDisplay:(id)arg1;
- (void)routePickerRemoteViewController:(id)arg1 viewBridgeConnectionDidFailWithError:(id)arg2;
- (void)popoverDidClose:(id)arg1;
- (void)popoverWillShow:(id)arg1;
@property(getter=isRoutePickerButtonBordered) BOOL routePickerButtonBordered;
- (void)setRoutePickerButtonColor:(id)arg1 forState:(long long)arg2;
- (id)routePickerButtonColorForState:(long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layout;
- (void)viewDidMoveToWindow;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
