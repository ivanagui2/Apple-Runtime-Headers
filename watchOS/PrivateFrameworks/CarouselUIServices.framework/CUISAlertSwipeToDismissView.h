//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CarouselUIServices/CUISAlertSwipeToDismissViewBehaviorDelegate-Protocol.h>

@class CUISAlertBackgroundView, CUISAlertChevronView, CUISAlertSwipeToDismissViewBehavior, NSString, UIScrollView;
@protocol CUISAlertSwipeToDismissViewDataSource, CUISAlertSwipeToDismissViewDelegate;

@interface CUISAlertSwipeToDismissView : UIView <CUISAlertSwipeToDismissViewBehaviorDelegate>
{
    CUISAlertBackgroundView *_backgroundView;
    UIView *_contentView;
    id <CUISAlertSwipeToDismissViewDelegate> _delegate;
    id <CUISAlertSwipeToDismissViewDataSource> _dataSource;
    UIScrollView *_scrollView;
    CUISAlertChevronView *_topChevron;
    CUISAlertSwipeToDismissViewBehavior *_dismissBehavior;
}

@property(retain, nonatomic) CUISAlertSwipeToDismissViewBehavior *dismissBehavior; // @synthesize dismissBehavior=_dismissBehavior;
@property(retain, nonatomic) CUISAlertChevronView *topChevron; // @synthesize topChevron=_topChevron;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <CUISAlertSwipeToDismissViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <CUISAlertSwipeToDismissViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)behaviorDidPerformSwipeAction;
- (void)reloadData;
- (id)backgroundView;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

