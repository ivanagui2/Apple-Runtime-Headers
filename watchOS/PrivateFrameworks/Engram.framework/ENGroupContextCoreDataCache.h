//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ENGroupContextCacheMiddleware.h"

@class NSObject<OS_dispatch_queue>, NSPersistentContainer, NSString;

@interface ENGroupContextCoreDataCache : NSObject <ENGroupContextCacheMiddleware>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSPersistentContainer *_container;
}

@property(retain, nonatomic) NSPersistentContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)groupContext:(id)arg1 fetchAllKnownGroups:(CDUnknownBlockType)arg2;
- (void)deleteCachedValueForForGroupContext:(id)arg1 withGroupID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteAllKnownGroupsForGroupContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)groupContext:(id)arg1 latestCachedGroupWithStableID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)groupContext:(id)arg1 cachedGroupWithID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)groupContext:(id)arg1 cacheGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (int)middlewareCacheCostForContext:(id)arg1;
- (void)_groupFromCypher:(id)arg1 groupID:(id)arg2 applicationData:(id)arg3 context:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithType:(unsigned int)arg1 containerURL:(id)arg2 queue:(id)arg3;
- (id)initInMemoryCacheWithQueue:(id)arg1;
- (id)initOnDiskCacheWithContainerURL:(id)arg1 Queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
