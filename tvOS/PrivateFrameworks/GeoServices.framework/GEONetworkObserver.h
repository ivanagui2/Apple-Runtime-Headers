//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface GEONetworkObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    unsigned int _networkReachability;
    struct __SCNetworkReachability *_networkReach;
    _Bool _initialized;
    _Bool _networkNotified;
    _Bool _networkReachable;
}

+ (id)sharedNetworkObserver;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
- (_Bool)isCellConnection;
- (void)removeNetworkReachableObserver:(id)arg1;
- (void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2;
- (_Bool)isConnectionRequired;
- (_Bool)isNetworkReachable;
- (void)initializeIfNecessary;
- (void)_networkReachableCallBack:(unsigned int)arg1;
- (void)_networkObserversInitialize;
- (void)dealloc;
- (id)init;

@end

