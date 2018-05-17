//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ENGroupContextMiddleware.h"

@class ENGroup, ENGroupContext;

@protocol ENGroupContextObserverMiddleware <ENGroupContextMiddleware>

@optional
- (void)groupContextDidReceiveRegistrationIdentityUpdate:(ENGroupContext *)arg1;
- (void)groupContext:(ENGroupContext *)arg1 didReceiveDecryptionFailureForGroup:(ENGroup *)arg2;
- (void)groupContext:(ENGroupContext *)arg1 didUpdateGroup:(ENGroup *)arg2 withNewGroup:(ENGroup *)arg3;
- (void)groupContext:(ENGroupContext *)arg1 didCacheGroup:(ENGroup *)arg2;
- (void)groupContext:(ENGroupContext *)arg1 didCreateGroup:(ENGroup *)arg2;
@end
