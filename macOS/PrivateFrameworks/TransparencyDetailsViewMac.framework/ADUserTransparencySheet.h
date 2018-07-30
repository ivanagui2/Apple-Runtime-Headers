//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "WKNavigationDelegate.h"

@class NSButton, NSProgressIndicator, NSString, NSTextField, WKWebView;

@interface ADUserTransparencySheet : NSWindowController <WKNavigationDelegate>
{
    NSProgressIndicator *activityIndicator;
    NSButton *doneButton;
    id <ADUserTransparencySheetDelegate> _delegate;
    NSString *_userTransparencyDetailsUnavailableMessage;
    NSString *_userTransparencyRendererPayload;
    NSString *_userTransparencyRendererURL;
    NSTextField *_errorTextField;
    WKWebView *_userPrivacyWebView;
}

@property(retain, nonatomic) WKWebView *userPrivacyWebView; // @synthesize userPrivacyWebView=_userPrivacyWebView;
@property(retain, nonatomic) NSTextField *errorTextField; // @synthesize errorTextField=_errorTextField;
@property(retain, nonatomic) NSString *userTransparencyRendererURL; // @synthesize userTransparencyRendererURL=_userTransparencyRendererURL;
@property(retain, nonatomic) NSString *userTransparencyRendererPayload; // @synthesize userTransparencyRendererPayload=_userTransparencyRendererPayload;
@property(retain, nonatomic) NSString *userTransparencyDetailsUnavailableMessage; // @synthesize userTransparencyDetailsUnavailableMessage=_userTransparencyDetailsUnavailableMessage;
@property(retain, nonatomic) id <ADUserTransparencySheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_reportAdUserTransparencySheetEventWithType:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)bundleForTransparencyDetailsViewMacFramework;
- (id)normalizeChineseLanguage:(id)arg1;
- (void)_showErrorMessage:(id)arg1;
- (void)presentViewDelegate;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)_hideErrorMessage;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)loadWebView;
- (void)donePressed:(id)arg1;
- (void)immediatelyLoadSheetViewBeforeNetworkRequest;
- (void)requestUserTransparencyDetailsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)renderUserTransparencySheet;
- (id)initWithAdUserTransparencySheet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
