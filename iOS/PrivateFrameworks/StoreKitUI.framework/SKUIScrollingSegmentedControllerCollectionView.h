//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewControllerContainerCollectionView.h>

@interface SKUIScrollingSegmentedControllerCollectionView : SKUIViewControllerContainerCollectionView
{
    _Bool _performingLayout;
}

@property(readonly, nonatomic, getter=isPerformingLayout) _Bool performingLayout; // @synthesize performingLayout=_performingLayout;
- (void)layoutSubviews;

// Remaining properties
@property(nonatomic) id <SKUIScrollingSegmentedControllerCollectionViewDelegate> delegate; // @dynamic delegate;

@end
