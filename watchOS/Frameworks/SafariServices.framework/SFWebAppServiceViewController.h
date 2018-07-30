//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariServices/SFBrowserServiceViewController.h>

#import "SFWebAppServiceViewControllerProtocol.h"

@class BKSApplicationStateMonitor, NSMutableArray, NSString, UIView, UIWebClip, WKProcessPool, WKWebsiteDataStore;

__attribute__((visibility("hidden")))
@interface SFWebAppServiceViewController : SFBrowserServiceViewController <SFWebAppServiceViewControllerProtocol>
{
    UIWebClip *_webClip;
    UIView *_statusBarBackgroundView;
    WKProcessPool *_processPool;
    WKWebsiteDataStore *_websiteDataStore;
    NSMutableArray *_fallbackURLs;
    BKSApplicationStateMonitor *_stateMonitor;
    unsigned int _hostState;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
- (void).cxx_destruct;
- (void)_loadNextFallbackURL;
- (void)_loadWebClipPageURL:(id)arg1;
- (void)_handleHostStateUpdate:(id)arg1;
- (void)loadWebAppWithIdentifier:(id)arg1;
- (unsigned int)_persona;
- (void)_initialLoadFinishedWithSuccess:(_Bool)arg1;
- (id)processPool;
- (_Bool)_usesScrollToTopView;
- (void)setWebViewController:(id)arg1;
- (id)webViewConfiguration;
- (id)websiteDataStore;
- (id)websiteDataStoreConfiguration;
- (_Bool)_privateBrowsingInitiallyEnabled;
- (_Bool)canPrint;
- (void)webViewController:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webViewController:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (_Bool)_isURLOutOfScope:(id)arg1;
- (void)webViewController:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webViewControllerDidFirstVisuallyNonEmptyLayout:(id)arg1;
- (void)webViewControllerDidChangeLoadingState:(id)arg1;
- (void)_hostApplicationDidEnterBackground;
- (void)setNeedsStatusBarAppearanceUpdate;
- (int)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)dealloc;
- (_Bool)_clientIsWebApp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
