//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TVHomeSharingKit/TVHKImageLoadParamsOperation.h>

@class TVHKMediaServerRequestOperation;

__attribute__((visibility("hidden")))
@interface TVHKMediaEntityDMAPImageLoadOperation : TVHKImageLoadParamsOperation
{
    unsigned long long _DAAPDatabaseID;
    unsigned long long _DPAPDatabaseID;
    TVHKMediaServerRequestOperation *_imageRequestOperation;
}

@property(retain, nonatomic) TVHKMediaServerRequestOperation *imageRequestOperation; // @synthesize imageRequestOperation=_imageRequestOperation;
@property(nonatomic) unsigned long long DPAPDatabaseID; // @synthesize DPAPDatabaseID=_DPAPDatabaseID;
@property(nonatomic) unsigned long long DAAPDatabaseID; // @synthesize DAAPDatabaseID=_DAAPDatabaseID;
- (void).cxx_destruct;
- (id)_DPAPImageRequest;
- (id)_DAAPGroupsArtworkRequestAction;
- (id)_DAAPCollectionImageRequest;
- (id)_DAAPItemImageRequest;
- (id)_DAAPImageRequest;
- (void)_handleResponse:(id)arg1;
- (struct CGSize)_imageRequestScaleToSize;
- (_Bool)_imageRequestCropToFit;
- (void)_setScalingArgumentsForRequest:(id)arg1;
- (id)_imageRequest;
- (id)_mediaEntityImageLoadParams;
- (void)cancel;
- (void)executionDidBegin;
- (id)initWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 DAAPDatabaseID:(unsigned long long)arg4 DPAPDatabaseID:(unsigned long long)arg5;
- (id)initWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;

@end
