//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXScrollViewController;

@protocol PXScrollViewControllerObserver <NSObject>

@optional
- (void)scrollViewControllerDidEndScrollingAnimation:(PXScrollViewController *)arg1;
- (void)scrollViewControllerWillBeginScrollingAnimation:(PXScrollViewController *)arg1 towardsContentEdges:(unsigned long long)arg2;
- (void)scrollViewControllerContentInsetDidChange:(PXScrollViewController *)arg1;
- (void)scrollViewControllerContentBoundsDidChange:(PXScrollViewController *)arg1;
- (void)scrollViewControllerDidEndScrolling:(PXScrollViewController *)arg1;
- (void)scrollViewControllerWillEndScrolling:(PXScrollViewController *)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewControllerDidScroll:(PXScrollViewController *)arg1;
- (void)scrollViewControllerWillBeginScrolling:(PXScrollViewController *)arg1;
- (void)scrollViewControllerWillLayoutSubviews:(PXScrollViewController *)arg1;
@end

