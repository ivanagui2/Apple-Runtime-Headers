//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PSHeaderFooterView.h"

@class ACUILinkButton;

@interface ACUILinkButtonFooterView : UIView <PSHeaderFooterView>
{
    ACUILinkButton *_linkButton;
    long long _desiredTextAlignment;
}

@property(nonatomic) long long alignment; // @synthesize alignment=_desiredTextAlignment;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)arg1;
- (id)initWithButton:(id)arg1;
- (id)initWithSpecifier:(id)arg1;

@end
