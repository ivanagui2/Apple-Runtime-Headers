//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMFDumpState.h"
#import "HMFLogging.h"
#import "NSSecureCoding.h"

@class HMDAccessory, HMDMediaProfile, HMMediaSystemRole, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMDMediaSystemComponent : NSObject <NSSecureCoding, HMFDumpState, HMFLogging>
{
    HMMediaSystemRole *_role;
    NSUUID *_uuid;
    HMDAccessory *_accessory;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
+ (id)mediaSystemComponentWithDictionary:(id)arg1 home:(id)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setRole:(id)arg1;
@property(readonly, nonatomic) HMMediaSystemRole *role; // @synthesize role=_role;
@property(readonly, nonatomic) __weak HMDMediaProfile *mediaProfile;
- (id)serialize;
- (id)dumpState;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)logIdentifier;
- (id)initWithUUID:(id)arg1 accessory:(id)arg2 role:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
