//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIRemoteViewController.h"

#import "SFWebAppRemoteViewControllerProtocol.h"

@class NSString;

@interface _SFWebAppViewController : _UIRemoteViewController <SFWebAppRemoteViewControllerProtocol>
{
    id <_SFWebAppViewControllerDelegate> _delegate;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak id <_SFWebAppViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didChangeFullScreen:(_Bool)arg1;
- (void)initialLoadDidRedirectToURL:(id)arg1;
- (void)didDecideCookieSharingForURL:(id)arg1 shouldCancel:(_Bool)arg2;
- (void)willOpenURLInHostApplication:(id)arg1;
- (void)setRemoteSwipeGestureEnabled:(_Bool)arg1;
- (void)executeCustomActivityProxyID:(id)arg1;
- (void)fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2;
- (void)didFinishInitialLoad:(_Bool)arg1;
- (void)willDismissServiceViewController;
- (void)didLoadWebView;
- (void)didChangeLoadingState:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadWebAppWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
