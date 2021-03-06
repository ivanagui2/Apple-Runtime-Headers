//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSPersistentStoreRequest.h>

@class NSSet;

@interface NSSaveChangesRequest : NSPersistentStoreRequest
{
    NSSet *_insertedObjects;
    NSSet *_updatedObjects;
    NSSet *_deletedObjects;
    NSSet *_optimisticallyLockedObjects;
    unsigned long long _flags;
    void *_reserved1;
}

+ (void)initialize;
- (unsigned long long)requestType;
- (id)description;
@property(readonly) NSSet *lockedObjects;
@property(readonly) NSSet *deletedObjects;
@property(readonly) NSSet *updatedObjects;
@property(readonly) NSSet *insertedObjects;
- (id)init;
- (void)dealloc;
- (id)initWithInsertedObjects:(id)arg1 updatedObjects:(id)arg2 deletedObjects:(id)arg3 lockedObjects:(id)arg4;
- (BOOL)_secureOperation;
- (void)_setSecureOperation:(BOOL)arg1;
- (void)_setRetryHandlerCount:(BOOL)arg1;
- (BOOL)_retryHandlerCount;
- (BOOL)hasChanges;
- (void)setDeletedObjects:(id)arg1;

@end

