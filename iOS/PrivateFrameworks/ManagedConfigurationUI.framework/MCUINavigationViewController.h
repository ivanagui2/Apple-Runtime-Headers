//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@interface MCUINavigationViewController : UINavigationController
{
    CDUnknownBlockType _showViewControllerCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType showViewControllerCompletionBlock; // @synthesize showViewControllerCompletionBlock=_showViewControllerCompletionBlock;
- (void).cxx_destruct;
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
