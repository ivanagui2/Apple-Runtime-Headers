//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUViewModel.h>

@class NSMutableSet, PHAnimatedImage, PUMediaProvider;

__attribute__((visibility("hidden")))
@interface PUBrowsingAnimatedImagePlayer : PUViewModel
{
    struct {
        _Bool animatedImage;
    } _isValid;
    _Bool _isAnimatedImageLoadingAllowed;
    int __animatedImageRequestID;
    id <PUDisplayAsset> _asset;
    PUMediaProvider *_mediaProvider;
    PHAnimatedImage *_animatedImage;
    NSMutableSet *__animatedImageLoadingDisablingReasons;
}

@property(nonatomic, setter=_setAnimatedImageRequestID:) int _animatedImageRequestID; // @synthesize _animatedImageRequestID=__animatedImageRequestID;
@property(retain, nonatomic) NSMutableSet *_animatedImageLoadingDisablingReasons; // @synthesize _animatedImageLoadingDisablingReasons=__animatedImageLoadingDisablingReasons;
@property(nonatomic, setter=_setAnimatedImageLoadingAllowed:) _Bool isAnimatedImageLoadingAllowed; // @synthesize isAnimatedImageLoadingAllowed=_isAnimatedImageLoadingAllowed;
@property(retain, nonatomic, setter=_setAnimatedImage:) PHAnimatedImage *animatedImage; // @synthesize animatedImage=_animatedImage;
@property(readonly, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(retain, nonatomic) id <PUDisplayAsset> asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (id)debugDetailedDescription;
- (void)_handleAnimatedImageRequestComplete:(id)arg1;
- (void)_updateAnimatedImage;
- (void)_updateIfNeeded;
- (_Bool)_needsUpdate;
- (void)didPerformChanges;
- (void)_invalidateAnimatedImage;
- (void)setAnimatedImageLoadingDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)unloadAnimatedImage;
- (void)_cancelLoading;
- (id)newViewModelChange;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;
- (id)init;

@end
