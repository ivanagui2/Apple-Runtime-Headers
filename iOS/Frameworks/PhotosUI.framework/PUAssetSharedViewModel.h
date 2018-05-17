//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUViewModel.h>

@class NSProgress, PUAssetSharedViewModelChange, PUOperationStatus;

__attribute__((visibility("hidden")))
@interface PUAssetSharedViewModel : PUViewModel
{
    id <PUDisplayAsset> _asset;
    PUOperationStatus *_loadingStatus;
    NSProgress *_saveProgress;
    long long _saveState;
}

@property(nonatomic) long long saveState; // @synthesize saveState=_saveState;
@property(retain, nonatomic) NSProgress *saveProgress; // @synthesize saveProgress=_saveProgress;
@property(retain, nonatomic) PUOperationStatus *loadingStatus; // @synthesize loadingStatus=_loadingStatus;
@property(readonly, nonatomic) id <PUDisplayAsset> asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)unregisterChangeObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
@property(readonly, nonatomic) PUAssetSharedViewModelChange *currentChange;
- (id)newViewModelChange;
- (id)initWithAsset:(id)arg1;
- (id)init;

@end
