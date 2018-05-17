//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVBInterface, NSObject<OS_dispatch_queue>;

@interface AVB1722MAAP : NSObject
{
    unsigned int service;
    struct IONotificationPort *notificationPort;
    unsigned int notification;
    unsigned int connection;
    NSObject<OS_dispatch_queue> *callbackQueue;
    NSObject<OS_dispatch_queue> *userClientSyncQueue;
    int userClientAccessCount;
    AVBInterface *interface;
}

+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1;
@property AVBInterface *interface; // @synthesize interface;
- (void)dealloc;
- (void)finalize;
- (void)endProtectedUserClientCall;
- (void)beginProtectedUserClientCall;
- (BOOL)deallocateMulticastMAC:(id)arg1 error:(id *)arg2;
- (BOOL)allocateMulticastMAC:(id)arg1 error:(id *)arg2;
- (void)callbackWithArgs:(unsigned long long *)arg1 argCount:(unsigned int)arg2;
- (void)serviceTerminated;
- (id)initWithInterface:(id)arg1;

@end
