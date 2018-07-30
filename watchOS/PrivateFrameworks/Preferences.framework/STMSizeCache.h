//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSLock, NSMutableDictionary;

@interface STMSizeCache : NSObject
{
    struct __CFString *_prefsKey;
    NSMutableDictionary *_itemsByPath;
    id <STMSizeCacheDelegate> _delegate;
    NSLock *_itemsLock;
    unsigned long long _cacheEventID;
    long long _totalSize;
}

@property long long totalSize; // @synthesize totalSize=_totalSize;
@property(retain) NSLock *itemsLock; // @synthesize itemsLock=_itemsLock;
@property(nonatomic) unsigned long long cacheEventID; // @synthesize cacheEventID=_cacheEventID;
@property __weak id <STMSizeCacheDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)createCacheEntryForPath:(id)arg1;
- (void)sizeAllItems;
- (void)sizeItems:(id)arg1;
- (void)sizeItem:(id)arg1;
- (void)_sizePath:(id)arg1;
@property(retain, nonatomic) NSArray *items;
- (void)_sizeEntry:(id)arg1;
- (id)itemsContainedBy:(id)arg1;
- (id)itemsContaining:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)updateTotalSize;
- (id)sizeOfItem:(id)arg1;
@property(readonly) long long totalSizeOfItems;
@property(readonly) unsigned int itemCount;
@property(readonly) NSDictionary *itemSizes;
- (void)notifySizesChanged;
- (void)notifyItemsChanged;
- (void)flushCacheToPref;
- (void)_flushCache:(id)arg1;
- (void)_writeCache;
- (void)loadCacheFromPref;
- (void)dealloc;
- (id)initWithPrefsKey:(id)arg1;

@end
