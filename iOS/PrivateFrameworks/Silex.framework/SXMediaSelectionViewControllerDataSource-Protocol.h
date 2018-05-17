//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, NSString, SXMediaSelectionViewController;

@protocol SXMediaSelectionViewControllerDataSource <NSObject>
- (unsigned long long)mediaSelectionViewController:(SXMediaSelectionViewController *)arg1 indexOfSelectedMediaSelectionOptionInGroup:(unsigned long long)arg2;
- (NSString *)mediaSelectionViewController:(SXMediaSelectionViewController *)arg1 displayNameForMediaSelectionOptionAtIndexPath:(NSIndexPath *)arg2;
- (NSString *)mediaSelectionViewController:(SXMediaSelectionViewController *)arg1 displayNameForMediaSelectionGroup:(unsigned long long)arg2;
- (unsigned long long)mediaSelectionViewController:(SXMediaSelectionViewController *)arg1 numberOfMediaSelectionOptionsInGroup:(unsigned long long)arg2;
- (unsigned long long)numberOfMediaSelectionGroupsInMediaSelectionViewController:(SXMediaSelectionViewController *)arg1;
@end
