//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKPaymentDataItem, PKPaymentRequest, UITableViewCell, UIView;

@protocol PKPaymentAuthorizationViewPresenting <NSObject>
+ (void)presentCell:(UITableViewCell *)arg1 withDataItem:(PKPaymentDataItem *)arg2 shouldShowSeperator:(_Bool)arg3 forPaymentRequest:(PKPaymentRequest *)arg4;

@optional
+ (void)presentView:(UIView *)arg1 withDataItem:(PKPaymentDataItem *)arg2 forPaymentRequest:(PKPaymentRequest *)arg3;
@end
