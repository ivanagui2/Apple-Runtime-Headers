//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/_UIFocusTest.h>

@class NSTimer, UIScrollView;

@interface _UIFocusFastScrollingTest : _UIFocusTest
{
    unsigned long long _currentScroll;
    struct CGPoint _originalContentOffset;
    id <UIFocusItem> _originalFocusedItem;
    NSTimer *_delayTimer;
    UIScrollView *_scrollView;
    double _peakScrollVelocity;
    unsigned long long _numberOfScrollsToPerform;
    double _delayBetweenScrolls;
}

@property(nonatomic) double delayBetweenScrolls; // @synthesize delayBetweenScrolls=_delayBetweenScrolls;
@property(nonatomic) unsigned long long numberOfScrollsToPerform; // @synthesize numberOfScrollsToPerform=_numberOfScrollsToPerform;
@property(nonatomic) double peakScrollVelocity; // @synthesize peakScrollVelocity=_peakScrollVelocity;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)_performFocusFastScrolling;
- (void)main;
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)reset;
- (id)initWithIdentifier:(id)arg1;

@end
