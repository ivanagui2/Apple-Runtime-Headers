//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVFunctionBarMediaSelectionOption, AVFunctionBarMediaSelectionViewController;

@protocol AVFunctionBarMediaSelectionViewControllerDelegate <NSObject>

@optional
- (void)functionBarMediaSelectionViewController:(AVFunctionBarMediaSelectionViewController *)arg1 didSelectLegibleFunctionBarMediaSelectionOption:(AVFunctionBarMediaSelectionOption *)arg2;
- (void)functionBarMediaSelectionViewController:(AVFunctionBarMediaSelectionViewController *)arg1 didSelectAudioFunctionBarMediaSelectionOption:(AVFunctionBarMediaSelectionOption *)arg2;
@end
