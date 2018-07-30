//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariServices/_SFPasswordViewController.h>

@class SFPasswordRemoteViewController, SFQueueingServiceViewControllerProxy<SFPasswordPickerServiceViewControllerProtocol>;

@interface _SFAppAutoFillPasswordViewController : _SFPasswordViewController
{
    SFPasswordRemoteViewController *_remoteViewController;
    SFQueueingServiceViewControllerProxy<SFPasswordPickerServiceViewControllerProtocol> *_serviceProxy;
}

- (void).cxx_destruct;
- (void)remoteViewController:(id)arg1 selectedCredential:(id)arg2;
- (id)_remoteViewController;
- (void)setAuthenticationGracePeriod:(double)arg1;
- (void)setExternallyVerifiedAndApprovedSharedWebCredentialsDomains:(id)arg1;
- (void)setRemoteUnlocalizedAppName:(id)arg1;
- (void)setRemoteLocalizedAppName:(id)arg1;
- (void)setRemoteAppID:(id)arg1;
- (void)setWebViewURL:(id)arg1;
- (void)authenticateToPresentInPopover:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidLoad;
- (id)_connectToServiceWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setUpServiceProxyIfNeeded;
- (void)_applicationDidEnterBackground:(id)arg1;
- (id)init;

@end
