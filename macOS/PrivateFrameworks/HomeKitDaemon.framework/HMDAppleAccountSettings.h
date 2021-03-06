//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDAppleAccountSettings : HMFObject <HMFLogging>
{
    BOOL _homeEnabled;
    BOOL _keychainSyncEnabled;
    BOOL _migrated;
    int _circleChangedNotificationToken;
    int _viewMembershipChangedNotificationToken;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

+ (id)logCategory;
+ (BOOL)supportsCloudSettings;
+ (id)sharedSettings;
@property(nonatomic) int viewMembershipChangedNotificationToken; // @synthesize viewMembershipChangedNotificationToken=_viewMembershipChangedNotificationToken;
@property(nonatomic) int circleChangedNotificationToken; // @synthesize circleChangedNotificationToken=_circleChangedNotificationToken;
@property(nonatomic) BOOL migrated; // @synthesize migrated=_migrated;
@property(readonly) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void).cxx_destruct;
- (void)__updateHomeEnabled:(BOOL)arg1 userInitiated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateHomeEnabled:(BOOL)arg1 userInitiated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)__migrateHomePreferences;
- (void)__registerForKeychainChangeNotifications;
- (void)__synchronize;
- (void)synchronize;
- (void)_notifyClientsOfUpdatedKeychainSyncState:(BOOL)arg1;
@property(getter=isKeychainSyncEnabled) BOOL keychainSyncEnabled; // @synthesize keychainSyncEnabled=_keychainSyncEnabled;
- (void)_notifyClientsOfUpdatedHomeState:(BOOL)arg1 userInitiated:(BOOL)arg2;
- (void)enableHome:(BOOL)arg1 userInitiated:(BOOL)arg2;
@property(readonly, getter=isHomeEnabled) BOOL homeEnabled; // @synthesize homeEnabled=_homeEnabled;
- (id)attributeDescriptions;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

