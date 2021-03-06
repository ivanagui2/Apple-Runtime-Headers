//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StorageKit/NSObject-Protocol.h>

@class NSArray, NSError, NSString;

@protocol SKEncryptedDiskProtocol <NSObject>
- (BOOL)changeDiskOldPassword:(NSString *)arg1 toNewPassword:(NSString *)arg2 withHint:(NSString *)arg3;
- (NSError *)decryptWithPassword:(NSString *)arg1 forUser:(NSString *)arg2;
- (NSError *)decryptWithPassword:(NSString *)arg1;
- (BOOL)unlockWithiCloudRecoveryPCSSet:(struct _PCSIdentitySetData *)arg1;
- (BOOL)unlockWithiCloudRecovery:(struct _PCSIdentityData *)arg1;
- (NSError *)unlockWithPassword:(NSString *)arg1 forUser:(NSString *)arg2;
- (BOOL)unlockWithPassword:(NSString *)arg1;
- (BOOL)establishReserveKEK:(NSString *)arg1;
- (BOOL)iCloudRecoveryManageFDEUsersWithPCSIdentitySet:(struct _PCSIdentitySetData *)arg1 addingUsers:(NSArray *)arg2 removingUsers:(NSArray *)arg3 resettingUserPasswords:(NSArray *)arg4 handlingProgress:(void (^)(float, NSString *))arg5 withCompletionBlock:(void (^)(NSError *))arg6;
- (BOOL)iCloudRecoveryManageFDEUsers:(struct _PCSIdentityData *)arg1 addingUsers:(NSArray *)arg2 removingUsers:(NSArray *)arg3 resettingUserPasswords:(NSArray *)arg4 handlingProgress:(void (^)(float, NSString *))arg5 withCompletionBlock:(void (^)(NSError *))arg6;
- (BOOL)iCloudRecoveryManageFDEUsersWithPCSIdentitySet:(struct _PCSIdentitySetData *)arg1 addingUsers:(NSArray *)arg2 removingUsers:(NSArray *)arg3 handlingProgress:(void (^)(float, NSString *))arg4 withCompletionBlock:(void (^)(NSError *))arg5;
- (BOOL)iCloudRecoveryManageFDEUsers:(struct _PCSIdentityData *)arg1 addingUsers:(NSArray *)arg2 removingUsers:(NSArray *)arg3 handlingProgress:(void (^)(float, NSString *))arg4 withCompletionBlock:(void (^)(NSError *))arg5;
- (BOOL)manageFDEUsersWithPassword:(NSString *)arg1 addingUsers:(NSArray *)arg2 removingUsers:(NSArray *)arg3 resettingUserPasswords:(NSArray *)arg4 handlingProgress:(void (^)(float, NSString *))arg5 withCompletionBlock:(void (^)(NSError *))arg6;
- (BOOL)manageFDEUsersWithPassword:(NSString *)arg1 addingUsers:(NSArray *)arg2 removingUsers:(NSArray *)arg3 handlingProgress:(void (^)(float, NSString *))arg4 withCompletionBlock:(void (^)(NSError *))arg5;
- (NSError *)validateEncryptionPassword:(NSString *)arg1 forUser:(NSString *)arg2;
- (BOOL)validateEncryptionPassword:(NSString *)arg1;
- (NSArray *)getFDEUserDictionaries;
- (NSArray *)getFDEUsers;
@end

