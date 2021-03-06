//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, TVCKSyncingKeyValueStore;
@protocol OS_dispatch_queue;

@interface TVCKBookmarkService : NSObject
{
    NSMutableDictionary *_pending;
    _Bool _scheduledUpdate;
    _Bool _syncAfterUpdate;
    NSObject<OS_dispatch_queue> *_updateQueue;
    TVCKSyncingKeyValueStore *_keyValueStore;
    _Bool _syncInProgress;
    NSDate *_dateOfLastSyncCompletion;
    unsigned long long _numSyncsInProgress;
}

+ (id)bookmarkKeyForKeyValueStoreKey:(id)arg1;
+ (id)_keyValueStoreKeyForBookmarkKey:(id)arg1;
+ (id)_kvsDictionaryFromBookmark:(id)arg1;
+ (id)_bookmarkFromKey:(id)arg1 kvsDictionary:(id)arg2;
+ (id)sharedInstance;
+ (void)setupBookmarkService:(id)arg1;
@property(nonatomic) unsigned long long numSyncsInProgress; // @synthesize numSyncsInProgress=_numSyncsInProgress;
@property(retain, nonatomic) NSDate *dateOfLastSyncCompletion; // @synthesize dateOfLastSyncCompletion=_dateOfLastSyncCompletion;
@property(nonatomic) _Bool syncInProgress; // @synthesize syncInProgress=_syncInProgress;
- (void).cxx_destruct;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_batchUpdate;
- (void)_writePendingToAppleTVKeyValueStore:(id)arg1;
- (void)resetForRetailWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool syncHasFinishedRecently;
- (void)synchronizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateBookmark:(id)arg1 sync:(_Bool)arg2;
- (void)updateBookmark:(id)arg1;
- (id)pendingBookmarkForKey:(id)arg1;
- (id)bookmarkForKey:(id)arg1;
- (void)fetchAllBookmarksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateBookmarks:(id)arg1 withBookmark:(id)arg2;
- (id)bookmarksForKeys:(id)arg1;
- (void)_nukePendingChangesAndNotify;
- (void)_handleUPPClientDidResetNotification;
- (void)_handleUPPRecordsDidChangeNotification;
- (void)_handleKeyValueStoreDidResetNotification;
- (void)_handleKeyValueStoreVersionDidChangeNotification;
- (void)dealloc;
- (id)initWithKeyValueStore:(id)arg1;

@end

