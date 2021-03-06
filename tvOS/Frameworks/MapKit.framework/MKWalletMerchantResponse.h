//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MKMapItem, MKWalletMerchantStylingInfo, NSString;
@protocol GEOMapItem;

@interface MKWalletMerchantResponse : NSObject
{
    id <GEOMapItem> _mapItem;
    NSString *_localizedPlaceName;
    NSString *_localizedPlaceLanguage;
    MKWalletMerchantStylingInfo *_walletCategoryStyling;
    NSString *_localizedWalletCategoryName;
    NSString *_localizedWalletCategoryLanguage;
}

@property(readonly, nonatomic) NSString *localizedWalletCategoryLanguage; // @synthesize localizedWalletCategoryLanguage=_localizedWalletCategoryLanguage;
@property(readonly, nonatomic) NSString *localizedWalletCategoryName; // @synthesize localizedWalletCategoryName=_localizedWalletCategoryName;
@property(readonly, nonatomic) MKWalletMerchantStylingInfo *walletCategoryStyling; // @synthesize walletCategoryStyling=_walletCategoryStyling;
@property(readonly, nonatomic) NSString *localizedPlaceLanguage; // @synthesize localizedPlaceLanguage=_localizedPlaceLanguage;
@property(readonly, nonatomic) NSString *localizedPlaceName; // @synthesize localizedPlaceName=_localizedPlaceName;
- (void).cxx_destruct;
@property(readonly, nonatomic) MKMapItem *mapItem;
@property(readonly, nonatomic) NSString *walletCategoryIdentifier;
@property(readonly, nonatomic) NSString *mapsCategoryIdentifier;
- (id)categoryLocalizedStringLocale;
- (id)categoryLocalizedString;
- (id)categoryStyling;
- (id)placeLocalizedStringLocale;
- (id)placeLocalizedString;
@property(readonly, nonatomic) MKWalletMerchantStylingInfo *placeStyling;
- (id)initWithGEOMapItem:(id)arg1;

@end

