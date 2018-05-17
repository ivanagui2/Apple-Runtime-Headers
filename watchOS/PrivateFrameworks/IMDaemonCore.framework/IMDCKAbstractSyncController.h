//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMDCKSyncState;

@interface IMDCKAbstractSyncController : NSObject
{
    _Bool _isSyncing;
    _Bool _busy;
}

@property(nonatomic, getter=isBusy) _Bool busy; // @synthesize busy=_busy;
@property(nonatomic) _Bool isSyncing; // @synthesize isSyncing=_isSyncing;
- (void)addSyncDebuggingInfoToDictionary:(id)arg1;
- (id)syncStateDebuggingInfo:(id)arg1;
- (id)readPersistentValueForKey:(id)arg1;
- (_Bool)readPersistentBoolForKey:(id)arg1;
- (void)writePersistentValue:(id)arg1 forKey:(id)arg2;
- (void)writePersistentBool:(_Bool)arg1 forKey:(id)arg2;
- (id)prefsWriter;
- (void)setStartingInitialSync;
- (void)setStartingPeriodicSync;
- (void)setSyncStateToDeleting;
- (void)setSyncStateToUploading;
- (void)setSyncStateToDownloading;
- (void)setSyncStateToPreparing;
- (void)setSyncStateToFinished;
- (int)syncControllerRecordType;
@property(readonly, nonatomic) IMDCKSyncState *syncState;
- (id)ckUtilities;
@property(readonly, nonatomic) _Bool isUsingStingRay;

@end
