//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HDSQLiteDatabase, HDSQLiteQueryDescriptor;

@interface HDSQLiteQuery : NSObject
{
    HDSQLiteDatabase *_database;
    HDSQLiteQueryDescriptor *_descriptor;
}

@property(readonly) HDSQLiteDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (_Bool)enumerateProperties:(id)arg1 error:(id *)arg2 enumerationHandler:(CDUnknownBlockType)arg3;
- (_Bool)enumeratePersistentIDsAndProperties:(id)arg1 error:(id *)arg2 enumerationHandler:(CDUnknownBlockType)arg3;
- (void)enumerateEntitiesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)deleteAllEntitiesWithError:(id *)arg1;
- (id)copySelectSQLWithProperties:(id)arg1;
- (void)bindToSelectStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;
@property(readonly) HDSQLiteQueryDescriptor *queryDescriptor;
- (id)initWithDatabase:(id)arg1 descriptor:(id)arg2;

@end
