//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSImageView, NSVisualEffectView;

@interface SiriUIAcousticIDSpinner : NSView
{
    NSImageView *_musicNoteView;
    NSImageView *_spinnerView;
    NSVisualEffectView *_vibrancyView;
    id <SiriUIAcousticIDSpinnerDelegate> _delegate;
}

@property(nonatomic) __weak id <SiriUIAcousticIDSpinnerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layout;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)animateOut;
- (void)animateIn;
- (BOOL)isShowing;
- (id)_imageForSpinner;
- (id)_spinningAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end
