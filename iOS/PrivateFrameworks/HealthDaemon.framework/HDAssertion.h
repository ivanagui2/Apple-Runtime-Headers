//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HDAssertionManager, NSObject<OS_dispatch_source>, NSString, NSUUID;

@interface HDAssertion : NSObject
{
    HDAssertionManager *_manager;
    long long _state;
    NSObject<OS_dispatch_source> *_invalidationTimer;
    double _expirationDate;
    struct os_unfair_lock_s _lock;
    NSUUID *_UUID;
    NSString *_assertionIdentifier;
    NSString *_ownerIdentifier;
    double _timeout;
}

@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, copy, nonatomic) NSString *ownerIdentifier; // @synthesize ownerIdentifier=_ownerIdentifier;
@property(readonly, copy, nonatomic) NSString *assertionIdentifier; // @synthesize assertionIdentifier=_assertionIdentifier;
@property(readonly, copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (long long)_takeWithManager:(id)arg1;
@property(readonly) long long rawState;
@property(readonly) double remainingTime;
@property(readonly) long long state;
- (id)description;
- (void)_invalidationTimerDidFire;
- (void)_invalidateAndRelease:(_Bool)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithAssertionIdentifier:(id)arg1 ownerIdentifier:(id)arg2;

@end
