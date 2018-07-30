//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<NSSecureCoding>, UITextSuggestion, UIView, WKWebView;

@protocol _WKInputDelegate <NSObject>

@optional
- (UIView *)_webView:(WKWebView *)arg1 focusedElementContextViewForInputSession:(id <_WKFormInputSession>)arg2;
- (float)_webView:(WKWebView *)arg1 focusedElementContextViewHeightForFittingSize:(struct CGSize)arg2 inputSession:(id <_WKFormInputSession>)arg3;
- (_Bool)_webView:(WKWebView *)arg1 shouldRevealFocusOverlayForInputSession:(id <_WKFormInputSession>)arg2;
- (_Bool)_webView:(WKWebView *)arg1 focusRequiresStrongPasswordAssistance:(id <_WKFocusedElementInfo>)arg2;
- (void)_webView:(WKWebView *)arg1 willStartInputSession:(id <_WKFormInputSession>)arg2;
- (void)_webView:(WKWebView *)arg1 insertTextSuggestion:(UITextSuggestion *)arg2 inInputSession:(id <_WKFormInputSession>)arg3;
- (void)_webView:(WKWebView *)arg1 accessoryViewCustomButtonTappedInFormInputSession:(id <_WKFormInputSession>)arg2;
- (int)_webView:(WKWebView *)arg1 decidePolicyForFocusedElement:(id <_WKFocusedElementInfo>)arg2;
- (_Bool)_webView:(WKWebView *)arg1 focusShouldStartInputSession:(id <_WKFocusedElementInfo>)arg2;
- (void)_webView:(WKWebView *)arg1 willSubmitFormValues:(NSDictionary *)arg2 userObject:(NSObject<NSSecureCoding> *)arg3 submissionHandler:(void (^)(void))arg4;
- (void)_webView:(WKWebView *)arg1 didStartInputSession:(id <_WKFormInputSession>)arg2;
@end
