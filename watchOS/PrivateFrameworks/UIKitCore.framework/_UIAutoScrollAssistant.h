//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, UIScrollView;

__attribute__((visibility("hidden")))
@interface _UIAutoScrollAssistant : NSObject
{
    _Bool _started;
    UIScrollView *_scrollView;
    unsigned int _allowedDirections;
    CADisplayLink *_displayLink;
    id <_UIAutoScrollBehavior> _behavior;
    double _repeatInterval;
    struct CGPoint _point;
    double _lastTimestamp;
    struct UIEdgeInsets _touchInsets;
}

@property(retain, nonatomic) id <_UIAutoScrollBehavior> behavior; // @synthesize behavior=_behavior;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(nonatomic) double lastTimestamp; // @synthesize lastTimestamp=_lastTimestamp;
@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) unsigned int allowedDirections; // @synthesize allowedDirections=_allowedDirections;
@property(nonatomic) struct UIEdgeInsets touchInsets; // @synthesize touchInsets=_touchInsets;
@property(nonatomic) double repeatInterval; // @synthesize repeatInterval=_repeatInterval;
@property(readonly, nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)_handleAutoScrollerWithContentOffset:(struct CGPoint)arg1 direction:(unsigned int)arg2;
- (void)displayLinkFired:(id)arg1;
- (double)_interval;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (void)stop;
- (void)autoScrollFromPoint:(struct CGPoint)arg1;
- (id)initWithScrollView:(id)arg1;

@end
