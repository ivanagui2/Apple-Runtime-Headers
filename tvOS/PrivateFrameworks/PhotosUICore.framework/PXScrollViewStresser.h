//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, UIScrollView;

@interface PXScrollViewStresser : NSObject
{
    unsigned int _scrollDirection;
    CADisplayLink *_displayLink;
    UIScrollView *_scrollView;
    long long _scrollCount;
}

+ (id)sharedInstance;
@property(nonatomic) long long scrollCount; // @synthesize scrollCount=_scrollCount;
@property(nonatomic) unsigned int scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
- (void).cxx_destruct;
- (void)stopScrolling;
@property(readonly, nonatomic, getter=isScrolling) _Bool scrolling;
- (void)_handleDisplayLink:(id)arg1;
- (void)startScrollingScrollView:(id)arg1 axis:(long long)arg2;

@end
