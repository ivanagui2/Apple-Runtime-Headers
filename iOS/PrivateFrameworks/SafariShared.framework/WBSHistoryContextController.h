//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKContextClient, CKContextResponse, NSObject<OS_dispatch_queue>, NSURL, WBSHistory;

@interface WBSHistoryContextController : NSObject
{
    CKContextResponse *_cachedResponse;
    NSURL *_pageURLForCachedResponse;
    NSObject<OS_dispatch_queue> *_internalQueue;
    CKContextClient *_client;
    WBSHistory *_history;
}

@property(readonly, nonatomic) WBSHistory *history; // @synthesize history=_history;
- (void).cxx_destruct;
- (void)contextForPageURL:(id)arg1 content:(id)arg2 contentType:(long long)arg3 metadata:(id)arg4 isPrivate:(_Bool)arg5 isReaderAvailable:(_Bool)arg6 withCompletionHandler:(CDUnknownBlockType)arg7;
- (void)invalidateCachedResults;
- (void)cachedResponseForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithHistory:(id)arg1 contextClient:(id)arg2;

@end
