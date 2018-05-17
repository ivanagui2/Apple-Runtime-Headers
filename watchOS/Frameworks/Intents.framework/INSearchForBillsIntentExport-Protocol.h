//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class INBillPayee, INDateComponentsRange;

@protocol INSearchForBillsIntentExport <NSObject, JSExport>
@property(copy, nonatomic) INDateComponentsRange *dueDateRange;
@property(nonatomic) int status;
@property(nonatomic) int billType;
@property(copy, nonatomic) INDateComponentsRange *paymentDateRange;
@property(copy, nonatomic) INBillPayee *billPayee;
- (id)init;
@end
