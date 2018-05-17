//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BulletinDistributorCompanion/BLTRemoteObject.h>

#import "BLTSettingSyncing.h"
#import "BLTSettingsSendSerializerDelegate.h"

@class BLTPreviouslySentMessageStore, BLTSettingsSendSerializerPassthrough, NSString;

@interface BLTSettingSyncServer : BLTRemoteObject <BLTSettingsSendSerializerDelegate, BLTSettingSyncing>
{
    BLTSettingsSendSerializerPassthrough *_settingSendSerializer;
    id <BLTSettingSyncingClient> _delegate;
    BLTPreviouslySentMessageStore *_sectionInfoPreviouslySentMessageStore;
    BLTPreviouslySentMessageStore *_sectionSubtypeParametersIconsPreviouslySentMessageStore;
}

@property(retain, nonatomic) BLTPreviouslySentMessageStore *sectionSubtypeParametersIconsPreviouslySentMessageStore; // @synthesize sectionSubtypeParametersIconsPreviouslySentMessageStore=_sectionSubtypeParametersIconsPreviouslySentMessageStore;
@property(retain, nonatomic) BLTPreviouslySentMessageStore *sectionInfoPreviouslySentMessageStore; // @synthesize sectionInfoPreviouslySentMessageStore=_sectionInfoPreviouslySentMessageStore;
@property(nonatomic) __weak id <BLTSettingSyncingClient> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleResponse:(id)arg1;
- (void)handleEnableNotificationsRequest:(id)arg1;
- (void)handleSetSectionSubtypeParametersIconResponse:(id)arg1;
- (void)handleRemoveSectionRequest:(id)arg1;
- (void)handleSetSectionSubtypeParametersIconRequest:(id)arg1;
- (void)handleSetSectionInfoResponse:(id)arg1;
- (void)handleSetSectionInfoRequest:(id)arg1;
- (void)enableNotifications:(_Bool)arg1 sectionID:(id)arg2 mirror:(_Bool)arg3 spoolToFile:(_Bool)arg4;
- (void)enableNotifications:(_Bool)arg1 sectionID:(id)arg2 mirror:(_Bool)arg3;
- (void)removeSectionWithSectionID:(id)arg1;
- (_Bool)isSectionInfoSentCacheEmpty;
- (void)clearSectionInfoSentCache;
- (void)sendSpooledRequestsNowWithSent:(CDUnknownBlockType)arg1 withAcknowledgement:(CDUnknownBlockType)arg2;
- (void)setSectionSubtypeParametersIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(long long)arg3 withQueue:(id)arg4 withSent:(CDUnknownBlockType)arg5 withAcknowledgement:(CDUnknownBlockType)arg6 spoolToFile:(_Bool)arg7;
- (void)setSectionSubtypeParametersIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(long long)arg3;
- (void)setSectionInfo:(id)arg1 withQueue:(id)arg2 withSent:(CDUnknownBlockType)arg3 withAcknowledgement:(CDUnknownBlockType)arg4 spoolToFile:(_Bool)arg5;
- (void)setSectionInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerProtobufHandlers;
- (void)handleFileURL:(id)arg1 extraMetadata:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
