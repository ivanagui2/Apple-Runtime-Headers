//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, _TVButton, _TVImageView, _TVProgressView;

__attribute__((visibility("hidden")))
@interface VUILibraryEpisodeFrameView : UIView
{
    id <VUILibraryEpisodeFrameViewDelegate> _delegate;
    _TVImageView *_imageView;
    _TVProgressView *_progressView;
    _TVButton *_playButton;
    long long _layout;
    UIImageView *_fullyPlayedImageView;
}

+ (id)_episodePlaceholderImage;
+ (void)configureEpisodeFrameView:(id)arg1 withMedia:(id)arg2 layout:(long long)arg3 imageSize:(struct CGSize)arg4;
@property(retain, nonatomic) UIImageView *fullyPlayedImageView; // @synthesize fullyPlayedImageView=_fullyPlayedImageView;
@property(nonatomic) long long layout; // @synthesize layout=_layout;
@property(retain, nonatomic) _TVButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) _TVProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) _TVImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <VUILibraryEpisodeFrameViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_playButtonPressed;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
