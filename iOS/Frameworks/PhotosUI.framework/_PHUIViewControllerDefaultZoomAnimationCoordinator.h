//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PXZoomAnimationCoordinator.h"

@class UIViewController;

__attribute__((visibility("hidden")))
@interface _PHUIViewControllerDefaultZoomAnimationCoordinator : PXZoomAnimationCoordinator
{
    UIViewController *_viewController;
}

@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)animateContentForEndPointType:(long long)arg1 withZoomAnimationContext:(id)arg2;
- (void)animateContentForEndPointType:(long long)arg1 inView:(id)arg2 withLayerType:(long long)arg3 zoomAnimationContext:(id)arg4;
- (id)initWithViewController:(id)arg1;
- (id)init;

@end
