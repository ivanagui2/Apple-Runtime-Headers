//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "SOAReceiverProtocol.h"

@class NSString;

@protocol SOAAccountInfoReceiverProtocol <NSObject, SOAReceiverProtocol>
- (void)faceTimeIDsForABPersonID:(NSString *)arg1 withCompletionBlock:(void (^)(NSArray *))arg2;
- (void)addValidMessagesID:(NSString *)arg1;
- (void)addInvalidMessagesID:(NSString *)arg1;
- (void)addValidFaceTimeID:(NSString *)arg1;
- (void)addInvalidFaceTimeID:(NSString *)arg1;
@end
