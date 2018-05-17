//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPeerPaymentAccountResolutionControllerDelegate.h"

@class NSString, PKPeerPaymentAccountResolutionController, PKPeerPaymentIdentityVerificationResponse, PKPeerPaymentWebService, UIImage;

@interface PKPeerPaymentDocumentSubmissionController : NSObject <PKPeerPaymentAccountResolutionControllerDelegate>
{
    _Bool _supportsBackID;
    _Bool _supportsPassport;
    int _state;
    id <PKPeerPaymentDocumentSubmissionControllerDelegate> _delegate;
    int _side;
    unsigned int _type;
    PKPeerPaymentWebService *_webService;
    PKPeerPaymentIdentityVerificationResponse *_identityVerificationResponse;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
    int _context;
    PKPeerPaymentAccountResolutionController *_accountResolutionController;
    UIImage *_frontID;
    UIImage *_backID;
    NSString *_selectedCountryCode;
}

@property(retain, nonatomic) NSString *selectedCountryCode; // @synthesize selectedCountryCode=_selectedCountryCode;
@property(nonatomic) _Bool supportsPassport; // @synthesize supportsPassport=_supportsPassport;
@property(nonatomic) _Bool supportsBackID; // @synthesize supportsBackID=_supportsBackID;
@property(retain, nonatomic) UIImage *backID; // @synthesize backID=_backID;
@property(retain, nonatomic) UIImage *frontID; // @synthesize frontID=_frontID;
@property(retain, nonatomic) PKPeerPaymentAccountResolutionController *accountResolutionController; // @synthesize accountResolutionController=_accountResolutionController;
@property(nonatomic) int context; // @synthesize context=_context;
@property(retain, nonatomic) id <PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property(retain, nonatomic) PKPeerPaymentIdentityVerificationResponse *identityVerificationResponse; // @synthesize identityVerificationResponse=_identityVerificationResponse;
@property(retain, nonatomic) PKPeerPaymentWebService *webService; // @synthesize webService=_webService;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) int side; // @synthesize side=_side;
@property(nonatomic) __weak id <PKPeerPaymentDocumentSubmissionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)_dismissViewController;
- (void)_presentViewController:(id)arg1;
- (void)stateChanged;
- (void)finishPressedFromViewController:(id)arg1;
- (void)userWantsToCancelFromViewController:(id)arg1;
- (void)contactApplePressed;
- (void)uploadID;
- (void)tryUploadAgain;
- (void)scanAgain;
- (void)captureFailedWithError:(id)arg1;
- (void)userRejectedCapturedID;
- (void)userApprovedCapturedID;
- (void)userWantsToContinue;
- (void)capturedImage:(id)arg1;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(_Bool)arg2;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(_Bool)arg3;
- (id)nextViewController;
- (id)initWithPeerPaymentWebService:(id)arg1 identityVerificationResponse:(id)arg2 setupDelegate:(id)arg3 context:(int)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
