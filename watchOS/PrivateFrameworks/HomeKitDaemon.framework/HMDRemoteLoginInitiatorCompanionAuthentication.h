//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDRemoteLoginInitiatorAuthentication.h>

@class ACAccount;

@interface HMDRemoteLoginInitiatorCompanionAuthentication : HMDRemoteLoginInitiatorAuthentication
{
    ACAccount *_account;
}

+ (id)logCategory;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_authenticate;
- (void)authenticate;
- (int)loginType;
- (id)description;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 account:(id)arg6;

@end

