//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface MPStoreSocialServiceTransientStatesSnapshot : NSObject
{
    NSMutableDictionary *_transientFollowStatesPerProfileID;
    NSMutableDictionary *_transientFollowPendingRequestStatesPerProfileID;
}

- (void).cxx_destruct;
- (void)_addTransientFollowState:(long long)arg1 transientFollowPendingRequestState:(long long)arg2 forPerson:(id)arg3;
- (long long)transientFollowPendingRequestStateForPerson:(id)arg1;
- (long long)transientFollowStateForPerson:(id)arg1;
- (id)init;

@end
