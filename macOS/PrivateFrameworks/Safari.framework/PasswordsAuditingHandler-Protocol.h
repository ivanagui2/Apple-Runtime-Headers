//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSAttributedString, WBSSavedPassword;

@protocol PasswordsAuditingHandler <NSObject>
- (void)changePasswordForSavedPassword:(WBSSavedPassword *)arg1;
- (NSAttributedString *)passwordsReusedWarningStringForSavedPassword:(WBSSavedPassword *)arg1;
@end

