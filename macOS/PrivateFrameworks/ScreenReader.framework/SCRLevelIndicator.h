//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRSlider.h>

__attribute__((visibility("hidden")))
@interface SCRLevelIndicator : SCRSlider
{
}

- (BOOL)isInteractive;
- (BOOL)incrementLarge;
- (BOOL)decrementLarge;
- (BOOL)incrementSmall;
- (BOOL)decrementSmall;
- (id)statusDescriptionWithOptionsMask:(long long)arg1;
- (id)valueDescription;
- (BOOL)canHandleValueChange;

@end
