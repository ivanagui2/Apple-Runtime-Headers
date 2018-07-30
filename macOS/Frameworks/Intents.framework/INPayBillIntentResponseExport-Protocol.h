//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class INBillDetails, INDateComponentsRange, INPaymentAccount, INPaymentAmount, NSString;

@protocol INPayBillIntentResponseExport <NSObject, JSExport>
@property(copy) NSString *transactionNote;
@property(copy) INDateComponentsRange *transactionScheduledDate;
@property(copy) INPaymentAmount *transactionAmount;
@property(copy) INBillDetails *billDetails;
@property(copy) INPaymentAccount *fromAccount;
@property(readonly) long long code;
@end
