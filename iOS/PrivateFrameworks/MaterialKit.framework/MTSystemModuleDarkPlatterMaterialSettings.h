//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MaterialKit/MTSystemModuleMaterialSettings.h>

#import "_MTMaterialPerformanceConfiguring.h"

@class NSString;

@interface MTSystemModuleDarkPlatterMaterialSettings : MTSystemModuleMaterialSettings <_MTMaterialPerformanceConfiguring>
{
}

+ (id)sharedMaterialSettings;
- (id)_blurInputQualityForOptions:(unsigned long long)arg1;
- (double)_backdropScaleForOptions:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
