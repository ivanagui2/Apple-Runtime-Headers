//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class HMDHomeManager, NSData, NSDictionary;

@interface HMDDeviceSetupSessionInternal : HMFObject
{
    unsigned long long _state;
    HMDHomeManager *_homeManager;
    NSData *_sessionData;
    NSDictionary *_userInfo;
}

+ (id)allowedClasses;
+ (BOOL)isSupported;
+ (long long)role;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSData *sessionData; // @synthesize sessionData=_sessionData;
@property(readonly) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (BOOL)processSessionData:(id)arg1 error:(id *)arg2;
- (id)initWithHomeManager:(id)arg1;

@end
