//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSFetchRequest, NSPersistentHistoryChangeRequest, NSSQLiteStatement;

__attribute__((visibility("hidden")))
@interface NSSQLPersistentHistoryChangeRequestContext : NSSQLStoreRequestContext
{
    NSSQLiteStatement *_changeRequestStatement;
    NSFetchRequest *_fetchRequest;
}

- (BOOL)executeRequestUsingConnection:(id)arg1;
- (id)_changeFromResult:(id)arg1 withTransaction:(id)arg2 andTombstoneCache:(id)arg3;
- (id)_transactionFromResult:(id)arg1 withChanges:(id)arg2;
- (id)_processResult:(id)arg1;
- (void)executePrologue;
- (BOOL)isWritingRequest;
@property(readonly, nonatomic) NSSQLiteStatement *changeRequestStatement;
- (void)_createChangeRequestStatement;
- (id)createDeleteTransactionsRequestContext;
- (id)createRequestContextForChangesWithTransactionIDs:(id)arg1;
- (id)createCountRequestContextForChanges;
- (id)fetchRequestDescribingChanges;
@property(readonly, nonatomic) NSPersistentHistoryChangeRequest *request;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;

@end
