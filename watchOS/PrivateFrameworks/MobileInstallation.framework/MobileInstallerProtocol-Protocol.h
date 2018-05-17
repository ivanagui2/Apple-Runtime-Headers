//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSData, NSDictionary, NSError, NSObject, NSString, NSURL;

@protocol MobileInstallerProtocol
- (void)dieForTesting;
- (void)snapshotWKAppInCompanionAppID:(NSString *)arg1 toURL:(NSURL *)arg2 options:(NSDictionary *)arg3 completion:(void (^)(NSDictionary *, NSError *))arg4;
- (void)getAppMetadataForApp:(NSString *)arg1 completion:(void (^)(MIBundleMetadata *, NSError *))arg2;
- (void)updatePlaceholderMetadataForApp:(NSString *)arg1 installType:(unsigned int)arg2 failureReason:(unsigned int)arg3 underlyingError:(NSError *)arg4 failureSource:(unsigned int)arg5 completion:(void (^)(NSError *))arg6;
- (void)updateAppDataProtectionWithOptions:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateiTunesMetadataForLSWithIdentifier:(NSString *)arg1 options:(NSDictionary *)arg2 plistData:(NSData *)arg3 completion:(void (^)(NSError *))arg4;
- (void)updateSinfForLSWithIdentifier:(NSString *)arg1 withOptions:(NSDictionary *)arg2 sinfData:(NSData *)arg3 completion:(void (^)(NSDictionary *, NSError *))arg4;
- (void)checkCapabilities:(NSObject *)arg1 withOptions:(NSDictionary *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)listSafeHarborsOfType:(int)arg1 withOptions:(NSDictionary *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)removeSafeHarborForIdentifier:(NSString *)arg1 ofType:(int)arg2 withOptions:(NSDictionary *)arg3 completion:(void (^)(NSError *))arg4;
- (void)registerSafeHarborAtPath:(NSString *)arg1 forIdentifier:(NSString *)arg2 ofType:(int)arg3 withOptions:(NSDictionary *)arg4 completion:(void (^)(NSError *))arg5;
- (void)processRestoredContainerWithIdentifier:(NSString *)arg1 ofType:(int)arg2 options:(NSDictionary *)arg3 completion:(void (^)(NSError *))arg4;
- (void)fetchDiskUsageForIdentifiers:(NSArray *)arg1 withOptions:(NSDictionary *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)enumerateInstalledAppsWithOptions:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)fetchInstalledAppsWithOptions:(NSDictionary *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)fetchInstalledDeveloperAppsWithMountPath:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)updateSystemAppStateForIdentifier:(NSString *)arg1 appState:(int)arg2 completion:(void (^)(NSError *))arg3;
- (void)lookupSystemAppStateWithOptions:(NSDictionary *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)clearUninstalledIdentifiers:(NSArray *)arg1 withOptions:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
- (void)lookupUninstalledWithOptions:(NSDictionary *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)uninstallIdentifiers:(NSArray *)arg1 withOptions:(NSDictionary *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)installURL:(NSURL *)arg1 withOptions:(NSDictionary *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
@end
