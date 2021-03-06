//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSNumber, NSUUID;

@interface HAPBTLEServiceSignature : HMFObject
{
    _Bool _authenticated;
    NSUUID *_serviceType;
    NSNumber *_serviceInstanceID;
    unsigned int _serviceProperties;
    NSArray *_linkedServices;
}

@property(readonly, nonatomic, getter=isAuthenticated) _Bool authenticated; // @synthesize authenticated=_authenticated;
@property(readonly, nonatomic) NSArray *linkedServices; // @synthesize linkedServices=_linkedServices;
@property(readonly, nonatomic) unsigned int serviceProperties; // @synthesize serviceProperties=_serviceProperties;
@property(readonly, copy, nonatomic) NSNumber *serviceInstanceID; // @synthesize serviceInstanceID=_serviceInstanceID;
@property(readonly, copy, nonatomic) NSUUID *serviceType; // @synthesize serviceType=_serviceType;
- (void).cxx_destruct;
- (id)description;
- (id)initWithServiceType:(id)arg1 serviceInstanceID:(id)arg2 serviceProperties:(unsigned int)arg3 linkedServices:(id)arg4 authenticated:(_Bool)arg5;

@end

