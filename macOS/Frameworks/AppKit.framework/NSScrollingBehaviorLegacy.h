//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSScrollingBehavior.h>

@class NSScrollView, NSTimer, _NSPeriodicInvoker, _NSScrollingMomentumCalculator, _NSScrollingPredominantAxisFilter, _NSScrollingRubberbandFilter;

__attribute__((visibility("hidden")))
@interface NSScrollingBehaviorLegacy : NSScrollingBehavior
{
    struct __SblFlags {
        unsigned int inScrollGesture:1;
        unsigned int momentumScrollInProgress:1;
        unsigned int ignoreMomentumScrolls:1;
        unsigned int momentumScrollPreventsForwarding:1;
        unsigned int processingScrollMayBegin:1;
        unsigned int acceleratedScrollPreventsForwarding:1;
        unsigned int scrollIsDueToSelf:1;
        unsigned int RESERVED:25;
    } _flags;
    struct CGSize _overflowScrollDelta;
    struct CGSize _stretchScrollForce;
    struct CGSize _momentumVelocity;
    double _lastMomentumScrollTimeStamp;
    id _endGestureMonitor;
    id _mouseDownMonitor;
    NSScrollView *_scrollViewRefForCarbonApps;
    _NSPeriodicInvoker *_snapBackAnimator;
    _NSScrollingPredominantAxisFilter *_predominantAxisFilter;
    _NSScrollingRubberbandFilter *_rubberbandFilter;
    _NSScrollingMomentumCalculator *_momentumCalculator;
    struct CGPoint _lastPanVelocity;
    NSTimer *_panAnimationTimer;
}

@property(retain) NSScrollView *scrollViewRefForCarbonApps; // @synthesize scrollViewRefForCarbonApps=_scrollViewRefForCarbonApps;
@property id endGestureMonitor; // @synthesize endGestureMonitor=_endGestureMonitor;
- (void)_momentumAnimationTimerFire:(id)arg1;
- (BOOL)_cancelAnyOutstandingPanAnimation;
- (void)scrollView:(id)arg1 panGestureRecognizerFailed:(id)arg2;
- (BOOL)scrollView:(id)arg1 panGestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
- (void)scrollView:(id)arg1 panGestureRecognizerEndedOrFailed:(id)arg2;
- (void)scrollView:(id)arg1 panWithGestureRecognizer:(id)arg2;
- (void)_latchAcceleratedScrollEventsToScrollView:(id)arg1;
- (void)_latchMomentumScrollEventsToScrollView:(id)arg1;
- (void)automateLiveScrollOfScrollView:(id)arg1;
- (void)scrollView:(id)arg1 boundsChangedForClipView:(id)arg2;
- (void)_snapRubberBandWhenMouseReleasedFromTrackingLoopOfScrollView:(id)arg1;
- (void)snapRubberBandOfScrollView:(id)arg1;
- (void)_scrollView:(id)arg1 snabRubberBandWithVelocity:(struct CGSize)arg2;
- (void)_endSnapBackAnimationIfNeededForScrollView:(id)arg1;
- (void)scrollView:(id)arg1 scrollWheelWithEvent:(id)arg2;
- (void)_scrollView:(id)arg1 discreetScrollWithEvent:(id)arg2;
- (void)_scrollView:(id)arg1 smoothScrollWithEvent:(id)arg2;
- (void)scrollView:(id)arg1 endScrollGestureDueToReason:(id)arg2;
- (id)scrollView:(id)arg1 responderToForwardScrollEvents:(id)arg2;
- (BOOL)isInScrollGesture;
- (void)dealloc;

@end
