//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionImportInfo : NSObject
{
    unsigned long long _generationCount;
    NSLock *_lock;
    struct __CFDictionary *_proxyNumberToCount;
    NSMutableDictionary *_remoteSideEntitlementCache;
}

- (id)_valueForEntitlement:(id)arg1 auditToken:(CDStruct_4c969caf)arg2;
- (_Bool)removeProxy:(id)arg1;
- (void)addProxy:(id)arg1;
- (void)dealloc;
- (id)init;

@end

