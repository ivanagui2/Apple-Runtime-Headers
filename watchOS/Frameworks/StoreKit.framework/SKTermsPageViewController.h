//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UINavigationBarDelegate.h"

@class NSString, UINavigationBar, UIToolbar, UIWebView;

@interface SKTermsPageViewController : UIViewController <UINavigationBarDelegate>
{
    UINavigationBar *_navbar;
    NSString *_terms;
    UIToolbar *_toolbar;
    UIWebView *_webview;
    id <SKTermsPageViewControllerDelegate> _delegate;
}

@property(nonatomic) id <SKTermsPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_markupTermsWithHTML:(id)arg1;
- (void)_loadSubviews;
- (void)_dismissViewControllerAnimated:(_Bool)arg1 withAcceptance:(_Bool)arg2;
- (void)_dismissViewControllerAnimated:(_Bool)arg1;
- (void)_buttonDecline:(id)arg1;
- (void)_buttonAccept:(id)arg1;
- (void)_dismissViewController;
- (int)positionForBar:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (unsigned int)edgesForExtendedLayout;
- (void)dealloc;
- (id)initWithTerms:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
