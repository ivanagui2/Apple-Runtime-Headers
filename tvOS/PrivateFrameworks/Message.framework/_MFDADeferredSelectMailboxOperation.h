//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Message/MFOfflineCacheOperation.h>

#import "MFDAOfflineCacheOperation.h"

@class NSString;

@interface _MFDADeferredSelectMailboxOperation : MFOfflineCacheOperation <MFDAOfflineCacheOperation>
{
    NSString *_folderID;
}

- (id)description;
- (_Bool)performWithAccount:(id)arg1 offlineCache:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMailbox:(id)arg1;

@end
