//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MusicVerticalScrollingContainerItem, MusicVerticalScrollingContainerViewController;

@protocol MusicVerticalScrollingContainerViewControllerDelegate <NSObject>

@optional
- (long long)verticalScrollingContainerViewController:(MusicVerticalScrollingContainerViewController *)arg1 contentOffsetProxyingPolicyForItem:(MusicVerticalScrollingContainerItem *)arg2;
- (void)verticalScrollingContainerViewController:(MusicVerticalScrollingContainerViewController *)arg1 willEndDraggingWithVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)verticalScrollingContainerViewControllerContentSizeDidChange:(MusicVerticalScrollingContainerViewController *)arg1;
- (void)verticalScrollingContainerViewControllerDidScroll:(MusicVerticalScrollingContainerViewController *)arg1;
- (void)verticalScrollingContainerViewControllerDidLayoutSubviews:(MusicVerticalScrollingContainerViewController *)arg1;
@end
