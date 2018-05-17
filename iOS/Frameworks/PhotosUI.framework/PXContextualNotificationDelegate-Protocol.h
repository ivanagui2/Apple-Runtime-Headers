//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PXContextualNotification, UIView;

@protocol PXContextualNotificationDelegate <NSObject>

@optional
- (void)contextualNotificationDidDisappear:(PXContextualNotification *)arg1;
- (void)contextualNotificationWasDiscarded:(PXContextualNotification *)arg1;
- (void)contextualNotificationWasTapped:(PXContextualNotification *)arg1;
- (_Bool)contextualNotification:(PXContextualNotification *)arg1 shouldPassthroughPoint:(struct CGPoint)arg2 inCoordinateSpace:(id <UICoordinateSpace>)arg3;
- (long long)preferredAnimationForContextualNotification:(PXContextualNotification *)arg1;
- (UIView *)preferredContainerViewForContextualNotification:(PXContextualNotification *)arg1;
- (struct CGRect)contextualNotification:(PXContextualNotification *)arg1 containingFrameInCoordinateSpace:(id <UICoordinateSpace>)arg2;
@end
