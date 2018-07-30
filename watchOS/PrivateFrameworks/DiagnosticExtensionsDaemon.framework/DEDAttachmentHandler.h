//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_os_log>;

@interface DEDAttachmentHandler : NSObject
{
    _Bool _compressOnAttach;
    NSObject<OS_os_log> *_log;
}

@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property _Bool compressOnAttach; // @synthesize compressOnAttach=_compressOnAttach;
- (void).cxx_destruct;
- (id)directoryForBugSession:(id)arg1 extension:(id)arg2 rootDirectory:(id)arg3;
- (id)directoryForBugSession:(id)arg1 extension:(id)arg2 rootDirectory:(id)arg3 createIfNeeded:(_Bool)arg4;
- (id)directoryForBugSession:(id)arg1 rootDirectory:(id)arg2 createIfNeeded:(_Bool)arg3;
- (id)dedDirectory;
- (id)identifierForAdoptingFile:(id)arg1;
- (unsigned int)directorySizeForBugSession:(id)arg1;
- (void)removeDirectoryForBugSession:(id)arg1;
- (id)directoryForBugSession:(id)arg1;
- (id)_createEmptyMessageFileForDE:(id)arg1 extensionName:(id)arg2 forSession:(id)arg3 device:(id)arg4 withRootDir:(id)arg5;
- (id)createEmptyMessageFileForDE:(id)arg1 extensionName:(id)arg2 forSession:(id)arg3 device:(id)arg4;
- (id)collectedGroupsForSession:(id)arg1 matchingExtensions:(id)arg2;
- (void)removeDEFiles:(id)arg1 inSession:(id)arg2;
- (id)_processAttachments:(id)arg1 forSession:(id)arg2 extension:(id)arg3 rootDir:(id)arg4;
- (id)processAttachments:(id)arg1 forSession:(id)arg2 extension:(id)arg3;
- (id)init;

@end
