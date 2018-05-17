//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableArray, NSString, TVFocusRedirectView, TVShadowView, UIScrollView;

@interface TVLItemDetailView : UIView <UIScrollViewDelegate>
{
    id <UIFocusItem> _lastFocusedView;
    UIView *_bannerView;
    UIView *_headerView;
    UIView *_artworkView;
    NSArray *_summaryViews;
    CDUnknownBlockType _selectionHandler;
    CDUnknownBlockType _playHandler;
    UIView *_footerView;
    UIScrollView *_scrollView;
    TVShadowView *_topShadowView;
    TVShadowView *_bottomShadowView;
    UIView *_toolbarView;
    TVFocusRedirectView *_toolbarContainingView;
    NSMutableArray *_toolbarButtons;
    double _toolbarItemHeight;
    double _toolbarInterItemSpacing;
    unsigned long long _lastHighlightedButtonIndex;
    UIView *_summaryViewContainer;
    struct UIEdgeInsets _summaryViewsInset;
    struct UIEdgeInsets _imageMargins;
    struct UIEdgeInsets _metadataMargins;
    struct UIEdgeInsets _summaryMargins;
    struct UIEdgeInsets _footerMargins;
}

@property(retain, nonatomic) UIView *summaryViewContainer; // @synthesize summaryViewContainer=_summaryViewContainer;
@property(nonatomic) unsigned long long lastHighlightedButtonIndex; // @synthesize lastHighlightedButtonIndex=_lastHighlightedButtonIndex;
@property(nonatomic) double toolbarInterItemSpacing; // @synthesize toolbarInterItemSpacing=_toolbarInterItemSpacing;
@property(nonatomic) double toolbarItemHeight; // @synthesize toolbarItemHeight=_toolbarItemHeight;
@property(retain, nonatomic) NSMutableArray *toolbarButtons; // @synthesize toolbarButtons=_toolbarButtons;
@property(retain, nonatomic) TVFocusRedirectView *toolbarContainingView; // @synthesize toolbarContainingView=_toolbarContainingView;
@property(retain, nonatomic) UIView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(retain, nonatomic) TVShadowView *bottomShadowView; // @synthesize bottomShadowView=_bottomShadowView;
@property(retain, nonatomic) TVShadowView *topShadowView; // @synthesize topShadowView=_topShadowView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) struct UIEdgeInsets footerMargins; // @synthesize footerMargins=_footerMargins;
@property(nonatomic) struct UIEdgeInsets summaryMargins; // @synthesize summaryMargins=_summaryMargins;
@property(nonatomic) struct UIEdgeInsets metadataMargins; // @synthesize metadataMargins=_metadataMargins;
@property(nonatomic) struct UIEdgeInsets imageMargins; // @synthesize imageMargins=_imageMargins;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(copy, nonatomic) CDUnknownBlockType playHandler; // @synthesize playHandler=_playHandler;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property(nonatomic) struct UIEdgeInsets summaryViewsInset; // @synthesize summaryViewsInset=_summaryViewsInset;
@property(retain, nonatomic) NSArray *summaryViews; // @synthesize summaryViews=_summaryViews;
@property(retain, nonatomic) UIView *artworkView; // @synthesize artworkView=_artworkView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
- (void).cxx_destruct;
- (id)_highlightedButtonView;
- (id)_highlightedButtonItem;
- (unsigned long long)_highlightedToolbarButtonIndex;
- (id)preferredFocusEnvironments;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)handleRotateSummaryGesture:(id)arg1;
- (void)handlePlayButton:(id)arg1;
- (void)handleSelectButton:(id)arg1;
- (void)removeButtonAtIndex:(unsigned long long)arg1;
- (void)insertButton:(id)arg1 withSummaryViews:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)addButton:(id)arg1 withSummaryViews:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
