//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIView;

@interface REBlurredContainerController : UIViewController
{
    UIView *_blurView;
    id <REBlurredContainerControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <REBlurredContainerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
- (void).cxx_destruct;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)viewDidLoad;

@end
