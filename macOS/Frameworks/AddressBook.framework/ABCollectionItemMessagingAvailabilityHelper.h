//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABFaceTimeCommunicationsBridgeDelegate.h"

@class ABFaceTimeCommunicationsBridge, NSString;

__attribute__((visibility("hidden")))
@interface ABCollectionItemMessagingAvailabilityHelper : NSObject <ABFaceTimeCommunicationsBridgeDelegate>
{
    BOOL _availableForMessaging;
    ABFaceTimeCommunicationsBridge *_bridge;
    NSString *_endpoint;
}

@property(retain, nonatomic) NSString *endpoint; // @synthesize endpoint=_endpoint;
@property(nonatomic, getter=isAvailableForMessaging) BOOL availableForMessaging; // @synthesize availableForMessaging=_availableForMessaging;
@property(retain, nonatomic) ABFaceTimeCommunicationsBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)faceTimeCommunicationsBridge:(id)arg1 messagingAvailabilityChanged:(BOOL)arg2 forEndpoint:(id)arg3;
- (void)startAvailabilityCheckForEndpoint:(id)arg1 property:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
