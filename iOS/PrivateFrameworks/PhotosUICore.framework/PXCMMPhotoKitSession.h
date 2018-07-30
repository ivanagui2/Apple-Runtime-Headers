//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXCMMSession.h>

@class PHAsset, PHMomentShare, PHSuggestion, PXPhotoKitAssetsDataSourceManager;

@interface PXCMMPhotoKitSession : PXCMMSession
{
    PHMomentShare *_momentShare;
    PHSuggestion *_suggestion;
    PHMomentShare *_originatingMomentShare;
    PHAsset *_anchorAsset;
}

@property(nonatomic) __weak PHAsset *anchorAsset; // @synthesize anchorAsset=_anchorAsset;
@property(readonly, nonatomic) PHMomentShare *originatingMomentShare; // @synthesize originatingMomentShare=_originatingMomentShare;
@property(readonly, nonatomic) PHSuggestion *suggestion; // @synthesize suggestion=_suggestion;
@property(readonly, nonatomic) PHMomentShare *momentShare; // @synthesize momentShare=_momentShare;
- (void).cxx_destruct;
- (id)diagnosticDictionary;
- (id)assetsProgressListenerWithPresentationStyle:(long long)arg1;
- (id)description;
- (id)notificationSuppressionContexts;
- (id)initWithPhotoKitContext:(id)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) PXPhotoKitAssetsDataSourceManager *dataSourceManager; // @dynamic dataSourceManager;

@end
