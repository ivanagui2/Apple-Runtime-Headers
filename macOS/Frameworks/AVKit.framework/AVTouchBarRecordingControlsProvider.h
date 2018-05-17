//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSResponder.h"

#import "AVTouchBarAudioCaptureDeviceSelectionButtonViewControllerDelegate.h"
#import "AVTouchBarCaptureInputSourceSelectionViewControllerDelegate.h"
#import "NSTouchBarDelegate.h"
#import "NSTouchBarProvider.h"

@class AVTouchBarAudioCaptureDeviceSelectionButtonViewController, AVTouchBarCaptureInputSourceSelectionViewController, AVTouchBarRecordingControlsViewController, NSCustomTouchBarItem, NSGroupTouchBarItem, NSPopoverTouchBarItem, NSSpaceTouchBarItem, NSString, NSTouchBar;

@interface AVTouchBarRecordingControlsProvider : NSResponder <NSTouchBarDelegate, AVTouchBarCaptureInputSourceSelectionViewControllerDelegate, AVTouchBarAudioCaptureDeviceSelectionButtonViewControllerDelegate, NSTouchBarProvider>
{
    id <AVTouchBarRecordingControlsControlling> _recordingControlsController;
    id <AVTouchBarRecordingControlsControllingInternal> _captureController;
    long long _controlsType;
    BOOL _optionKeyPressed;
    NSTouchBar *_touchBar;
    NSGroupTouchBarItem *_groupTouchBarItem;
    NSCustomTouchBarItem *_recordingControlsTouchBarItem;
    AVTouchBarRecordingControlsViewController *_touchBarRecordingControlsViewController;
    NSCustomTouchBarItem *_captureInputSourceSelectionTouchBarItem;
    AVTouchBarCaptureInputSourceSelectionViewController *_touchBarCaptureInputSourceSelectionViewController;
    NSPopoverTouchBarItem *_audioCaptureDeviceSelectionButtonTouchBarItem;
    AVTouchBarAudioCaptureDeviceSelectionButtonViewController *_touchBarAudioCaptureDeviceSelectionButtonViewController;
    NSCustomTouchBarItem *_audioCaptureDeviceSelectionTouchBarItem;
    AVTouchBarCaptureInputSourceSelectionViewController *_touchBarAudioCaptureDeviceSelectionViewController;
    NSSpaceTouchBarItem *_zeroMinimumWidthSpaceTouchBarItem;
    NSSpaceTouchBarItem *_popoverSpaceTouchBarItem;
}

- (void).cxx_destruct;
- (BOOL)_isTouchBarAudioCaptureDeviceSelectionViewControllerLoaded;
- (id)_touchBarAudioCaptureDeviceSelectionViewController;
- (BOOL)_isTouchBarAudioCaptureDeviceSelectionButtonViewControllerLoaded;
- (id)_touchBarAudioCaptureDeviceSelectionButtonViewController;
- (BOOL)_isTouchBarCaptureInputSourceSelectionViewControllerLoaded;
- (id)_touchBarCaptureInputSourceSelectionViewController;
- (BOOL)_isTouchBarRecordingControlsViewControllerLoaded;
- (id)_touchBarRecordingControlsViewController;
- (void)_updateTouchBarItemIdentifiersForTouchBar:(id)arg1;
- (void)_updateTouchBarCaptureInputSourceSelectionViewControllerControlsType;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
@property(readonly) NSTouchBar *touchBar;
- (void)touchBarAudioCaptureDeviceSelectionButtonViewControllerPresentDeviceSelectionPopover:(id)arg1;
- (void)touchBarCaptureInputSourceSelectionViewController:(id)arg1 didSelectTouchBarCaptureInputSourceItem:(id)arg2;
@property(getter=isOptionKeyPressed) BOOL optionKeyPressed;
@property long long controlsType;
@property(retain) id <AVTouchBarRecordingControlsControllingInternal> captureController;
@property(retain) id <AVTouchBarRecordingControlsControlling> recordingControlsController;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
