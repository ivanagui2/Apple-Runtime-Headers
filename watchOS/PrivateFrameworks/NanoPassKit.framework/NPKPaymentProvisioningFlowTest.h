//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NPKPaymentProvisioningFlowControllerDelegate.h"

@class NPKPaymentProvisioningFlowController, NSString;

@interface NPKPaymentProvisioningFlowTest : NSObject <NPKPaymentProvisioningFlowControllerDelegate>
{
    NPKPaymentProvisioningFlowController *_flowController;
}

@property(retain, nonatomic) NPKPaymentProvisioningFlowController *flowController; // @synthesize flowController=_flowController;
- (void).cxx_destruct;
- (void)_handleProvisioningResultStepWithContext:(id)arg1;
- (void)_handleProvisioningProgressStepWithContext:(id)arg1;
- (void)_handleTermsAndConditionsStepWithContext:(id)arg1;
- (void)_handleManualEntryStepWithContext:(id)arg1;
- (void)_handleRemoteCredentialsStepWithContext:(id)arg1;
- (void)_handleWelcomeStepWithContext:(id)arg1;
- (void)_handlePreconditionsStep;
- (void)paymentProvisioningFlowController:(id)arg1 didTransitionFromStep:(unsigned int)arg2 toStep:(unsigned int)arg3 withContext:(id)arg4;
- (void)startTest;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
