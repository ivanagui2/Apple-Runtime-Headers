//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface PXSectionedChangeDetailsRepository : NSObject
{
    NSMutableArray *_allChangeDetails;
    NSObject<OS_dispatch_queue> *_internalQueue;
    long long _historyLimit;
}

@property(readonly, nonatomic) long long historyLimit; // @synthesize historyLimit=_historyLimit;
- (void).cxx_destruct;
- (id)changeDetailsFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2;
- (void)addChangeDetails:(id)arg1;
- (id)initWithChangeHistoryLimit:(long long)arg1;
- (id)init;

@end
