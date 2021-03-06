//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCCaptionsSourceDelegate-Protocol.h>

@class AVConferenceXPCClient, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCCaptionsManager : NSObject <VCCaptionsSourceDelegate>
{
    NSMutableDictionary *_streamTokenList;
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
}

+ (id)defaultManager;
- (void)streamToken:(int)arg1 didUpdateCaptions:(id)arg2;
- (void)streamToken:(int)arg1 didStopCaptioningWithReason:(unsigned char)arg2;
- (void)streamToken:(int)arg1 didStartCaptioningWithReason:(unsigned char)arg2;
- (void)streamToken:(int)arg1 didDisableCaptions:(_Bool)arg2 error:(id)arg3;
- (void)streamToken:(int)arg1 didEnableCaptions:(_Bool)arg2 error:(id)arg3;
- (void)notifyClientsWithStreamToken:(int)arg1 service:(char *)arg2 arguments:(id)arg3;
- (void)deregisterBlocksForService;
- (void)registerBlocksForService;
- (id)captionsSourceFromClientContext:(id)arg1;
- (void)unregisterCaptionsSourceWithStreamToken:(int)arg1;
- (void)registerCaptionsSource:(id)arg1 streamToken:(int)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

