//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel, UIScrollView;

@interface NPKPeerPaymentCompanionForwardView : UIView
{
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIScrollView *_scrollView;
}

@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (_Bool)canBecomeFirstResponder;
- (_Bool)becomeFirstResponder;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;

@end
