//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SystemMigrationUtils/SMSystem_FileManagerProtocol-Protocol.h>

@class NSURL;

@interface SMSystem_FileManager_DiskBased : NSObject <SMSystem_FileManagerProtocol>
{
    NSURL *_root;
}

@property(retain) NSURL *root; // @synthesize root=_root;
- (void).cxx_destruct;
- (id)bundleInformationAtPaths:(id)arg1;
- (id)resourceValuesForKeys:(id)arg1 onPaths:(id)arg2 error:(id *)arg3;
- (id)pathToRemoteFile:(id)arg1 exists:(char *)arg2 makeAvailable:(BOOL)arg3;
- (void)cleanup;
- (BOOL)activate;
@property(readonly) NSURL *slash;
@property(readonly, getter=isFileSystemReady) BOOL fileSystemReady;
- (id)initAtRoot:(id)arg1;

@end

