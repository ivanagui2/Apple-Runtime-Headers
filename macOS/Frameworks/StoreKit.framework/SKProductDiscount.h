//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDecimalNumber, NSLocale, SKProductSubscriptionPeriod;

@interface SKProductDiscount : NSObject
{
    id _internal;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long paymentMode;
@property(readonly, nonatomic) unsigned long long numberOfPeriods;
@property(readonly, nonatomic) SKProductSubscriptionPeriod *subscriptionPeriod;
- (void)setLocale:(id)arg1;
@property(readonly, nonatomic) NSLocale *priceLocale;
@property(readonly, nonatomic) NSDecimalNumber *price;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end
