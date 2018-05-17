//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSMapTable, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface PKAsyncCache : NSObject
{
    NSCache *_itemByKey;
    NSMapTable *_weakItemByKey;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_deliveryBlocksByKey;
}

- (void).cxx_destruct;
- (void)_executeRetrievalBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)retrieveItemForKey:(id)arg1 retrievalBlock:(CDUnknownBlockType)arg2 deliveryBlock:(CDUnknownBlockType)arg3;
- (id)initWithCache:(id)arg1;
- (id)init;

@end
