//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSHistory.h>

@interface WBUHistory : WBSHistory
{
    _Bool _shouldScheduleMaintenance;
}

@property(nonatomic) _Bool shouldScheduleMaintenance; // @synthesize shouldScheduleMaintenance=_shouldScheduleMaintenance;
- (_Bool)historyStoreShouldScheduleMaintenance:(id)arg1;
- (void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1;
- (_Bool)historyStoreShouldCheckDatabaseIntegrity:(id)arg1;
- (Class)_historyItemClass;
- (void)_addVisitedLinksForItemsIfNeeded:(id)arg1;
- (void)_removeAllVisitedLinks;
- (id)_createHistoryStore;
- (id)init;

@end

