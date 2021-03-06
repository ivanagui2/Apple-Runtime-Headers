//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PAImaging/PAImageItemViewMode.h>

@class DGDescription, NSObject, PAAutoCalculatorContext, PAImageAssetType, RDVersion;
@protocol OS_dispatch_queue;

@interface PAImageItemViewCustomRenderDescriptionMode : PAImageItemViewMode
{
    NSObject<OS_dispatch_queue> *_queue;
    RDVersion *_version;
    PAAutoCalculatorContext *_currentAutoCalculatorContext;
    DGDescription *_renderDescription;
    DGDescription *_resolvedRenderDescription;
    PAImageAssetType *_assetType;
}

+ (id)modeWithVersion:(id)arg1 renderDescription:(id)arg2;
- (void).cxx_destruct;
- (void)deactivateWithView:(id)arg1;
- (void)activateWithView:(id)arg1;
- (id)_registerAssetClientForKey:(id)arg1 assetType:(id)arg2 renderDescriptionFilter:(id)arg3;
- (id)newAssetClientForKey:(id)arg1 assetType:(id)arg2;
- (id)renderDescriptionFilterForKey:(id)arg1;
- (id)imageAssetTypeForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToMode:(id)arg1;
@property(retain) DGDescription *renderDescription;
- (id)initWithVersion:(id)arg1 renderDescription:(id)arg2;

@end

