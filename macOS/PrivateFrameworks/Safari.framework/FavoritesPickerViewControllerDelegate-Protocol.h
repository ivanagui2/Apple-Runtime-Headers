//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FavoritesPickerViewController;

@protocol FavoritesPickerViewControllerDelegate <NSObject>

@optional
- (void)favoritesPickerViewControllerDidNavigateUp:(FavoritesPickerViewController *)arg1;
- (void)favoritesPickerViewController:(FavoritesPickerViewController *)arg1 didSelectFavoriteAtIndex:(unsigned long long)arg2;
@end
