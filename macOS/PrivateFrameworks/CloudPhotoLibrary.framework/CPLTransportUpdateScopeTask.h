//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineScopedTask.h>

@interface CPLTransportUpdateScopeTask : CPLEngineScopedTask
{
    id <CPLEngineTransportDeleteTransportScopeTask> _deleteTask;
    id <CPLEngineTransportUpdateTransportScopeTask> _updateTask;
}

- (void).cxx_destruct;
- (id)taskIdentifier;
- (void)cancel;
- (void)launch;
- (BOOL)checkScopeIsValidInTransaction:(id)arg1;

@end
