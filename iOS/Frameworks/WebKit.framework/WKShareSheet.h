//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WKShareSheetDelegate;

__attribute__((visibility("hidden")))
@interface WKShareSheet : NSObject
{
    struct WeakObjCPtr<WKWebView> _webView;
    CompletionHandler_dde7f840 _completionHandler;
    struct RetainPtr<UIActivityViewController> _shareSheetViewController;
    struct RetainPtr<UIViewController> _presentationViewController;
    id <WKShareSheetDelegate> _delegate;
}

@property(nonatomic) __weak id <WKShareSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dispatchDidDismiss;
- (void)dismiss;
- (void)_didCompleteWithSuccess:(_Bool)arg1;
- (void)presentWithParameters:(const struct ShareDataWithParsedURL *)arg1 completionHandler:(CompletionHandler_dde7f840 *)arg2;
- (id)initWithView:(id)arg1;

@end

