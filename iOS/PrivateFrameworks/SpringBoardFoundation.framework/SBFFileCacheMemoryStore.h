//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBFFileCacheStore.h"

@class NSMutableDictionary, NSString;

@interface SBFFileCacheMemoryStore : NSObject <SBFFileCacheStore>
{
    NSMutableDictionary *_fileWrappers;
}

- (void).cxx_destruct;
- (void)removeAllFileWrappersForFileCache:(id)arg1;
- (void)fileCache:(id)arg1 removeFileWrapperNamed:(id)arg2;
- (id)fileCache:(id)arg1 loadFileWrapperNamed:(id)arg2;
- (void)fileCache:(id)arg1 storeFileWrapper:(id)arg2;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
