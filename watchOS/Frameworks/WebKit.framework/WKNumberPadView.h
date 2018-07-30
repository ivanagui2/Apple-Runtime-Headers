//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

__attribute__((visibility("hidden")))
@interface WKNumberPadView : UIView
{
    struct RetainPtr<UITouch> _trackedTouch;
    struct RetainPtr<WKNumberPadButton> _highlightedButton;
    struct RetainPtr<UIView> _keypad;
    struct RetainPtr<UIView> _contentView;
    struct WeakObjCPtr<WKNumberPadViewController> _controller;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)toggleAlternateKeys;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)_numberPadButtonForTouch:(id)arg1;
- (void)layoutSubviews;
- (void)_initKeypad;
- (id)_buttonForPosition:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2;

@end
