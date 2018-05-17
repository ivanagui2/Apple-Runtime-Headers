//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDRemoteLoginBase.h>

#import "HMDRemoteLoginInitiatorAuthenticationDelegate.h"

@class HMDRemoteLoginAnisetteDataProviderBridge, HMDRemoteLoginInitiatorSession, HMDRemoteLoginMessageSender, NSString;

@interface HMDRemoteLoginInitiator : HMDRemoteLoginBase <HMDRemoteLoginInitiatorAuthenticationDelegate>
{
    HMDRemoteLoginInitiatorSession *_loginSession;
    HMDRemoteLoginAnisetteDataProviderBridge *_anisetteProviderBridge;
    HMDRemoteLoginMessageSender *_remoteMessageSender;
}

+ (_Bool)hasMessageReceiverChildren;
+ (id)logCategory;
@property(retain, nonatomic) HMDRemoteLoginMessageSender *remoteMessageSender; // @synthesize remoteMessageSender=_remoteMessageSender;
@property(retain, nonatomic) HMDRemoteLoginAnisetteDataProviderBridge *anisetteProviderBridge; // @synthesize anisetteProviderBridge=_anisetteProviderBridge;
@property(retain, nonatomic) HMDRemoteLoginInitiatorSession *loginSession; // @synthesize loginSession=_loginSession;
- (void).cxx_destruct;
- (void)didCompleteAuthentication:(id)arg1 error:(id)arg2 loggedInAccount:(id)arg3;
- (id)messageReceiverChildren;
- (void)_resetCurrentSession:(id)arg1;
- (void)_callCompletion:(id)arg1 loggedInAccount:(id)arg2 authSession:(id)arg3;
- (void)_handleSignoutResponse:(id)arg1 error:(id)arg2 message:(id)arg3;
- (void)_handleRemoteLoginSignout:(id)arg1;
- (void)_proxyLoginWithSessionID:(id)arg1 authResults:(id)arg2 remoteDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleRemoteLoginProxyAuthentication:(id)arg1;
- (void)_handleProxyDeviceResponse:(id)arg1 error:(id)arg2 message:(id)arg3;
- (void)_handleRemoteLoginProxiedDevice:(id)arg1;
- (void)_companionLoginWithSessionID:(id)arg1 account:(id)arg2 remoteDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleRemoteLoginCompanionAuthentication:(id)arg1;
- (void)registerForMessages;
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;
- (id)initWithUUID:(id)arg1 accessory:(id)arg2 remoteLoginHandler:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
