//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@interface TSUSparseArray : NSObject <NSCopying>
{
    struct tsuSaPage *_topPage;
    unsigned long long _nonNilCount;
    unsigned int _depth;
}

+ (id)array;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long count;
- (void)clear;
- (void)foreach:(CDUnknownBlockType)arg1;
- (void)removeObjectForKey:(unsigned long long)arg1;
- (BOOL)hasObjectForKey:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forKey:(unsigned long long)arg2;
- (void)increaseDepth;
- (id)objectForKey:(unsigned long long)arg1;
- (unsigned long long)maxIndexForCurrentDepth;
- (id)description;
- (void)dealloc;

@end

