//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <ScreenshotServices/SSRemoteViewControllerServiceToHostInterface-Protocol.h>

@protocol SSDittoHostViewControllerDelegate;

@interface SSDittoHostViewController : _UIRemoteViewController <SSRemoteViewControllerServiceToHostInterface>
{
    id <SSDittoHostViewControllerDelegate> _delegate;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@property(nonatomic) __weak id <SSDittoHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismiss;
- (void)dismissScreenshotExperience;
- (void)screenshotExperienceHasDismissed;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)_serviceProxy;
- (_Bool)becomeFirstResponder;

@end

