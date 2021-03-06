//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, _CDInteractionPolicy;

@interface _CDInteractionPolicies : NSObject
{
    unsigned int _maxNumberOfInteractions;
    unsigned int _maxNumberOfInteractionsDeletedInBatch;
    double _maxLifespanInSeconds;
    _CDInteractionPolicy *_defaultPolicy;
    NSDictionary *_specialPolicies;
}

+ (id)limitArray:(id)arg1 toMaxCount:(unsigned int)arg2;
+ (id)modifyDate:(id)arg1 usingPolicy:(id)arg2;
+ (id)interactionPolicies;
- (void).cxx_destruct;
- (void)readConfigurationPlist;
- (void)setupDefaultHardcodedPolicies;
- (id)description;
- (id)filterAndModifyInteractionsWithPolicies:(id)arg1 enforceDataLimits:(_Bool)arg2 enforcePrivacy:(_Bool)arg3;
- (id)dateOfOldestAllowedInteractionForMechanism:(int)arg1;
@property(readonly) NSDate *dateOfOldestAllowedInteraction;
@property(readonly) unsigned int maxNumberOfInteractionsDeleted;
@property(readonly) unsigned int maxNumberOfInteractionsStored;
- (id)policyForMechanism:(int)arg1;
- (id)init;

@end

