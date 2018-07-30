//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PUICQuickboardKeypadButton, UITouch;

@interface PUICQuickboardNumberPadView : UIView
{
    UITouch *_trackedTouch;
    PUICQuickboardKeypadButton *_highlightedButton;
    UIView *_keypad;
    PUICQuickboardKeypadButton *_okButton;
    PUICQuickboardKeypadButton *_cancelButton;
    _Bool _dialer;
    id <PUICQuickboardNumberPadViewDelegate> _delegate;
    PUICQuickboardKeypadButton *_deleteButton;
    UIView *_contentView;
}

+ (int)_numberPadCharacterForTag:(unsigned int)arg1;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) PUICQuickboardKeypadButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) PUICQuickboardKeypadButton *okButton; // @synthesize okButton=_okButton;
@property(nonatomic) __weak id <PUICQuickboardNumberPadViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isDialer) _Bool dialer; // @synthesize dialer=_dialer;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_updatePreviewDigit;
- (id)_selectButtonForTouch:(id)arg1;
- (void)_keypadButtonTapped:(id)arg1;
- (void)layoutSubviews;
- (void)_configureAccessibleKeypadButton:(id)arg1;
- (void)_initKeypad;
- (id)initWithFrame:(struct CGRect)arg1 asDialer:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
