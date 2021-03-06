//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CUPrivateDiscoveryXPCDaemonInterface-Protocol.h>

@class CUPrivateDiscoveryAdvertiser, CUPrivateDiscoveryBrowser, CUPrivateDiscoveryDaemon, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CUPrivateDiscoveryXPCConnection : NSObject <CUPrivateDiscoveryXPCDaemonInterface>
{
    CUPrivateDiscoveryAdvertiser *_activatedAdvertiser;
    CUPrivateDiscoveryBrowser *_activatedBrowser;
    struct LogCategory *_ucat;
    BOOL _entitled;
    CUPrivateDiscoveryDaemon *_daemon;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSXPCConnection *_xpcCnx;
}

@property(readonly, nonatomic) NSXPCConnection *xpcCnx; // @synthesize xpcCnx=_xpcCnx;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) BOOL entitled; // @synthesize entitled=_entitled;
@property(readonly, nonatomic) CUPrivateDiscoveryDaemon *daemon; // @synthesize daemon=_daemon;
- (void).cxx_destruct;
- (void)xpcPrivateDiscoveryBrowserActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)xpcPrivateDiscoveryAdvertiserActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_entitledAndReturnError:(id *)arg1;
- (void)connectionInvalidated;
- (id)initWithDaemon:(id)arg1 xpcCnx:(id)arg2;

@end

