//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMFMessageReceiver.h"
#import "HMMutableApplicationData.h"
#import "HMObjectMerge.h"
#import "NSSecureCoding.h"

@class HMApplicationData, HMFUnfairLock, HMHome, NSArray, NSObject<OS_dispatch_queue>, NSString, NSUUID, _HMContext;

@interface HMRoom : NSObject <NSSecureCoding, HMFMessageReceiver, HMObjectMerge, HMMutableApplicationData>
{
    HMFUnfairLock *_lock;
    NSUUID *_uniqueIdentifier;
    NSString *_name;
    NSUUID *_uuid;
    HMHome *_home;
    HMApplicationData *_applicationData;
    _HMContext *_context;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_updateRoomName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleRoomRenamedNotification:(id)arg1;
- (void)_updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setApplicationData:(id)arg1;
@property(readonly, nonatomic) HMApplicationData *applicationData;
@property(nonatomic) __weak HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, copy, nonatomic) NSArray *accessories;
- (void)setName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_invalidate;
- (void)_unconfigure;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
