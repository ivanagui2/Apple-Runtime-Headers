//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSSQLiteStore.h"

@class NSObject<OS_dispatch_queue>, WBSSQLiteStatementCache;

@interface SFExternalCredentialIdentityStore : WBSSQLiteStore
{
    WBSSQLiteStatementCache *_statements;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (_Bool)_fetchStoreIsEmpty;
- (void)fetchStoreEmptyStateWithCompletion:(CDUnknownBlockType)arg1;
- (id)_fetchCredentialIdentities;
- (id)_fetchCredentialIdentitiesMatchingDomains:(id)arg1;
- (id)_credentialIdentityFromRow:(id)arg1;
- (void)fetchCredentialIdentitiesMatchingDomains:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchCredentialIdentitiesWithCompletion:(CDUnknownBlockType)arg1;
- (int)_updateCredentialIdentity:(id)arg1;
- (int)_insertCredentialIdentity:(id)arg1;
- (int)_saveCredentialIdentities:(id)arg1;
- (int)_vacuum;
- (int)_removeAllCredentialIdentities;
- (int)_removeCredentialIdentity:(id)arg1;
- (int)_removeCredentialIdentities:(id)arg1;
- (void)removeCredentialIdentities:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAllCredentialIdentitiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)replaceCredentialIdentitiesWithIdentities:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveCredentialIdentities:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (int)_currentSchemaVersion;
- (int)_createFreshDatabaseSchema;
- (void)_databaseWillClose;
- (void)openAndCheckIntegrity:(_Bool)arg1 createIfNeeded:(_Bool)arg2 fallBackToMemoryStoreIfError:(_Bool)arg3 lockingPolicy:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithURL:(id)arg1 protectionType:(long long)arg2;
- (id)initWithURL:(id)arg1;

@end
