//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BRCReachabilityDelegate.h"

@class BRCAccountSession, BRCProgress, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, _BRCDownloadInfo, _BRCUploadInfo, br_pacer;

__attribute__((visibility("hidden")))
@interface BRCGlobalProgress : NSObject <BRCReachabilityDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _lazyInitDone;
    br_pacer *_updatePacer;
    BRCAccountSession *_session;
    NSObject<OS_dispatch_source> *_operationTimer;
    unsigned int _operationTimerSuspendCount;
    BOOL _showExtendedInfo;
    BOOL _networkReachable;
    BRCProgress *_globalProgress;
    NSMutableSet *_appLibrariesNotLive;
    _BRCUploadInfo *_uploads;
    _BRCDownloadInfo *_downloads;
}

+ (id)_keyPathsToObserve;
@property(readonly, nonatomic) __weak BRCAccountSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)_deleteDocument:(id)arg1 reason:(BOOL)arg2;
- (void)_updateDocument:(id)arg1;
- (void)_updateAppLibraryID:(id)arg1;
- (void)_resumeProgressForAnotherOperationIfNeeded;
- (void)_destroyDownloadWithReason:(BOOL)arg1;
- (void)_destroyUploadWithReason:(BOOL)arg1;
- (void)_destroyProgressInGroup:(id)arg1 reason:(BOOL)arg2;
- (void)_cancelDownloadForDocumentID:(id)arg1 destroyIfLast:(BOOL)arg2 willRetryTransfer:(BOOL)arg3;
- (void)_cancelDownloadForDocumentID:(id)arg1;
- (void)_cancelUploadForDocumentID:(id)arg1 inState:(unsigned int)arg2 willRetryTransfer:(BOOL)arg3 pendingQuota:(BOOL)arg4;
- (void)_cancelUploadForDocumentID:(id)arg1 inState:(unsigned int)arg2 willRetryTransfer:(BOOL)arg3;
- (void)_cancelUploadForDocumentID:(id)arg1 inState:(unsigned int)arg2;
- (void)_updateGlobalProgress;
- (void)_createDownloadMetadataWithCompletedUnitCount:(long long)arg1 totalUnitCount:(long long)arg2;
- (void)_createUploadMetadataWithCompletedUnitCount:(long long)arg1 totalUnitCount:(long long)arg2;
- (void)_createNewGlobalProgressInGroup:(id)arg1 completedUnitCount:(long long)arg2 totalUnitCount:(long long)arg3;
- (void)_createNewIndeterminateGlobalProgress;
- (void)_stopObservingProgress:(id)arg1;
- (void)_startObservingProgress:(id)arg1;
- (void)dumpToContext:(id)arg1;
- (void)dumpDictionary:(id)arg1 withMaxCount:(unsigned long long)arg2 toContext:(id)arg3;
- (void)updateDownloadThrottleForDocument:(id)arg1 toState:(int)arg2;
- (void)updateUploadThrottleForDocument:(id)arg1 toState:(int)arg2;
- (void)addProgress:(id)arg1 forDocument:(id)arg2 inGroup:(BOOL)arg3;
- (void)stopPublishingProgress;
- (void)clearOutOfQuotaState;
- (void)didDeleteDocument:(id)arg1;
- (void)didUpdateDocument:(id)arg1;
- (void)resumeProgressForZones:(id)arg1;
- (void)willScheduleDocumentForDownload:(id)arg1;
- (void)didUpdateClientZone:(id)arg1;
- (void)networkReachabilityChanged:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithSession:(id)arg1;
- (id)_t_globalProgressInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
