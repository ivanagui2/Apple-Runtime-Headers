//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NTKUpNextElementAction, UIViewController;

@protocol NTKUpNextElementActionDelegate <NSObject>
- (void)upNextElementAction:(NTKUpNextElementAction *)arg1 didFinishTask:(_Bool)arg2;
- (void)upNextElementAction:(NTKUpNextElementAction *)arg1 wantsViewControllerDisplayed:(UIViewController *)arg2;
- (void)upNextElementAction:(NTKUpNextElementAction *)arg1 wantsToPerformTapActionForComplicationSlot:(NSString *)arg2;
@end
