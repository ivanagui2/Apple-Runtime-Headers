//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSImage, NSLayoutConstraint, NSString, NSTextField, PRSActionButtonImageView, PRSImageView, SFPunchout, SPLineView;

@interface PRSTemplateACEHeaderSliceView : NSView
{
    NSString *_subtitleText;
    NSString *_descriptionText;
    BOOL _showVerticalDivider;
    BOOL _needsRoundedImage;
    NSImage *_primaryImage;
    NSImage *_playImage;
    NSImage *_baseImage;
    NSString *_playText;
    SFPunchout *_punchout;
    NSLayoutConstraint *_imageToViewLeadingConstraint;
    NSLayoutConstraint *_imageToViewTopConstraint;
    NSLayoutConstraint *_imageToViewBottomConstraint;
    NSLayoutConstraint *_imageToTitleConstraint;
    NSLayoutConstraint *_titleBottomToSubtitleBottomConstraint;
    NSLayoutConstraint *_subtitleBottomToDescriptionBottomConstraint;
    NSLayoutConstraint *_imageToTextConstraint;
    NSLayoutConstraint *_titleBottomToViewTopConstraint;
    NSLayoutConstraint *_separatorHeightConstraint;
    NSLayoutConstraint *_separatorToPlayImageConstraint;
    NSLayoutConstraint *_playImageToOverlayTextConstraint;
    PRSImageView *_primaryImageView;
    PRSActionButtonImageView *_playImageView;
    PRSActionButtonImageView *_baseImageView;
    SPLineView *_separatorView;
    NSTextField *_titleTextField;
    NSTextField *_subTitleTextField;
    NSTextField *_playTextField;
}

@property NSTextField *playTextField; // @synthesize playTextField=_playTextField;
@property NSTextField *subTitleTextField; // @synthesize subTitleTextField=_subTitleTextField;
@property NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property SPLineView *separatorView; // @synthesize separatorView=_separatorView;
@property PRSActionButtonImageView *baseImageView; // @synthesize baseImageView=_baseImageView;
@property PRSActionButtonImageView *playImageView; // @synthesize playImageView=_playImageView;
@property PRSImageView *primaryImageView; // @synthesize primaryImageView=_primaryImageView;
@property NSLayoutConstraint *playImageToOverlayTextConstraint; // @synthesize playImageToOverlayTextConstraint=_playImageToOverlayTextConstraint;
@property NSLayoutConstraint *separatorToPlayImageConstraint; // @synthesize separatorToPlayImageConstraint=_separatorToPlayImageConstraint;
@property NSLayoutConstraint *separatorHeightConstraint; // @synthesize separatorHeightConstraint=_separatorHeightConstraint;
@property NSLayoutConstraint *titleBottomToViewTopConstraint; // @synthesize titleBottomToViewTopConstraint=_titleBottomToViewTopConstraint;
@property NSLayoutConstraint *imageToTextConstraint; // @synthesize imageToTextConstraint=_imageToTextConstraint;
@property NSLayoutConstraint *subtitleBottomToDescriptionBottomConstraint; // @synthesize subtitleBottomToDescriptionBottomConstraint=_subtitleBottomToDescriptionBottomConstraint;
@property NSLayoutConstraint *titleBottomToSubtitleBottomConstraint; // @synthesize titleBottomToSubtitleBottomConstraint=_titleBottomToSubtitleBottomConstraint;
@property NSLayoutConstraint *imageToTitleConstraint; // @synthesize imageToTitleConstraint=_imageToTitleConstraint;
@property NSLayoutConstraint *imageToViewBottomConstraint; // @synthesize imageToViewBottomConstraint=_imageToViewBottomConstraint;
@property NSLayoutConstraint *imageToViewTopConstraint; // @synthesize imageToViewTopConstraint=_imageToViewTopConstraint;
@property NSLayoutConstraint *imageToViewLeadingConstraint; // @synthesize imageToViewLeadingConstraint=_imageToViewLeadingConstraint;
@property BOOL needsRoundedImage; // @synthesize needsRoundedImage=_needsRoundedImage;
@property BOOL showVerticalDivider; // @synthesize showVerticalDivider=_showVerticalDivider;
@property(retain, nonatomic) SFPunchout *punchout; // @synthesize punchout=_punchout;
@property(retain, nonatomic) NSString *playText; // @synthesize playText=_playText;
@property(retain, nonatomic) NSImage *baseImage; // @synthesize baseImage=_baseImage;
@property(retain, nonatomic) NSImage *playImage; // @synthesize playImage=_playImage;
@property(retain, nonatomic) NSImage *primaryImage; // @synthesize primaryImage=_primaryImage;
- (void).cxx_destruct;
- (void)hideLineView;
- (id)descriptionText;
@property(retain, nonatomic) NSString *subtitleText;
@property(retain, nonatomic) NSString *titleText;
- (id)image;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)allowsVibrancy;

@end
