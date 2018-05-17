//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PepperUICore/_PUICNavigationBar.h>

#import "PUICStatusBarAppContextViewDataSource.h"
#import "PUICStatusBarAppContextViewDelegate.h"

@class NSString, PUICAppContextDataSourceObservedImpl, PUICNavigationController, PUICStatusBar, UIViewController;

@interface _PUICNavigationBarForAlertContext : _PUICNavigationBar <PUICStatusBarAppContextViewDataSource, PUICStatusBarAppContextViewDelegate>
{
    PUICAppContextDataSourceObservedImpl *_observerImpl;
    PUICStatusBar *_alertcontextStatusBar;
    UIViewController *_currentViewController;
    PUICNavigationController *_navController;
}

@property(nonatomic) __weak PUICNavigationController *navController; // @synthesize navController=_navController;
@property(nonatomic) __weak UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) PUICStatusBar *alertcontextStatusBar; // @synthesize alertcontextStatusBar=_alertcontextStatusBar;
- (void).cxx_destruct;
- (_Bool)navPressedForStatusBarAppContext:(id)arg1;
- (id)statusBarAppContextRightSideAdditionalImagesInteractive;
- (id)statusBarAppContextRightSideAdditionalImages;
- (id)statusBarAppContextNavigationImage;
- (_Bool)statusBarAppContextIsTitleInteractive;
- (id)dataAsApplicationStatusBarItem;
- (_Bool)isObservingStatusBarAppContextDataSource:(id)arg1;
- (void)removeStatusBarAppContextDataSourceObserver:(id)arg1;
- (void)addStatusBarAppContextDataSourceObserver:(id)arg1;
- (_Bool)statusBarAppContextNavUIBackButtonDisabled;
- (_Bool)statusBarAppContextShowNavUI;
- (id)statusBarAppContextBackgroundColor;
- (float)statusBarAppContextTitleBaseLine;
- (id)statusBarAppContextTitleFont;
- (id)statusBarAppContextTitleColor;
- (id)statusBarAppContextTitleText;
- (id)_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 navController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
