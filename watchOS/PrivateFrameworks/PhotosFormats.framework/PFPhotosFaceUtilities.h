//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PFPhotosFaceUtilities : NSObject
{
}

+ (struct CGSize)faceTileSizeAdjustingForImageAspectRatio:(struct CGSize)arg1 imgWidth:(float)arg2 imgHeight:(float)arg3;
+ (_Bool)getCropRectForPortraitImage:(struct CGRect *)arg1 size:(float)arg2 imgWidth:(float)arg3 imgHeight:(float)arg4 centerX:(float)arg5 centerY:(float)arg6;
+ (id)selectRepresentativeFromFaces:(id)arg1 qualityMeasureByLocalIdentifier:(id)arg2 representativenessByCSN:(id)arg3 candidateFaces:(id)arg4;
+ (id)selectRepresentativeFromFaces:(id)arg1 qualityMeasureByLocalIdentifier:(id)arg2 representativenessByCSN:(id)arg3;
+ (int)qualityMeasureForFace:(id)arg1 countOfFacesOnAsset:(unsigned int)arg2;
+ (id)bestMergeCandidateFaceFor:(id)arg1 from:(id)arg2 ignoreSourceAssetDimensions:(_Bool)arg3;
+ (id)sortedViableMergeCandidateFacesFor:(id)arg1 from:(id)arg2 ignoreSourceAssetDimensions:(_Bool)arg3 matchScores:(id *)arg4;

@end
