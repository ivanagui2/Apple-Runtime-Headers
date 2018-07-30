//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet;

@interface HDSessionAssertionGroup : NSObject
{
    NSMutableSet *_allAssertions;
    NSMutableDictionary *_assertionsForState;
    long long _state;
}

@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)_transitionToNewAssertions:(id)arg1;
- (void)invalidate;
- (void)transitionToState:(long long)arg1;
- (void)setupState:(long long)arg1 withAssertions:(id)arg2;
- (id)init;

@end
