//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface TSKBiggerButton : UIButton
{
    _Bool mHitTestWithOutsets;
    struct UIEdgeInsets mOutsets;
}

+ (id)tsdPlatformButtonWithFrame:(struct CGRect)arg1;
- (void)setHitBufferTop:(double)arg1 left:(double)arg2 bottom:(double)arg3 right:(double)arg4;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
