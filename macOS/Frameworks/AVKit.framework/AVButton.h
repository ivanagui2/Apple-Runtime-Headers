//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@interface AVButton : NSButton
{
    BOOL _initialFirstResponder;
}

@property(getter=isInitialFirstResponder) BOOL initialFirstResponder; // @synthesize initialFirstResponder=_initialFirstResponder;
- (void)_makeSelfFirstResponderIfPossible;
- (void)viewDidMoveToWindow;
- (void)setEnabled:(BOOL)arg1;

@end
