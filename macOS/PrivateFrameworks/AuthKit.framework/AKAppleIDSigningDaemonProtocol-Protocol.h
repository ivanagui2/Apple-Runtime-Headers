//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary;

@protocol AKAppleIDSigningDaemonProtocol <NSObject>
- (void)signaturesForData:(NSDictionary *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(NSDictionary *, NSData *, NSError *))arg3;
- (void)absintheSignatureForData:(NSData *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
@end
