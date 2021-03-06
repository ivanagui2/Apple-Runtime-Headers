//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PAImagingCore/PAExportVersionRequest.h>

#import <PAImagingCore/PAExportToFileRequest-Protocol.h>

@class NSString, NSURL;
@protocol PFCanceler;

@interface PAExportOriginalToFileRequest : PAExportVersionRequest <PAExportToFileRequest>
{
    BOOL createIntermediateDirectories;
    NSURL *destinationURL;
    unsigned long long collisionPolicy;
}

@property BOOL createIntermediateDirectories; // @synthesize createIntermediateDirectories;
@property unsigned long long collisionPolicy; // @synthesize collisionPolicy;
@property(retain) NSURL *destinationURL; // @synthesize destinationURL;
- (void).cxx_destruct;
- (BOOL)validateIntoArray:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)submitWithResponseQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)synchronouslySubmitOnQueue:(id)arg1;

// Remaining properties
@property(retain) id <PFCanceler> canceler;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property double progressUpdateInterval;
@property(readonly) Class superclass;
@property BOOL wantsProgress;

@end

