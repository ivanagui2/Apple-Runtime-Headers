//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class IKViewElement, UIView;

__attribute__((visibility("hidden")))
@interface _TVDeckViewController : UIViewController
{
    IKViewElement *_deckElement;
    UIView *_pendingView;
    UIView *_currentView;
}

@property(retain, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
@property(retain, nonatomic) UIView *pendingView; // @synthesize pendingView=_pendingView;
@property(retain, nonatomic) IKViewElement *deckElement; // @synthesize deckElement=_deckElement;
- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_resumePreview;
- (void)_pausePreview;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)updateWithDeckElement:(id)arg1;
- (void)_dissolveToPendingView;
- (void)_scrollingGridViewReady:(id)arg1;
- (void)_deckImageViewReady:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end
