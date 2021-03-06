//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MFAttachmentDataProviderProtocol-Protocol.h>

@class NSString, NSURL;

@interface MFAttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol>
{
    NSURL *_url;
    long long _isPartialDownload;
}

+ (id)dataProviderWithPath:(id)arg1;
+ (id)dataProviderWithURL:(id)arg1;
@property(retain) NSURL *url; // @synthesize url=_url;
- (void)dataWithRange:(struct _NSRange)arg1 completion:(CDUnknownBlockType)arg2;
- (id)data;
- (_Bool)append:(id)arg1 isComplete:(_Bool)arg2;
- (_Bool)save:(id)arg1;
- (id)_fileAttributes:(id)arg1;
- (_Bool)_setPartialDownload:(_Bool)arg1;
- (_Bool)_partialDownload;
- (_Bool)exists;
- (_Bool)_isFileURL;
- (id)_path;
- (id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;
- (id)messageForAttachment:(id)arg1;
- (void)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fetchLocalDataForAttachment:(id)arg1;
- (id)errorWithMessage:(id)arg1 code:(long long)arg2;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

