//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMDFMMAccountInfo, NSData, NSString;

@protocol FMDFMMProtocol <NSObject>
- (oneway void)shouldResumeCardsForUser:(NSString *)arg1 usingCallback:(void (^)(BOOL, NSError *))arg2;
- (oneway void)disableFMMUsingToken:(NSString *)arg1 inContext:(unsigned long long)arg2 usingCallback:(void (^)(NSError *))arg3;
- (oneway void)clearFMMAccountsWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)retrieveFMMAccountUsingCallback:(void (^)(FMDFMMAccountInfo *, NSError *))arg1;
- (oneway void)removeFMMAccountWithUsername:(NSString *)arg1 withAuthData:(NSData *)arg2 usingCallback:(void (^)(NSError *))arg3;
- (oneway void)addFMMAccount:(FMDFMMAccountInfo *)arg1 withAuthData:(NSData *)arg2 usingCallback:(void (^)(NSError *))arg3;
@end
