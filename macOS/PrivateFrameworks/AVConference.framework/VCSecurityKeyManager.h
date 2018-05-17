//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface VCSecurityKeyManager : NSObject
{
    NSMutableDictionary *_sendKeys;
    NSMutableDictionary *_receiveKeys;
    unsigned int _latestSendKeyIndex;
    unsigned int _latestReceiveKeyIndex;
    BOOL _isSendKeysCleanUpPending;
    BOOL _isReceiveKeysCleanUpPending;
    id _delegate;
    NSObject<OS_dispatch_queue> *_keyManagerQueue;
}

- (void)updateSendKeyMaterialWithIndex:(id)arg1 delay:(double)arg2;
- (void)pruneRecvKeyMaterialWithDelay:(double)arg1;
- (void)pruneSendKeyMaterialWithDelay:(double)arg1;
- (id)getLatestRecvKeyMaterial;
- (id)getLatestSendKeyMaterial;
- (id)getRecvKeyMaterialWithIndex:(id)arg1;
- (id)getSendKeyMaterialWithIndex:(id)arg1;
- (BOOL)addSecurityKeyMaterial:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
