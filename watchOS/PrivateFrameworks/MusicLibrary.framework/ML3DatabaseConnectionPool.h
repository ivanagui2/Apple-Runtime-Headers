//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSUUID, _ML3DatabaseConnectionSubPool;
@protocol ML3DatabaseConnectionPoolDelegate, OS_dispatch_queue;

@interface ML3DatabaseConnectionPool : NSObject
{
    _ML3DatabaseConnectionSubPool *_readersSubPool;
    _ML3DatabaseConnectionSubPool *_writersSubPool;
    NSMutableDictionary *_identifiersConnectionsMap;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSUUID *_poolStorageKey;
    int _connectionsProfilingLevel;
    _Bool _useDistantWriterConnections;
    struct _opaque_pthread_cond_t {
        long __sig;
        char __opaque[24];
    } _poolLockCondition;
    struct _opaque_pthread_mutex_t {
        long __sig;
        char __opaque[40];
    } _poolLockMutex;
    _Bool _locked;
    NSString *_databasePath;
    id <ML3DatabaseConnectionPoolDelegate> _delegate;
    unsigned int _maxReaders;
    unsigned int _maxWriters;
    unsigned int _connectionsJournalingMode;
}

@property(readonly, nonatomic, getter=isLocked) _Bool locked; // @synthesize locked=_locked;
@property(nonatomic) unsigned int connectionsJournalingMode; // @synthesize connectionsJournalingMode=_connectionsJournalingMode;
@property(readonly, nonatomic) unsigned int maxWriters; // @synthesize maxWriters=_maxWriters;
@property(readonly, nonatomic) unsigned int maxReaders; // @synthesize maxReaders=_maxReaders;
@property(nonatomic) __weak id <ML3DatabaseConnectionPoolDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (void).cxx_destruct;
- (void)_setLocalConnection:(id)arg1 forThread:(id)arg2;
- (id)_localConnectionForThread:(id)arg1;
- (void)_setConnection:(id)arg1 forIdentifier:(id)arg2;
- (id)_connectionForIdentifier:(id)arg1;
- (id)_generateDiagnostic;
- (void)_closeAllConnectionsAndWaitForBusyConnections:(_Bool)arg1;
- (void)unlock;
- (void)lock;
- (void)closeAllConnections;
- (void)checkInConnection:(id)arg1;
- (id)_connectionForWriting:(_Bool)arg1 useThreadConnection:(_Bool)arg2 storeThreadLocalConnection:(_Bool)arg3;
@property(readonly) _Bool isCurrentThreadConnectionInTransaction;
- (id)writerConnection;
- (id)readerConnection;
@property(nonatomic) _Bool useDistantWriterConnections;
@property(nonatomic) int connectionsProfilingLevel;
- (void)dealloc;
- (id)init;
- (id)initWithDatabasePath:(id)arg1 maxReaders:(unsigned int)arg2 maxWriters:(unsigned int)arg3;
- (id)initWithDatabasePath:(id)arg1 maxReaders:(unsigned int)arg2;

@end

