//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import "HMDAWDLogEvent.h"

@class HMDHAPAccessory, NSString;

@interface HMDTargetControllerErrorEvent : HMDLogEvent <HMDAWDLogEvent>
{
    unsigned int _errorType;
    HMDHAPAccessory *_accessory;
}

+ (id)errorEventWithErrorType:(unsigned int)arg1 accessory:(id)arg2;
+ (id)uuid;
@property(readonly, nonatomic) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) unsigned int errorType; // @synthesize errorType=_errorType;
- (void).cxx_destruct;
- (id)initWithErrorType:(unsigned int)arg1 accessory:(id)arg2;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
