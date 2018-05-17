//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKDClientContext, NSData, NSError, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface CKDMescalSession : NSObject
{
    _Bool _isSetup;
    _Bool _renewing;
    CKDClientContext *_context;
    NSError *_lastSetupError;
    NSObject<OS_dispatch_queue> *_opQueue;
    NSObject<OS_dispatch_group> *_renewalGroup;
    NSOperationQueue *_renewQueue;
    NSData *_goldenTicket;
}

@property(retain, nonatomic) NSData *goldenTicket; // @synthesize goldenTicket=_goldenTicket;
@property(retain, nonatomic) NSOperationQueue *renewQueue; // @synthesize renewQueue=_renewQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *renewalGroup; // @synthesize renewalGroup=_renewalGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *opQueue; // @synthesize opQueue=_opQueue;
@property(retain, nonatomic) NSError *lastSetupError; // @synthesize lastSetupError=_lastSetupError;
@property _Bool renewing; // @synthesize renewing=_renewing;
@property _Bool isSetup; // @synthesize isSetup=_isSetup;
@property(readonly, nonatomic) __weak CKDClientContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)signData:(id)arg1 forRequest:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)signatureHeadersForRequest:(id)arg1;
- (void)renewMescalSessionForRequest:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)_renewMescalSessionForRequestLocked:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)resetMescalSession;
- (void)exchangeData:(id)arg1 serverVersion:(int)arg2 qualityOfService:(int)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_setUpWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_teardown;
- (void)_teardownLocked;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)init;

@end
