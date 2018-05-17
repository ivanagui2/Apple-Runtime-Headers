//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDAuthorizationSyncEntity.h>

@interface HDAuthorizationBackupSyncEntity : HDAuthorizationSyncEntity
{
}

+ (int)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (void)didGenerateCodableSourceAuthorizationsForSyncSession:(id)arg1;
+ (_Bool)generateSyncObjectsForSession:(id)arg1 predicate:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange)arg3 maxEncodedBytesPerMessage:(int)arg4 profile:(id)arg5 error:(id *)arg6 handler:(CDUnknownBlockType)arg7;
+ (id)syncEntityIdentifier;
+ (id)backupInfoUserDefaultsKey;
+ (void)_setBackupInfo:(id)arg1;
+ (id)_backupInfoWithSyncStore:(id)arg1;
+ (void)resetAuthorizationBackupIdentifiers;
+ (id)authorizationBackupPushIdentifierWithSyncStore:(id)arg1;
+ (id)authorizationBackupPullIdentifierWithSyncStore:(id)arg1;
+ (void)setAuthorizationBackupPushIdentifier:(id)arg1 syncStore:(id)arg2;
+ (id)createCodableSourceAuthorizationWithSourceUUID:(id)arg1 syncSession:(id)arg2;

@end
