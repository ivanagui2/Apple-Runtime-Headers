//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CMCachingThread : NSObject
{
    NSString *_cacheFilePath;
    BOOL _cacheManagerWantsMeToTakeAHike;
}

- (void)storeObjects:(id)arg1;
- (BOOL)isCancelled;
- (void)cancel;
- (void)dealloc;
- (id)initWithCacheFilePath:(id)arg1 cacheRecordAsIs:(BOOL)arg2;

@end

