//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDEvent.h>

@class HMDCharacteristic, NSNumber, NSUUID;

@interface HMDCharacteristicEventBase : HMDEvent
{
    HMDCharacteristic *_characteristic;
    NSUUID *_accessoryUUID;
    NSNumber *_serviceID;
    NSNumber *_characteristicInstanceID;
    id _previousValue;
}

+ (BOOL)supportsSecureCoding;
+ (id)lookForCharacteristicByAccessoryUUID:(id)arg1 serviceID:(id)arg2 characteristicID:(id)arg3 inHome:(id)arg4 checkForSupport:(BOOL)arg5 outError:(id *)arg6;
+ (id)compareValueOfCharacteristic:(id)arg1 againstValue:(id)arg2 operatorType:(id)arg3;
+ (id)logCategory;
@property(retain, nonatomic) id previousValue; // @synthesize previousValue=_previousValue;
@property(readonly, nonatomic) NSNumber *characteristicInstanceID; // @synthesize characteristicInstanceID=_characteristicInstanceID;
@property(readonly, nonatomic) NSNumber *serviceID; // @synthesize serviceID=_serviceID;
@property(readonly, nonatomic) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(retain, nonatomic) HMDCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (void).cxx_destruct;
- (BOOL)_activate:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)fixCharacteristicInHome:(id)arg1;
- (void)replaceCharacteristic:(id)arg1;
- (id)createPayload;
- (BOOL)_evaluateNewValue:(id)arg1;
- (void)_processAccessoryCharacteristicsChangedNotification:(id)arg1;
- (void)_handleAccessoryCharacteristicsChangedNotification:(id)arg1;
- (void)_registerForMessages;
- (BOOL)isActive;
- (id)description;
- (id)initWithModel:(id)arg1 home:(id)arg2;

@end

