//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PKPaymentPass, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface PKPaymentSetupAddToWatchOfferView : UIView
{
    PKPaymentPass *_pass;
    int _context;
    UIImageView *_watchImageView;
    UIImageView *_passImageView;
    UILabel *_instructionLabel;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_openAppButton;
    UIActivityIndicatorView *_openAppSpinner;
}

@property(readonly, retain, nonatomic) UIActivityIndicatorView *openAppSpinner; // @synthesize openAppSpinner=_openAppSpinner;
@property(readonly, retain, nonatomic) UIButton *openAppButton; // @synthesize openAppButton=_openAppButton;
@property(readonly, retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, retain, nonatomic) UILabel *instructionLabel; // @synthesize instructionLabel=_instructionLabel;
@property(readonly, retain, nonatomic) UIImageView *passImageView; // @synthesize passImageView=_passImageView;
@property(readonly, retain, nonatomic) UIImageView *watchImageView; // @synthesize watchImageView=_watchImageView;
@property(readonly, nonatomic) int context; // @synthesize context=_context;
@property(readonly, retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (void).cxx_destruct;
- (float)_instructionYCoordinate;
- (float)_passImageYCoordinate;
- (struct CGSize)_passImageSize;
- (float)_instructionFontSize;
- (id)_watchImageName;
- (id)_watchImage;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithPaymentPass:(id)arg1 context:(int)arg2;

@end
