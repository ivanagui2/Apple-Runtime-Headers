//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPAsyncOperation.h"

@class NMSMutableMediaSyncInfo;

__attribute__((visibility("hidden")))
@interface NMSMusicSyncInfoUpdaterOperation : MPAsyncOperation
{
    NMSMutableMediaSyncInfo *_syncInfo;
}

+ (id)sharedLibraryRequestQueue;
@property(readonly, nonatomic) NMSMutableMediaSyncInfo *syncInfo; // @synthesize syncInfo=_syncInfo;
- (void).cxx_destruct;
- (void)execute;

@end
