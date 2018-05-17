//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSString, NUArticleExcerptReadMoreButton, NUArticleExcerptTraits, NUMultiDelegate, UIImageView, UILabel, UIScrollView, WKWebView;

@interface NUArticleExcerptView : UIView <UIScrollViewDelegate>
{
    NUArticleExcerptTraits *_traits;
    UIImageView *_headlineImageView;
    UILabel *_headlineTitleLabel;
    UILabel *_headlineDateLabel;
    WKWebView *_excerptWebView;
    NUArticleExcerptReadMoreButton *_readMoreButton;
    id <UIScrollViewDelegate> _delegate;
    UIScrollView *_imageScrollView;
    UIScrollView *_contentScrollView;
    UIView *_hairlineSeparatorView;
    UIView *_contentView;
    NUMultiDelegate *_multiDelegate;
}

+ (id)webViewConfiguration;
@property(readonly, nonatomic) NUMultiDelegate *multiDelegate; // @synthesize multiDelegate=_multiDelegate;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UIView *hairlineSeparatorView; // @synthesize hairlineSeparatorView=_hairlineSeparatorView;
@property(readonly, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(readonly, nonatomic) UIScrollView *imageScrollView; // @synthesize imageScrollView=_imageScrollView;
@property(nonatomic) __weak id <UIScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NUArticleExcerptReadMoreButton *readMoreButton; // @synthesize readMoreButton=_readMoreButton;
@property(readonly, nonatomic) WKWebView *excerptWebView; // @synthesize excerptWebView=_excerptWebView;
@property(readonly, nonatomic) UILabel *headlineDateLabel; // @synthesize headlineDateLabel=_headlineDateLabel;
@property(readonly, nonatomic) UILabel *headlineTitleLabel; // @synthesize headlineTitleLabel=_headlineTitleLabel;
@property(readonly, nonatomic) UIImageView *headlineImageView; // @synthesize headlineImageView=_headlineImageView;
@property(copy, nonatomic) NUArticleExcerptTraits *traits; // @synthesize traits=_traits;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithTraits:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
