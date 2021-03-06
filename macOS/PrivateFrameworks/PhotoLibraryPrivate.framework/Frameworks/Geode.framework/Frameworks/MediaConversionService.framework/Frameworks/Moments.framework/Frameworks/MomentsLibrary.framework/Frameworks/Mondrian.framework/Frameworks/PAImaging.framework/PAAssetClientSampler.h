//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PAImaging/PAImageItemSampler.h>

#import <PAImaging/PAImageAssetClientDelegate-Protocol.h>

@class NSString, PAImageAssetClient;

@interface PAAssetClientSampler : PAImageItemSampler <PAImageAssetClientDelegate>
{
    PAImageAssetClient *_assetClient;
    double _scale;
    struct CGRect _ROI;
}

- (void).cxx_destruct;
- (struct CGColor *)_newSampleFromImage:(id)arg1 inRect:(struct CGRect)arg2;
- (struct CGColor *)_newSample;
- (BOOL)_sampleWithHandler:(CDUnknownBlockType)arg1;
- (void)didUpdateImage:(id)arg1 region:(id)arg2 client:(id)arg3;
- (void)sampleColorAt:(struct CGRect)arg1 scale:(double)arg2 handler:(CDUnknownBlockType)arg3;
- (struct CGRect)_tilify:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithVersion:(id)arg1 colorProfile:(id)arg2 assetType:(id)arg3 renderDescription:(id)arg4 renderDescriptionFilter:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

