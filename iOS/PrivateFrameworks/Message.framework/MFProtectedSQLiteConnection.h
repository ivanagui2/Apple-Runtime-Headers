//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Message/MFSQLiteConnection.h>

@class NSString;

@interface MFProtectedSQLiteConnection : MFSQLiteConnection
{
    NSString *_vfsName;
    _Bool _attached;
}

@property(readonly, nonatomic) _Bool isProtectedDatabaseAttached; // @synthesize isProtectedDatabaseAttached=_attached;
- (int)detachProtectedDatabase;
- (int)attachProtectedDatabase;
- (void)close;
- (void)dealloc;
- (const char *)_vfsModuleName;
- (id)initWithConfiguration:(id)arg1;

@end
