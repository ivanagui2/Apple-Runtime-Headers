//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMSSQLiteConnectionOptions, NSError, NSMapTable, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AMSSQLiteConnection : NSObject
{
    NSMutableArray *_afterTransactionBlocks;
    struct sqlite3 *_database;
    id <AMSSQLiteConnectionDelegate> _delegate;
    _Bool _didResetForCorruption;
    NSMapTable *_preparedStatements;
    int _transactionDepth;
    _Bool _transactionWantsRollback;
    AMSSQLiteConnectionOptions *_options;
}

@property(readonly, copy, nonatomic) AMSSQLiteConnectionOptions *options; // @synthesize options=_options;
@property(nonatomic) __weak id <AMSSQLiteConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_verifiedStatementForSQL:(id)arg1 error:(id *)arg2;
- (id)_verifiedStatementForPreparedStatement:(id)arg1 error:(id *)arg2;
- (id)_statementForPreparedStatement:(id)arg1 error:(id *)arg2;
- (_Bool)_resetAfterIOError;
- (_Bool)_resetAfterCorruptionError;
- (id)_prepareStatement:(id)arg1 error:(id *)arg2;
- (_Bool)_performResetAfterCorruptionError;
- (_Bool)_openAndAllowRetry:(_Bool)arg1;
- (_Bool)_open;
- (void)_flushAfterTransactionBlocks;
- (void)_finalizeAllStatements;
- (_Bool)_executeWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)_executeStatement:(id)arg1 error:(id *)arg2;
- (_Bool)_close;
- (_Bool)executeWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSError *currentError;
- (_Bool)truncate;
- (id)prepareStatement:(id)arg1 error:(id *)arg2;
- (void)performTransaction:(CDUnknownBlockType)arg1;
- (_Bool)open;
@property(readonly, nonatomic) int lastChangeCount;
- (_Bool)finalizePreparedStatement:(id)arg1 error:(id *)arg2;
- (_Bool)executeStatement:(id)arg1 error:(id *)arg2 bindings:(CDUnknownBlockType)arg3;
- (_Bool)executeStatement:(id)arg1 error:(id *)arg2;
- (void)executeQuery:(id)arg1 withResults:(CDUnknownBlockType)arg2;
- (_Bool)executePreparedStatement:(id)arg1 error:(id *)arg2 bindings:(CDUnknownBlockType)arg3;
- (_Bool)executePreparedStatement:(id)arg1 error:(id *)arg2;
- (void)executePreparedQuery:(id)arg1 withResults:(CDUnknownBlockType)arg2;
- (void)dispatchAfterTransaction:(CDUnknownBlockType)arg1;
- (_Bool)close;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;

@end
