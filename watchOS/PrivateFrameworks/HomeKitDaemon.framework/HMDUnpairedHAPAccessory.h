//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDUnassociatedAccessory.h>

@class NSArray, NSData, NSMutableArray;

@interface HMDUnpairedHAPAccessory : HMDUnassociatedAccessory
{
    NSMutableArray *_accessoryServers;
    int _certificationStatus;
    NSData *_setupHash;
}

@property(retain, nonatomic) NSData *setupHash; // @synthesize setupHash=_setupHash;
@property(nonatomic) int certificationStatus; // @synthesize certificationStatus=_certificationStatus;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (int)associationOptions;
- (_Bool)hasIPLink;
- (_Bool)hasBTLELink;
- (id)descriptionForTransportTypes;
@property(readonly, nonatomic) unsigned int transportTypes;
- (id)preferredAccessoryServer;
- (void)removeAccessoryServer:(id)arg1;
- (void)addAccessoryServer:(id)arg1;
@property(readonly, copy) NSArray *accessoryServers;
- (void)identifyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)isReachable;
- (id)dumpDescription;
- (id)descriptionWithPointer:(_Bool)arg1 additionalDescription:(id)arg2;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4;
- (id)initWithAccessoryServer:(id)arg1 messageDispatcher:(id)arg2;

@end
