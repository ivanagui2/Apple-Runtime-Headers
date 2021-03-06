//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MPStoreItemMetadataRequestController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _lastExpiredMetadataPurgeMachTime;
    NSMutableDictionary *_itemCaches;
    int _cacheSize;
}

+ (unsigned int)optimalBatchSize;
+ (id)sharedStoreItemMetadataRequestController;
@property(nonatomic) int cacheSize; // @synthesize cacheSize=_cacheSize;
- (void).cxx_destruct;
- (void)_removeExpiredItemsPeriodically;
- (id)getStoreItemMetadataForRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)requestStoreItemMetadataForReason:(unsigned int)arg1 withItemIdentifiers:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)addStoreItemMetadata:(id)arg1;
- (id)init;

@end

