//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AKAppleIDAuthenticationController, NSObject<OS_dispatch_queue>, NSXPCConnection, NSXPCListenerEndpoint;

@interface AKAppleIDSigningController : NSObject
{
    struct os_unfair_lock_s _signerLock;
    NSObject<OS_dispatch_queue> *_signingQueue;
    NSXPCListenerEndpoint *_listenerEndpoint;
    NSXPCConnection *_connection;
    AKAppleIDAuthenticationController *_authenticationController;
}

@property(retain, nonatomic) AKAppleIDAuthenticationController *authenticationController; // @synthesize authenticationController=_authenticationController;
- (void).cxx_destruct;
- (void)signaturesForData:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)absintheSignatureForData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_connectionInvalidated;
- (void)_connectionInterrupted;
- (id)_connection;
- (void)dealloc;
- (id)initWithDaemonXPCEndpoint:(id)arg1;
- (id)init;
- (void)_additionalAttestationHeadersForRequest:(id)arg1 withInterval:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_additionalAbsintheHeadersForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)signingHeadersForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
