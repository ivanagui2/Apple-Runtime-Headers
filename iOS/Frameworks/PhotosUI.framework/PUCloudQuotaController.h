//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICQBannerViewDelegate.h"

@class ICQOffer, NSObject<OS_dispatch_queue>, NSString, UIView;

__attribute__((visibility("hidden")))
@interface PUCloudQuotaController : NSObject <ICQBannerViewDelegate>
{
    ICQOffer *_currentOffer;
    NSObject<OS_dispatch_queue> *_queue;
    UIView *_informationBanner;
    id <PUCloudQuotaControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <PUCloudQuotaControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView *informationBanner; // @synthesize informationBanner=_informationBanner;
- (void).cxx_destruct;
- (id)presentingViewControllerForBannerView:(id)arg1;
- (void)_currentOfferChangedNotification:(id)arg1;
- (void)_queue_getCurrentOffer;
- (void)_updateCurrentOffer:(id)arg1;
- (void)_queue_initialSetup;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
