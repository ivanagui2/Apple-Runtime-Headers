//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSBaseXPCServer.h"

#import "FBSServiceFacilityManaging.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface FBServiceFacilityServer : BSBaseXPCServer <FBSServiceFacilityManaging>
{
    NSMutableDictionary *_facilitiesByIdentifier;
    NSMutableSet *_completedMilestones;
    NSMutableDictionary *_suspendedFacilitiesByIdentifier;
    NSMutableSet *_pendingConnects;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_handleConnect:(id)arg1 forClient:(id)arg2 facilityID:(id)arg3;
- (void)_evaluateSuspendedFacility:(id)arg1;
- (void)_evaluateSuspendedFacilities;
- (_Bool)_areFacilityPrerequisitesSatisfied:(id)arg1;
- (void)queue_handleMessage:(id)arg1 client:(id)arg2;
- (void)queue_clientRemoved:(id)arg1;
- (void)queue_clientAdded:(id)arg1;
- (Class)queue_classForNewClientConnection:(id)arg1;
- (void)noteMilestoneReached:(id)arg1;
- (void)removeFacility:(id)arg1;
- (void)addFacility:(id)arg1;
- (_Bool)ping;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
