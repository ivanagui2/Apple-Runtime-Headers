//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "UIPrintInteractionControllerDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIPrintActivityWrapperNavigationController : UINavigationController <UIPrintInteractionControllerDelegate>
{
    CDUnknownBlockType _completionHandler;
    _Bool _presentedPrintInteractionController;
}

@property(nonatomic) _Bool presentedPrintInteractionController; // @synthesize presentedPrintInteractionController=_presentedPrintInteractionController;
- (void).cxx_destruct;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
