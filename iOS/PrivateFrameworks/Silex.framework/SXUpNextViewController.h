//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SXVideoAccessoryItem.h"
#import "SXVideoTransitionObserver.h"

@class NSString, SXNowPlayingButton, SXSkipViewController, UIView;

@interface SXUpNextViewController : UIViewController <SXVideoTransitionObserver, SXVideoAccessoryItem>
{
    unsigned long long _displayMode;
    SXNowPlayingButton *_upNextButton;
    SXSkipViewController *_skipViewController;
    id <SXNowPlayingVideoTitleProviding> _titleProvider;
    id <SXVideoQueueProviding> _queueProvider;
}

@property(readonly, nonatomic) id <SXVideoQueueProviding> queueProvider; // @synthesize queueProvider=_queueProvider;
@property(readonly, nonatomic) id <SXNowPlayingVideoTitleProviding> titleProvider; // @synthesize titleProvider=_titleProvider;
@property(readonly, nonatomic) SXSkipViewController *skipViewController; // @synthesize skipViewController=_skipViewController;
@property(readonly, nonatomic) SXNowPlayingButton *upNextButton; // @synthesize upNextButton=_upNextButton;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
- (void).cxx_destruct;
- (void)_layoutUpNextButton;
- (void)_layoutSkipViewController;
@property(readonly, nonatomic) UIViewController *viewController;
- (void)willTransitionToDisplayMode:(unsigned long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (id)initWithUpNextButton:(id)arg1 skipViewController:(id)arg2 titleProvider:(id)arg3 queueProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView *view;

@end
