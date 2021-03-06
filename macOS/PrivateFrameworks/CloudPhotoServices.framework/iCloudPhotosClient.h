//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoServices/ICPServiceClient.h>

#import <CloudPhotoServices/ICPServiceClientDelegate-Protocol.h>

@class CPSCloudPhotoLibraryServiceClient, ICPMyPhotoStreamServiceClient, ICPSharedPhotoStreamServiceClient, NSObject, NSSet;
@protocol ICPAgentApplication, OS_dispatch_queue, OS_os_log;

@interface iCloudPhotosClient : ICPServiceClient <ICPServiceClientDelegate>
{
    NSObject<OS_os_log> *_log;
    BOOL _connectionWasActiveWhenInvalidatedByEndpointConnection;
    long long _state;
    NSSet *_enabledServiceIdentifiers;
    NSObject<OS_dispatch_queue> *_serializationQueue;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<ICPAgentApplication> *_agentProxy;
    ICPSharedPhotoStreamServiceClient *_sharedPhotoStreamServiceClient;
    ICPMyPhotoStreamServiceClient *_myPhotoStreamServiceClient;
    CPSCloudPhotoLibraryServiceClient *_cloudPhotoLibraryServiceClient;
    CDUnknownBlockType _initialResumeCompletionHandler;
}

@property BOOL connectionWasActiveWhenInvalidatedByEndpointConnection; // @synthesize connectionWasActiveWhenInvalidatedByEndpointConnection=_connectionWasActiveWhenInvalidatedByEndpointConnection;
@property(copy) CDUnknownBlockType initialResumeCompletionHandler; // @synthesize initialResumeCompletionHandler=_initialResumeCompletionHandler;
@property(retain) CPSCloudPhotoLibraryServiceClient *cloudPhotoLibraryServiceClient; // @synthesize cloudPhotoLibraryServiceClient=_cloudPhotoLibraryServiceClient;
@property(retain) ICPMyPhotoStreamServiceClient *myPhotoStreamServiceClient; // @synthesize myPhotoStreamServiceClient=_myPhotoStreamServiceClient;
@property(retain) ICPSharedPhotoStreamServiceClient *sharedPhotoStreamServiceClient; // @synthesize sharedPhotoStreamServiceClient=_sharedPhotoStreamServiceClient;
@property(retain) NSObject<ICPAgentApplication> *agentProxy; // @synthesize agentProxy=_agentProxy;
@property(retain) NSObject<OS_dispatch_queue> *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
@property(retain) NSObject<OS_dispatch_queue> *serializationQueue; // @synthesize serializationQueue=_serializationQueue;
@property(retain) NSSet *enabledServiceIdentifiers; // @synthesize enabledServiceIdentifiers=_enabledServiceIdentifiers;
- (void).cxx_destruct;
- (id)observerProtocol;
- (void)notifyStateTransition;
- (BOOL)onQueueTransitionToState:(long long)arg1 oldStateMask:(long long)arg2 notifyObservers:(BOOL)arg3;
- (BOOL)transitionToState:(long long)arg1 oldStateMask:(long long)arg2 notifyObservers:(BOOL)arg3;
- (void)onQueueSetState:(long long)arg1;
@property long long state; // @synthesize state=_state;
- (long long)onQueueState;
- (void)__setupCloudPhotoLibraryServiceClient:(CDUnknownBlockType)arg1;
- (void)__setupMyPhotoStreamServiceClient:(CDUnknownBlockType)arg1;
- (void)__setupSharedPhotoStreamServiceClient:(CDUnknownBlockType)arg1;
- (void)agentApplicationInformationWithReply:(CDUnknownBlockType)arg1;
- (void)callAndClearInitialResumeCompletionHandler;
- (void)_setupServiceClients;
- (void)openConnection;
- (void)serviceClientWasInvalidated:(id)arg1;
- (void)invalidate;
- (void)resume;
- (void)resumeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)enabledServiceCount;
- (BOOL)isServiceClientEnabledForServiceIdentifier:(id)arg1;
- (BOOL)isCloudPhotoLibraryServiceClientEnabled;
- (BOOL)isSharedPhotoStreamServiceClientEnabled;
- (BOOL)isMyPhotoStreamServiceClientEnabled;
- (id)init;

@end

