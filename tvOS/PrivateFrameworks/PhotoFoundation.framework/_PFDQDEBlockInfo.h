//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoFoundation/PFDispatchQueueStatisticsBlockInfo.h>

@class _PFDQDECallSite;

@interface _PFDQDEBlockInfo : PFDispatchQueueStatisticsBlockInfo
{
    _PFDQDECallSite *_callSite;
}

@property(readonly) _PFDQDECallSite *callSite; // @synthesize callSite=_callSite;
- (void).cxx_destruct;
- (id)backtraceWithPrefix:(id)arg1;
- (id)init;

@end
