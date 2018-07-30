//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLCloudKitTransportTask.h>

#import "CPLEngineTransportFetchMomentShareTask.h"

@class NSString, NSURL;

@interface CPLCloudKitFetchMomentShareTask : CPLCloudKitTransportTask <CPLEngineTransportFetchMomentShareTask>
{
    NSURL *_shareURL;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
- (id)_momentShareFromShareMetadata:(id)arg1;
- (void)runOperations;
- (id)initWithController:(id)arg1 shareURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(nonatomic, getter=isBackgroundTask) BOOL backgroundTask;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isForcedTask) BOOL forcedTask;
@property(nonatomic) BOOL foreground;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighPriorityBackground) BOOL highPriorityBackground;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;

@end
