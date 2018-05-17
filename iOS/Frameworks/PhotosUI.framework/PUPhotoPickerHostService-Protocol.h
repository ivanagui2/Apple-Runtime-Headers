//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PUPhotoPickerSelectionService.h"
#import "PUPhotoPickerTestSupportHandler.h"

@class NSArray, NSData, NSDictionary, NSNumber, NSString, NSUUID;

@protocol PUPhotoPickerHostService <PUPhotoPickerSelectionService, PUPhotoPickerTestSupportHandler>
- (void)performTraitCollectionUpdateUsingData:(NSData *)arg1 completion:(void (^)(NSNumber *))arg2;
- (void)performAppearanceUpdateUsingPhotoPickerAppearanceDictionary:(NSDictionary *)arg1;
- (void)displaySecondaryActionWithType:(NSNumber *)arg1;
- (void)displayActionTypeDescription:(NSString *)arg1;
- (void)displayActionWithType:(NSNumber *)arg1;
- (void)didSelectMultipleMediaItemsWithInfoDictionaries:(NSArray *)arg1;
- (void)didSelectMediaWithInfoDictionary:(NSDictionary *)arg1;
- (void)didDisplayPhotoPickerPreview;
- (void)didDisplayPhotoPickerSourceType:(NSNumber *)arg1;
- (void)setPhotoPickerNavigationBarHidden:(NSNumber *)arg1;
- (void)requestViewControllerFromPhotoPickerWithRequestIdentifier:(NSUUID *)arg1;
- (void)dismissCurrentViewControllerFromPhotoPickerAnimated:(NSNumber *)arg1;
- (void)invalidatePhotoPickerHostServices;
- (void)cancelPhotoPicker;
- (void)setPhotoPickerViewControllerPrompt:(NSString *)arg1;
- (void)setPhotoPickerViewControllerTitle:(NSString *)arg1;
@end
