//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIFocusGuide.h>

__attribute__((visibility("hidden")))
@interface UIKBFocusGuide : UIFocusGuide
{
    unsigned long long focusHeading;
    id <UIKBFocusGuideDelegate> _keyboardDelegate;
}

@property(nonatomic) id <UIKBFocusGuideDelegate> keyboardDelegate; // @synthesize keyboardDelegate=_keyboardDelegate;
@property(nonatomic) unsigned long long focusHeading; // @synthesize focusHeading;
- (void)_didUpdateFocusToPreferredFocusedView;

@end
