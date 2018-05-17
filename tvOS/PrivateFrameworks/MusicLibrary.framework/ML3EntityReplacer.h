//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ML3DatabaseConnection, ML3MusicLibrary, NSMutableArray;

@interface ML3EntityReplacer : NSObject
{
    struct __CFDictionary *_propertyToIndexPair;
    NSMutableArray *_naturalStatements;
    ML3DatabaseConnection *_connection;
    ML3MusicLibrary *_library;
}

- (void).cxx_destruct;
- (void)close;
- (void)clearBindings;
- (void)bindPersistentID:(long long)arg1;
@property(readonly, nonatomic, getter=isOpen) _Bool open;
- (_Bool)perform;
- (void)bindValue:(id)arg1 forProperty:(id)arg2;
- (void)bindDouble:(double)arg1 forProperty:(id)arg2;
- (void)bindInt:(int)arg1 forProperty:(id)arg2;
- (void)bindNullForProperty:(id)arg1;
- (id)initWithEntityClass:(Class)arg1 properties:(id)arg2 library:(id)arg3;
- (void)dealloc;

@end
