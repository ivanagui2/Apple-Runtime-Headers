//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface _UITableViewPrefetchContext : NSObject
{
    _Bool _prefetchScheduled;
    CDUnknownBlockType _requestHandler;
    CDUnknownBlockType _cancelHandler;
    NSMutableIndexSet *_outstandingRequests;
    int _maxIndex;
    float _lastContentOffset;
    int _prefetchItemCount;
    int _refreshPrefetchThresholdCount;
    int _cancelThresholdCount;
    struct _NSRange _lastVisibleIndexRange;
}

@property(nonatomic) _Bool prefetchScheduled; // @synthesize prefetchScheduled=_prefetchScheduled;
@property(nonatomic) int cancelThresholdCount; // @synthesize cancelThresholdCount=_cancelThresholdCount;
@property(nonatomic) int refreshPrefetchThresholdCount; // @synthesize refreshPrefetchThresholdCount=_refreshPrefetchThresholdCount;
@property(nonatomic) int prefetchItemCount; // @synthesize prefetchItemCount=_prefetchItemCount;
@property(nonatomic) float lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(nonatomic) struct _NSRange lastVisibleIndexRange; // @synthesize lastVisibleIndexRange=_lastVisibleIndexRange;
@property(nonatomic) int maxIndex; // @synthesize maxIndex=_maxIndex;
@property(retain, nonatomic) NSMutableIndexSet *outstandingRequests; // @synthesize outstandingRequests=_outstandingRequests;
@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(copy, nonatomic) CDUnknownBlockType requestHandler; // @synthesize requestHandler=_requestHandler;
- (void).cxx_destruct;
- (id)computedPrefetchIndexSet;
- (struct _NSRange)_validatedRangeWithLocation:(int)arg1 length:(int)arg2;
- (struct _NSRange)_offsetAndValidateRange:(struct _NSRange)arg1 firstIndexOffset:(int)arg2 lastIndexOffset:(int)arg3;
- (int)_effectiveRefreshDirectionForProposedVisibleIndexRange:(struct _NSRange)arg1 withContentOffset:(float)arg2;
- (id)description;
- (void)cancelWithNewMaxIndex:(int)arg1;
- (void)cancel;
- (void)schedulePrefetchRequestAfterNextCACommit:(id)arg1;
- (void)updateVisibleIndexRange:(struct _NSRange)arg1 withContentOffset:(float)arg2;
- (id)initWithMaxIndex:(int)arg1 prefetchItemCount:(int)arg2 refreshPrefetchThresholdCount:(int)arg3 cancelThresholdCount:(int)arg4;

@end

