//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedRock/ImportAsset.h>

#import <RedRock/NSFilePresenter-Protocol.h>

@class NSOperationQueue, NSSet, NSString, NSURL;

@interface RelatedFile : ImportAsset <NSFilePresenter>
{
    int _type;
    NSURL *_primaryPresentedItemURL;
    NSURL *_presentedItemURL;
    NSOperationQueue *_opQueue;
}

+ (int)relatedFileType:(id)arg1 uti:(id)arg2;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue; // @synthesize presentedItemOperationQueue=_opQueue;
@property(readonly, copy) NSURL *presentedItemURL; // @synthesize presentedItemURL=_presentedItemURL;
@property(readonly) int type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, copy) NSURL *primaryPresentedItemURL; // @synthesize primaryPresentedItemURL=_primaryPresentedItemURL;
- (void)setPrimaryPresentedItemURL:(id)arg1;
- (void)importForRecord:(id)arg1 copyMethod:(unsigned long long)arg2;
- (id)getMetadataForImportRecord:(id)arg1 fileData:(id)arg2 parentRecord:(id)arg3;
- (id)thumbnailOfSize:(unsigned long long)arg1 loadXmpData:(BOOL)arg2 error:(id *)arg3;
- (id)loadMetadata;
- (BOOL)canReference;
- (void)dealloc;
- (id)initWithFile:(id)arg1 relatedFile:(id)arg2 supportedCategory:(unsigned char)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly) Class superclass;

@end

