//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface ReadingListDataStore : NSObject
{
    NSString *_storedTitle;
    BOOL _shouldSuppressChangeNotifications;
    NSArray *_items;
    NSDictionary *_itemsByUUID;
    NSDictionary *_itemsByURLString;
}

@property(nonatomic) BOOL shouldSuppressChangeNotifications; // @synthesize shouldSuppressChangeNotifications=_shouldSuppressChangeNotifications;
@property(copy, nonatomic) NSDictionary *itemsByURLString; // @synthesize itemsByURLString=_itemsByURLString;
@property(copy, nonatomic) NSDictionary *itemsByUUID; // @synthesize itemsByUUID=_itemsByUUID;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)_postReadingListChangedNotificationWithAddedItems:(id)arg1 removedItems:(id)arg2 modifiedItems:(id)arg3 forceRebuildUnreadItems:(BOOL)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)itemsWereAdded:(id)arg1 removed:(id)arg2 modified:(id)arg3 forceRebuildUnreadItems:(BOOL)arg4;
- (void)removeItemWithUndo:(id)arg1;
- (void)insertItemWithUndo:(id)arg1 atIndex:(unsigned long long)arg2 didCheckIfBookmarkEditingIsPermitted:(BOOL)arg3;
- (void)removeItem:(id)arg1;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)clearAllItems;
- (void)_updateItemsFromReadingListFolderAndForceRebuildUnreadItems:(BOOL)arg1;
- (void)_readingListModelDataDidChange:(id)arg1;
- (void)_readingListModelDataWasReloaded:(id)arg1;
- (void)loadItems;
- (unsigned long long)indexOfItem:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *itemUUIDs;
- (id)itemForURLString:(id)arg1;
- (id)itemForUUID:(id)arg1;
- (void)_fetchReadingListFolderWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_fetchExistingReadingListFolderWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithStoredTitle:(id)arg1;

@end
