//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AAUIServerUIHookHandler, ACAccount;

@interface AAUICDPStingrayRemoteUIController : NSObject
{
    AAUIServerUIHookHandler *_serverHookHandler;
    ACAccount *_account;
}

- (void).cxx_destruct;
- (void)setPresentingController:(id)arg1;
- (void)processObjectModel:(id)arg1 isModal:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)processObjectModel:(id)arg1 isModal:(_Bool)arg2;
- (void)attachAuthHandler:(CDUnknownBlockType)arg1;
- (void)attachRepairHandler:(CDUnknownBlockType)arg1;
- (void)attachPasscodeHandler:(CDUnknownBlockType)arg1;
- (void)attachRecoveryKeyHandler:(CDUnknownBlockType)arg1;
- (void)attachAllHandlers;
- (id)initWithRemoteUIController:(id)arg1 appleAccount:(id)arg2;
- (id)initWithRemoteUIController:(id)arg1;

@end
