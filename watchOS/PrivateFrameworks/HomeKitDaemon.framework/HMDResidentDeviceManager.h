//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMDBackingStoreObjectProtocol.h"
#import "HMDHomeMessageReceiver.h"
#import "HMFLogging.h"
#import "HMFTimerDelegate.h"
#import "NSSecureCoding.h"

@class HMDCentralMessageDispatcher, HMDHome, HMDResidentDevice, HMFMessageDispatcher, HMFTimer, NSArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSSet, NSString, NSUUID;

@interface HMDResidentDeviceManager : HMFObject <HMFTimerDelegate, HMFLogging, HMDHomeMessageReceiver, NSSecureCoding, HMDBackingStoreObjectProtocol>
{
    NSMutableSet *_residentDevices;
    _Bool _residentAvailable;
    _Bool _residentSupported;
    _Bool _firstLegacyFetch;
    _Bool _firstHomeZoneFetch;
    _Bool _confirming;
    HMFTimer *_residentMonitorTimer;
    NSUUID *_primaryResidentUUID;
    id <HMDResidentDeviceManagerDelegate> _delegate;
    NSUUID *_uuid;
    HMDHome *_home;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFMessageDispatcher *_messageDispatcher;
    HMDCentralMessageDispatcher *_remoteMessageDispatcher;
    int _lastAtHomeLevel;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (int)compareElectionVersions:(id)arg1 otherVersion:(id)arg2;
+ (id)shortDescription;
@property(nonatomic) int lastAtHomeLevel; // @synthesize lastAtHomeLevel=_lastAtHomeLevel;
@property(nonatomic, getter=isConfirming) _Bool confirming; // @synthesize confirming=_confirming;
@property(readonly, nonatomic) HMDCentralMessageDispatcher *remoteMessageDispatcher; // @synthesize remoteMessageDispatcher=_remoteMessageDispatcher;
@property(readonly, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property __weak id <HMDResidentDeviceManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_removeResidentDeviceWithModel:(id)arg1 message:(id)arg2;
- (void)_addResidentDeviceWithModel:(id)arg1 message:(id)arg2;
- (void)updatePrimaryResidentWithUUID:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)_handleCloudManagerDidCompleteInitialFetchNotification:(id)arg1;
- (void)_updateChargingTimer;
- (void)_updateDischargingTimer:(int)arg1;
- (void)atHomeLevelChanged:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)timerDidFire:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
- (void)handleBatteryLevelChange:(id)arg1;
- (void)handleBatteryStateChange:(id)arg1;
- (void)_pingResident;
- (void)_stopMonitoringResident;
- (void)_startMonitoringResident;
- (void)_updateReachability:(_Bool)arg1 forResidentDevice:(id)arg2;
- (void)handleResidentDeviceIsNotReachable:(id)arg1;
- (void)handleResidentDeviceIsReachable:(id)arg1;
- (void)_handleConfirmResidentDevice:(id)arg1;
- (void)_handleResidentElectionParameters:(id)arg1;
- (id)_electionParameters:(id)arg1;
- (id)_electionParameters;
- (_Bool)_isAtHome;
- (int)compareResidentDeviceA:(id)arg1 electionParametersA:(id)arg2 residentDeviceB:(id)arg3 electionParametersB:(id)arg4;
- (int)compareResidentDevice:(id)arg1 electionParameters:(id)arg2;
- (void)conditionallyConfirmOnBoot;
- (void)confirmOnAvailability;
- (void)confirmAsResident;
- (void)_confirmResidentDevice:(id)arg1 electionParameters:(id)arg2 againstDevices:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)_orderedDevicesForElection;
- (void)_electResidentDevice;
- (void)electResidentDevice;
- (void)handleCurrentDeviceUpdated:(id)arg1;
- (void)handleCurrentDeviceChanged:(id)arg1;
- (void)_handleResidentDeviceUpdateEnabled:(id)arg1;
- (void)notifyUpdatedPrimaryResident:(id)arg1;
- (void)notifyClientsOfUpdatedResidentDevice:(id)arg1;
- (void)notifyResidentAvailable:(_Bool)arg1;
@property(nonatomic, getter=isResidentSupported) _Bool residentSupported; // @synthesize residentSupported=_residentSupported;
- (void)setResidentAvailable:(_Bool)arg1;
@property(readonly, nonatomic, getter=isResidentAvailable) _Bool residentAvailable; // @synthesize residentAvailable=_residentAvailable;
- (void)_updateResidentAvailability;
- (void)updateResidentAvailability;
- (void)_notifyClientsOfRemovedResidentDevice:(id)arg1;
- (void)removeResidentDevice:(id)arg1;
- (void)_removeResidentDevice:(id)arg1;
- (void)_notifyClientsOfAddedResidentDevice:(id)arg1;
- (void)_addResidentDevice:(id)arg1;
- (void)setResidentDevices:(id)arg1;
- (id)residentDeviceForDevice:(id)arg1;
@property(readonly, nonatomic, getter=isCurrentDeviceAvaliableResident) _Bool currentDeviceAvaliableResident;
@property(readonly, nonatomic) NSArray *availableResidentDevices;
@property(readonly, copy, nonatomic) NSArray *residentDevices;
- (id)ourSelf;
@property(retain) HMFTimer *residentMonitorTimer; // @synthesize residentMonitorTimer=_residentMonitorTimer;
- (id)residentWithUUID:(id)arg1;
@property(nonatomic, getter=hasFirstHomeZoneFetch) _Bool firstHomeZoneFetch; // @synthesize firstHomeZoneFetch=_firstHomeZoneFetch;
@property(nonatomic, getter=hasFirstLegacyFetch) _Bool firstLegacyFetch; // @synthesize firstLegacyFetch=_firstLegacyFetch;
@property(retain, nonatomic) NSUUID *primaryResidentUUID; // @synthesize primaryResidentUUID=_primaryResidentUUID;
@property(readonly, nonatomic) __weak HMDResidentDevice *primaryResidentDevice;
- (void)_teardownSessionWithPrimaryResidentDevice;
- (void)_setupSessionWithPrimaryResidentDevice;
- (void)_run;
- (void)run;
- (void)_registerForMessages;
- (void)configureWithHome:(id)arg1;
- (id)dumpState;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly) unsigned int hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end
