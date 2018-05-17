//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CMKNebulaDaemonClientProtocol.h"
#import "CMKNebulaDaemonProtocol.h"

@class NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface CMKNebulaDaemonProxyManager : NSObject <CMKNebulaDaemonClientProtocol, CMKNebulaDaemonProtocol>
{
    NSObject<OS_dispatch_queue> *__queue;
    NSXPCConnection *__connection;
    int __connectionCount;
}

+ (id)_clientProtocolInterface;
+ (id)_daemonProtocolInterface;
+ (id)sharedInstance;
@property(readonly, nonatomic) int _connectionCount; // @synthesize _connectionCount=__connectionCount;
@property(readonly, nonatomic) NSXPCConnection *_connection; // @synthesize _connection=__connection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_queue; // @synthesize _queue=__queue;
- (void).cxx_destruct;
- (void)performCrashRecoveryIfNeededForceEndLastTimelapseSession:(_Bool)arg1;
- (void)forceStopTimelapseCaptureWithReasons:(int)arg1;
- (void)performIrisCrashRecovery;
- (void)updatePendingWorkFromDiskForceEndLastSession:(_Bool)arg1;
- (void)stopTimelapseWithUUID:(id)arg1;
- (void)finishCaptureForTimelapseWithUUID:(id)arg1;
- (void)updateTimelapseWithUUID:(id)arg1;
- (void)resumeTimelapseWithUUID:(id)arg1;
- (void)startTimelapseWithUUID:(id)arg1;
- (void)_getProxyForExecutingBlock:(CDUnknownBlockType)arg1;
- (void)_closeConnectionToDaemon;
- (void)_ensureConnectionToDaemon;
- (void)closeConnectionToDaemon;
- (void)ensureConnectionToDaemon;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
