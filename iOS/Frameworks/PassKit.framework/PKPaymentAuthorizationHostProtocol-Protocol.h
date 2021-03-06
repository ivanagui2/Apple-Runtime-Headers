//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKit/NSObject-Protocol.h>

@class CNContact, NSError, PKAuthorizedPeerPaymentQuote, PKDisbursementVoucher, PKPayment, PKPaymentMethod, PKServiceProviderPurchase, PKShippingMethod;

@protocol PKPaymentAuthorizationHostProtocol <NSObject>
- (void)authorizationDidSelectPaymentMethod:(PKPaymentMethod *)arg1;
- (void)authorizationDidSelectShippingAddress:(CNContact *)arg1;
- (void)authorizationDidSelectShippingMethod:(PKShippingMethod *)arg1;
- (void)authorizationDidAuthorizeDisbursement:(PKDisbursementVoucher *)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuote:(PKAuthorizedPeerPaymentQuote *)arg1;
- (void)authorizationDidAuthorizePurchase:(PKServiceProviderPurchase *)arg1;
- (void)authorizationDidAuthorizePayment:(PKPayment *)arg1;
- (void)authorizationDidFinishWithError:(NSError *)arg1;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationWillStart;

@optional
- (void)didEncounterAuthorizationEvent:(unsigned long long)arg1;
- (void)connectionDidOpen;
- (void)authorizationDidPresent;
@end

