//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSString, WKWebView, _WKAutomationSession;

@protocol _WKAutomationSessionDelegate <NSObject>

@optional
- (long long)_automationSession:(_WKAutomationSession *)arg1 typeOfCurrentJavaScriptDialogOnPage:(const struct OpaqueWKPage *)arg2;
- (void)_automationSession:(_WKAutomationSession *)arg1 setUserInput:(NSString *)arg2 forCurrentJavaScriptDialogOnPage:(const struct OpaqueWKPage *)arg3;
- (NSString *)_automationSession:(_WKAutomationSession *)arg1 messageOfCurrentJavaScriptDialogOnPage:(const struct OpaqueWKPage *)arg2;
- (void)_automationSession:(_WKAutomationSession *)arg1 acceptCurrentJavaScriptDialogOnPage:(const struct OpaqueWKPage *)arg2;
- (void)_automationSession:(_WKAutomationSession *)arg1 dismissCurrentJavaScriptDialogOnPage:(const struct OpaqueWKPage *)arg2;
- (BOOL)_automationSession:(_WKAutomationSession *)arg1 isShowingJavaScriptDialogOnPage:(const struct OpaqueWKPage *)arg2;
- (void)_automationSession:(_WKAutomationSession *)arg1 requestSwitchToPage:(const struct OpaqueWKPage *)arg2 completionHandler:(void (^)(void))arg3;
- (void)_automationSession:(_WKAutomationSession *)arg1 requestMaximizeWindowOfPage:(const struct OpaqueWKPage *)arg2 completionHandler:(void (^)(void))arg3;
- (void)_automationSession:(_WKAutomationSession *)arg1 requestRestoreWindowOfPage:(const struct OpaqueWKPage *)arg2 completionHandler:(void (^)(void))arg3;
- (void)_automationSession:(_WKAutomationSession *)arg1 requestHideWindowOfPage:(const struct OpaqueWKPage *)arg2 completionHandler:(void (^)(void))arg3;
- (void)_automationSession:(_WKAutomationSession *)arg1 requestNewPageWithOptions:(unsigned long long)arg2 completionHandler:(void (^)(struct OpaqueWKPage *))arg3;
- (long long)_automationSession:(_WKAutomationSession *)arg1 typeOfCurrentJavaScriptDialogForWebView:(WKWebView *)arg2;
- (void)_automationSession:(_WKAutomationSession *)arg1 setUserInput:(NSString *)arg2 forCurrentJavaScriptDialogForWebView:(WKWebView *)arg3;
- (NSString *)_automationSession:(_WKAutomationSession *)arg1 messageOfCurrentJavaScriptDialogForWebView:(WKWebView *)arg2;
- (void)_automationSession:(_WKAutomationSession *)arg1 acceptCurrentJavaScriptDialogForWebView:(WKWebView *)arg2;
- (void)_automationSession:(_WKAutomationSession *)arg1 dismissCurrentJavaScriptDialogForWebView:(WKWebView *)arg2;
- (BOOL)_automationSession:(_WKAutomationSession *)arg1 isShowingJavaScriptDialogForWebView:(WKWebView *)arg2;
- (void)_automationSession:(_WKAutomationSession *)arg1 requestSwitchToWebView:(WKWebView *)arg2 completionHandler:(void (^)(void))arg3;
- (void)_automationSession:(_WKAutomationSession *)arg1 requestMaximizeWindowOfWebView:(WKWebView *)arg2 completionHandler:(void (^)(void))arg3;
- (void)_automationSession:(_WKAutomationSession *)arg1 requestRestoreWindowOfWebView:(WKWebView *)arg2 completionHandler:(void (^)(void))arg3;
- (void)_automationSession:(_WKAutomationSession *)arg1 requestHideWindowOfWebView:(WKWebView *)arg2 completionHandler:(void (^)(void))arg3;
- (void)_automationSession:(_WKAutomationSession *)arg1 requestNewWebViewWithOptions:(unsigned long long)arg2 completionHandler:(void (^)(WKWebView *))arg3;
- (void)_automationSessionDidDisconnectFromRemote:(_WKAutomationSession *)arg1;
@end

