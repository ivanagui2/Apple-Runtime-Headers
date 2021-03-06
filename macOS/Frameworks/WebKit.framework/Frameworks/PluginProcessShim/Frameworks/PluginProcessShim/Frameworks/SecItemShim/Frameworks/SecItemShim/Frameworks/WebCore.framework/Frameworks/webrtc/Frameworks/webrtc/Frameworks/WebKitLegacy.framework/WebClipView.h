//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSClipView.h>

__attribute__((visibility("hidden")))
@interface WebClipView : NSClipView
{
    BOOL _haveAdditionalClip;
    BOOL _isScrolling;
    BOOL _currentScrollIsBlit;
    struct CGRect _additionalClip;
}

- (void)scrollWheel:(id)arg1;
- (struct CGRect)_focusRingVisibleRect;
- (struct CGRect)additionalClip;
- (BOOL)hasAdditionalClip;
- (void)setAdditionalClip:(struct CGRect)arg1;
- (void)resetAdditionalClip;
- (BOOL)currentScrollIsBlit;
- (BOOL)_canCopyOnScrollForDeltaX:(double)arg1 deltaY:(double)arg2;
- (void)_immediateScrollToPoint:(struct CGPoint)arg1;
- (struct CGRect)visibleRect;
- (id)initWithFrame:(struct CGRect)arg1;

@end

