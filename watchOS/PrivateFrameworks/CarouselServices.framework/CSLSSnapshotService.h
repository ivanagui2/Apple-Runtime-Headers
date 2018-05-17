//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLSBackgroundServiceDelegate.h"
#import "CSLSSnapshotServiceDeprecatedProtocol.h"
#import "CSLSSnapshotServiceProtocol.h"

@class CSLSPrivilegedBackgroundServiceConnection, NSObject<OS_os_log>, NSString, Protocol<CSLSBackgroundServiceAutoConnecting>;

@interface CSLSSnapshotService : NSObject <CSLSSnapshotServiceDeprecatedProtocol, CSLSBackgroundServiceDelegate, CSLSSnapshotServiceProtocol>
{
    CSLSPrivilegedBackgroundServiceConnection *_connection;
}

+ (id)getUserInfoFromAction:(id)arg1;
+ (void)extendFBSnapshotContext:(id)arg1 withCSLSSnapshotContext:(id)arg2;
+ (id)getMutableSettingsFromContext:(id)arg1;
+ (unsigned int)getReasonFromAction:(id)arg1;
+ (id)_getSnapshotScheduleItemFromAction:(id)arg1;
+ (id)sharedInstance;
+ (unsigned int)snapshotScheduleLimit;
@property(retain, nonatomic) CSLSPrivilegedBackgroundServiceConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)registerPrivilegedSnapshotClient:(id)arg1 withPriority:(unsigned int)arg2 leeway:(double)arg3 usesBudget:(_Bool)arg4 returnToPrimaryUIInterval:(double)arg5 completion:(CDUnknownBlockType)arg6;
- (void)registerPrivilegedBackgroundClient:(id)arg1 withPriority:(unsigned int)arg2 leeway:(double)arg3 usesBudget:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)snapshotAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)snapshotWhenBackgroundProcessingCompletes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)snapshotContextForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setSnapshotContext:(id)arg1 forBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setSnapshotContext:(id)arg1 forBundleID:(id)arg2;
- (id)init;
- (id)_init;
@property(readonly, nonatomic) Protocol<CSLSBackgroundServiceAutoConnecting> *remoteInterface;
@property(readonly, nonatomic) NSObject<OS_os_log> *log;
@property(readonly, nonatomic) NSString *serviceName;
- (void)invalidateSnapshotForBundleId:(id)arg1;
- (void)setSnapshotRequest:(id)arg1 forBundleID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
