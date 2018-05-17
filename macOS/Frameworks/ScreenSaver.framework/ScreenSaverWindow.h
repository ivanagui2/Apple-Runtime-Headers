//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@class NSMutableArray;

@interface ScreenSaverWindow : NSWindow
{
    NSMutableArray *_trectTags;
}

- (void)_cancelKey:(id)arg1;
- (void)removeAllTrackingRects;
- (void)_discardTrackingRect:(int)arg1;
- (int)_setTrackingRect:(struct CGRect)arg1 inside:(BOOL)arg2 owner:(id)arg3 userData:(void *)arg4 useTrackingNum:(int)arg5;
- (void)stopAnimating;
- (void)startAnimating;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end
