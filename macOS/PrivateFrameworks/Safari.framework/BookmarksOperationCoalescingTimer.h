//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSOperation<CoalesceableBookmarksOperation>;

__attribute__((visibility("hidden")))
@interface BookmarksOperationCoalescingTimer : NSObject
{
    NSObject<OS_dispatch_source> *_coalescingDispatchSource;
    NSOperation<CoalesceableBookmarksOperation> *_currentOperation;
    NSObject<OS_dispatch_queue> *_queue;
    id <BookmarksOperationCoalescingTimerDelegate> _delegate;
}

@property __weak id <BookmarksOperationCoalescingTimerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSOperation<CoalesceableBookmarksOperation> *currentOperation; // @synthesize currentOperation=_currentOperation;
- (void).cxx_destruct;
- (void)coalesceCurrentOperationWithOperation:(id)arg1;
- (void)start;
- (id)initWithOperation:(id)arg1 queue:(id)arg2;
- (id)init;

@end
