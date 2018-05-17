//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLCloudKitTransportTask.h>

#import "CPLEngineTransportUploadBatchTask.h"

@class CPLChangeBatch, NSDate, NSError, NSMutableSet, NSString, NSURL;

@interface CPLCloudKitUploadBatchTask : CPLCloudKitTransportTask <CPLEngineTransportUploadBatchTask>
{
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _progressHandler;
    NSMutableSet *_autoRejectClasses;
    NSMutableSet *_autoRejectRecordIdentifiers;
    NSError *_autoError;
    double _approximativeResourcesUploadRate;
    CPLChangeBatch *_batch;
    NSURL *_tempCKAssetURL;
    NSDate *_cplEnabledDate;
}

@property(copy, nonatomic) NSDate *cplEnabledDate; // @synthesize cplEnabledDate=_cplEnabledDate;
@property(copy, nonatomic) NSURL *tempCKAssetURL; // @synthesize tempCKAssetURL=_tempCKAssetURL;
@property(retain, nonatomic) CPLChangeBatch *batch; // @synthesize batch=_batch;
@property(readonly, nonatomic) double approximativeResourcesUploadRate; // @synthesize approximativeResourcesUploadRate=_approximativeResourcesUploadRate;
- (void).cxx_destruct;
- (void)runOperations;
- (id)initWithController:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL foreground;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;

@end
