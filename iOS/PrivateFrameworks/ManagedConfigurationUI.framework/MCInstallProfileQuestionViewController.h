//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <ManagedConfigurationUI/PSStateRestoration-Protocol.h>
#import <ManagedConfigurationUI/UITextFieldDelegate-Protocol.h>

@class MCUIFieldCollection, NSString, UIAlertView, UITextField;
@protocol MCProfileQuestionsControllerDelegate;

__attribute__((visibility("hidden")))
@interface MCInstallProfileQuestionViewController : UITableViewController <PSStateRestoration, UITextFieldDelegate>
{
    MCUIFieldCollection *_fieldCollection;
    NSString *_previousResponseValue;
    _Bool _waitingForPasscodePreflight;
    int _outDirection;
    UIAlertView *_activeAlert;
    _Bool _showingKeyboard;
    _Bool _isLastQuestion;
    id <MCProfileQuestionsControllerDelegate> _questionsDelegate;
    UITextField *_textField;
}

@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) int outDirection; // @synthesize outDirection=_outDirection;
@property(nonatomic) __weak id <MCProfileQuestionsControllerDelegate> questionsDelegate; // @synthesize questionsDelegate=_questionsDelegate;
- (void).cxx_destruct;
- (void)_textFieldValueChanged:(id)arg1;
- (void)_continueOrFinish;
- (void)_finishInput;
- (void)_retryCurrentPasswordFieldWithError:(id)arg1;
- (void)_retryWithCurrentField;
- (void)_continueWithCurrentField;
- (void)_cancelInput;
- (void)_tellDelegateDidFinishWithUserInputResponses:(id)arg1;
- (void)_questionFieldNotEmpty:(id)arg1;
- (void)_questionFieldEmpty:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)_cancelActiveAlert:(_Bool)arg1;
- (void)_showErrorAlertWithError:(id)arg1;
- (void)_updateNavigationBar;
- (void)_showNavButtonsAnimated:(_Bool)arg1;
- (void)_hideProgressIndicator;
- (void)_showProgressIndicator;
- (void)_enableRightButton;
- (void)_disableRightButton;
- (void)_cancelButtonClicked;
- (void)_nextButtonClicked;
- (void)_hideKeyboard:(_Bool)arg1;
- (void)_showKeyboard:(_Bool)arg1;
- (void)_processResponseAndContinue;
- (void)updateWithUserInput:(id)arg1;
- (void)stopWaitingForMoreInput;
- (void)waitForMoreInput;
- (void)_cancelPayload;
- (void)_skipPayload;
- (void)_retryPayload;
- (void)profileConnection:(id)arg1 didFinishPreflightWithError:(id)arg2;
- (void)_didFinishPreflightWithError:(id)arg1;
- (void)_didFinishPasscodePreflightWithError:(id)arg1;
- (void)_preflightCurrentPayload;
- (void)_configureQuestionField:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)canBeShownFromSuspendedState;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (void)_setup;
- (id)initWithFieldCollection:(id)arg1;
- (id)initWithUserInput:(id)arg1;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

