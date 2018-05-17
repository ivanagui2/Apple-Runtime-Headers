//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AuthKitUI/AKBaseSignInViewController.h>

#import "AKAppleIDAuthenticationInAppContextPasswordDelegate.h"
#import "UITextFieldDelegate.h"

@class AKAppleIDAuthenticationInAppContext, AKTextField, NSString, UIActivityIndicatorView, UIButton, UIColor, UIView;

@interface AKInlineSignInViewController : AKBaseSignInViewController <UITextFieldDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate>
{
    _Bool _usesDarkMode;
    _Bool _usesVibrancy;
    int _blurEffectStyle;
    NSString *_secondaryButtonTitle;
    NSString *_tertiaryButtonTitle;
    AKAppleIDAuthenticationInAppContext *_context;
    CDUnknownBlockType _passwordRequiredCompletion;
    _Bool _wantsAuthenticationProgress;
    NSString *_primaryButtonTitle;
    UIColor *_fieldBackgroundColor;
    UIView *_loginFieldsContainer;
    AKTextField *_appleIDField;
    AKTextField *_passwordField;
    UIButton *_signInButton;
    UIButton *_iforgotButton;
    UIButton *_createAppleIDButton;
    UIActivityIndicatorView *_spinner;
}

@property(retain) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain) UIButton *createAppleIDButton; // @synthesize createAppleIDButton=_createAppleIDButton;
@property(retain) UIButton *iforgotButton; // @synthesize iforgotButton=_iforgotButton;
@property(retain) UIButton *signInButton; // @synthesize signInButton=_signInButton;
@property(retain) AKTextField *passwordField; // @synthesize passwordField=_passwordField;
@property(retain) AKTextField *appleIDField; // @synthesize appleIDField=_appleIDField;
@property(retain) UIView *loginFieldsContainer; // @synthesize loginFieldsContainer=_loginFieldsContainer;
@property(retain, nonatomic) UIColor *fieldBackgroundColor; // @synthesize fieldBackgroundColor=_fieldBackgroundColor;
@property(readonly) NSString *primaryButtonTitle; // @synthesize primaryButtonTitle=_primaryButtonTitle;
@property _Bool wantsAuthenticationProgress; // @synthesize wantsAuthenticationProgress=_wantsAuthenticationProgress;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)context:(id)arg1 needsPasswordWithCompletion:(CDUnknownBlockType)arg2;
@property(nonatomic) int blurEffectStyle;
@property(nonatomic) _Bool usesVibrancy;
- (void)_updateFonts:(id)arg1;
- (void)_updateSignInButtonState;
- (void)_passwordTextFieldDidChange:(id)arg1;
- (void)_appleIDTextFieldDidChange:(id)arg1;
- (void)_setPasswordFieldHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_hidebusyWorkUI;
- (void)_startBusyWorkUI;
- (void)_beginAuthenticationIfPossibleWithOption:(unsigned int)arg1;
- (void)createAppleIDButtonWasTapped:(id)arg1;
- (void)iForgotButtonWasTapped:(id)arg1;
- (void)signInButtonWasTapped:(id)arg1;
- (void)_updateVibrancyAndBlurInTextFields;
- (void)_prefillAuthFields;
- (void)_updateSignInFieldStatuses;
- (void)_updatePlaceholderIfNeeded;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setContext:(id)arg1;
- (id)context;
- (void)setTertiaryButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)setSecondaryButtonTarget:(id)arg1 action:(SEL)arg2;
@property(copy) NSString *tertiaryButtonTitle;
@property(copy) NSString *secondaryButtonTitle;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (id)init;
- (_Bool)usesDarkMode;
- (void)setUsesDarkMode:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
