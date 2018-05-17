//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NPKScrollOverFixedContentFadeAndScaleAnimationCoordinatorDelegate.h"

@class NPKPaymentPassView, NPKPaymentStatusView, NSString, PKPaymentPass;

@interface NPKPaymentCardWithStatusView : UIView <NPKScrollOverFixedContentFadeAndScaleAnimationCoordinatorDelegate>
{
    PKPaymentPass *_pass;
    NPKPaymentPassView *_passView;
    NPKPaymentStatusView *_statusView;
}

@property(retain, nonatomic) NPKPaymentStatusView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) NPKPaymentPassView *passView; // @synthesize passView=_passView;
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (void).cxx_destruct;
- (void)fadeAndScaleAndimationCoordinator:(id)arg1 didUpdateSideButtonAlignedAlpha:(float)arg2 otherContentAlpha:(float)arg3 scale:(float)arg4;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
