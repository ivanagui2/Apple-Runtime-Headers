//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@interface LUIPanel : NSWindow
{
    id _target;
    SEL _action;
}

- (id)accessibilityTitle;
- (void)sendEvent:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (BOOL)canBecomeKeyWindow;
- (void)setAction:(SEL)arg1;
- (SEL)action;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)setIsSuperSticky;

@end
