//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "AKAppleIDAuthenticationInAppContextPasswordDelegate.h"
#import "AuthWebViewDelegate.h"
#import "NSTouchBarProvider.h"

@class AKAuthWebTabView, AKIDPHandler, AKIDPProvidedSignInViewController, AKKeepUsingController, AKNoCodeReceivedController, AKSecondFactorCodeEntryController, AKServerRequestConfiguration, AKSignInPromptController, AKTooManyAttemptsController, CDPEnrollViewController, NSImageView, NSMutableArray, NSString, NSTouchBar, NSView, NSWindow;

@interface AKAuthenticationPromptController : NSWindowController <NSTouchBarProvider, AuthWebViewDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate>
{
    BOOL _makeSheetCritical;
    BOOL _currentlyActive;
    NSView *_view;
    NSWindow *_hostWindow;
    NSString *_windowTitle;
    NSView *_hostView;
    long long _mode;
    AKServerRequestConfiguration *_serverRequestConfiguration;
    id _clientInfo;
    NSView *_icscView;
    CDPEnrollViewController *_iCSCController;
    AKIDPHandler *_idpHandler;
    CDUnknownBlockType _passwordHandler;
    NSImageView *_highlightingView;
    AKSignInPromptController *_signInPromptController;
    AKTooManyAttemptsController *_tooManyAttemptsController;
    AKSecondFactorCodeEntryController *_secondFactorController;
    AKNoCodeReceivedController *_noCodeReceivedController;
    AKKeepUsingController *_keepUsingController;
    AKAuthWebTabView *_webviewController;
    AKIDPProvidedSignInViewController *_idpViewController;
    NSView *_signInView;
    NSView *_tooManyAttemptsView;
    NSView *_secondFactorView;
    NSView *_noCodeReceivedView;
    NSView *_keepUsingView;
    NSView *_webView;
    NSMutableArray *_viewStack;
    long long _previousMode;
}

@property long long previousMode; // @synthesize previousMode=_previousMode;
@property(retain) NSMutableArray *viewStack; // @synthesize viewStack=_viewStack;
@property(retain) NSView *webView; // @synthesize webView=_webView;
@property(retain) NSView *keepUsingView; // @synthesize keepUsingView=_keepUsingView;
@property(retain) NSView *noCodeReceivedView; // @synthesize noCodeReceivedView=_noCodeReceivedView;
@property(retain) NSView *secondFactorView; // @synthesize secondFactorView=_secondFactorView;
@property(retain) NSView *tooManyAttemptsView; // @synthesize tooManyAttemptsView=_tooManyAttemptsView;
@property(retain) NSView *signInView; // @synthesize signInView=_signInView;
@property(retain) AKIDPProvidedSignInViewController *idpViewController; // @synthesize idpViewController=_idpViewController;
@property(retain) AKAuthWebTabView *webviewController; // @synthesize webviewController=_webviewController;
@property(retain) AKKeepUsingController *keepUsingController; // @synthesize keepUsingController=_keepUsingController;
@property(retain) AKNoCodeReceivedController *noCodeReceivedController; // @synthesize noCodeReceivedController=_noCodeReceivedController;
@property(retain) AKSecondFactorCodeEntryController *secondFactorController; // @synthesize secondFactorController=_secondFactorController;
@property(retain) AKTooManyAttemptsController *tooManyAttemptsController; // @synthesize tooManyAttemptsController=_tooManyAttemptsController;
@property(retain) AKSignInPromptController *signInPromptController; // @synthesize signInPromptController=_signInPromptController;
@property BOOL currentlyActive; // @synthesize currentlyActive=_currentlyActive;
@property(retain) NSImageView *highlightingView; // @synthesize highlightingView=_highlightingView;
@property(copy) CDUnknownBlockType passwordHandler; // @synthesize passwordHandler=_passwordHandler;
@property(retain) AKIDPHandler *idpHandler; // @synthesize idpHandler=_idpHandler;
@property(retain) CDPEnrollViewController *iCSCController; // @synthesize iCSCController=_iCSCController;
@property(retain) NSView *icscView; // @synthesize icscView=_icscView;
@property(retain) id clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain) AKServerRequestConfiguration *serverRequestConfiguration; // @synthesize serverRequestConfiguration=_serverRequestConfiguration;
@property(readonly) long long mode; // @synthesize mode=_mode;
@property __weak NSView *hostView; // @synthesize hostView=_hostView;
@property(retain) NSString *windowTitle; // @synthesize windowTitle=_windowTitle;
@property BOOL makeSheetCritical; // @synthesize makeSheetCritical=_makeSheetCritical;
@property __weak NSWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
@property(retain) NSView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)context:(id)arg1 needsPasswordWithCompletion:(CDUnknownBlockType)arg2;
- (void)skipAndContinueSignIn;
- (void)sizeChangedFrom:(struct CGSize)arg1 toSize:(struct CGSize)arg2 webViewName:(id)arg3 callback:(id)arg4;
- (void)loadFailed:(id)arg1 withError:(id)arg2;
- (void)endWebView:(id)arg1;
- (void)setupViewsForActiveMode;
- (void)switchToView:(id)arg1;
- (BOOL)isViewBasedContext;
- (id)currentViewController;
- (id)viewControllerForMode:(long long)arg1;
- (id)_viewForMode:(long long)arg1;
- (void)refreshForMode:(long long)arg1;
- (void)settleNewMode;
- (double)animationResizeTime;
- (void)_setupHighlightingView;
- (void)_addSubView:(id)arg1;
- (void)switchToView:(id)arg1 fromView:(id)arg2;
- (void)leaveAllModes;
- (BOOL)leaveMode;
- (void)setMode:(long long)arg1;
- (void)windowWillClose;
- (void)closeModal;
- (void)dismissModal;
- (void)runModalWithExistingViews;
- (void)runModal;
@property(readonly) NSTouchBar *touchBar;
- (void)awakeFromNib;
- (id)initAtMode:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
