//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import "UIInputViewControllerNeedSceneSize.h"
#import "UIPopoverPresentationControllerDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSString, UIView, _SFPasswordViewController;

__attribute__((visibility("hidden")))
@interface UIKeyboardHiddenViewController : UIViewController <UIViewControllerTransitioningDelegate, UIPopoverPresentationControllerDelegate, UIInputViewControllerNeedSceneSize>
{
    _SFPasswordViewController *_autofillVC;
    _Bool _presentedAutofill;
    _Bool _focusWasDeferredBeforeDeactivation;
    _Bool _isFocusDeferred;
    unsigned int _deferredContextID;
    NSString *_deferredDisplayUUID;
    UIView *_sourceView;
}

@property(nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) _Bool presentedAutofill; // @synthesize presentedAutofill=_presentedAutofill;
@property(retain, nonatomic) _SFPasswordViewController *autofillVC; // @synthesize autofillVC=_autofillVC;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)_sceneDidChange;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (_Bool)_formSheetObeysContentContainerSize;
- (void)presentViewController:(_Bool)arg1;
- (void)presentAutofillVCWithAnimation:(_Bool)arg1;
- (void)presentSelfWithAnimation:(_Bool)arg1;
- (long long)customModalPresentationStyle;
- (_Bool)shouldPresentAsPopover;
- (void)_willChangeToFirstResponder:(id)arg1;
- (void)_setDeferred:(_Bool)arg1 forDisplayUUID:(id)arg2;
- (id)_clientDeferralProperties;
- (id)_hostDeferralProperties;
- (id)_deferredPropertiesForClientContext:(unsigned int)arg1;
- (void)_applicationWillDeactivate:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_deviceWillLock:(id)arg1;
- (void)passwordViewControllerDidFinish:(id)arg1;
- (void)_localAuthenticationUIDismissed;
- (void)_localAuthenticationUIPresented;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
