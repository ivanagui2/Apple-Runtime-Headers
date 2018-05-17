//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PLResourceChooser : NSObject
{
}

+ (unsigned int)cloudResourceTypeForAsset:(id)arg1 format:(id)arg2 filePath:(id *)arg3 imageType:(int *)arg4;
+ (int)_fileResourceTypeForCloudResourceType:(unsigned int)arg1 hasAdjustments:(_Bool)arg2 requiresUnadjustedVersion:(_Bool)arg3;
+ (void)_chooseCloudResourceTypeForFormat:(id)arg1 asset:(id)arg2 optimalCPLResourceType:(unsigned int *)arg3 localCPLResourceType:(unsigned int *)arg4 localCPLResourceFilePath:(id *)arg5 fileReservation:(id *)arg6;
+ (id)_itemMatchingFormat:(id)arg1 allItems:(id)arg2 acceptableSortedAlternatives:(id *)arg3;
+ (id)_filteredArrayUsingPredicate:(id)arg1 originalItems:(id)arg2 nonMatchingItems:(id *)arg3;
+ (id)_penultimateItemFromAllItems:(id)arg1;
+ (id)_originalItemFromAllItems:(id)arg1;
+ (id)fileReservationForImageFileForAsset:(id)arg1 format:(id)arg2 outFilePath:(id *)arg3 outImageType:(int *)arg4;
+ (id)fileReservationForLargeDisplayableImageFileForAsset:(id)arg1 format:(id)arg2 allowMetadataSnapshot:(_Bool)arg3 forceLarge:(_Bool)arg4 outFilePath:(id *)arg5 outImageType:(int *)arg6;
+ (id)_chooseFileReservationForLargeDisplayableImageFileForAsset:(id)arg1 format:(id)arg2 forceLarge:(_Bool)arg3 allowMetadataSnapshot:(_Bool)arg4 outFilePath:(id *)arg5 outImageType:(int *)arg6;
- (void)dealloc;
- (id)init;

@end
