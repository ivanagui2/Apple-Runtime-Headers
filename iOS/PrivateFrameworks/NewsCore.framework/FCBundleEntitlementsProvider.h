//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCBundleEntitlementsProviderType-Protocol.h>

@class FCPurchaseLookupRecordSource;
@protocol FCCoreConfigurationManager;

@interface FCBundleEntitlementsProvider : NSObject <FCBundleEntitlementsProviderType>
{
    id <FCCoreConfigurationManager> _configurationManager;
    FCPurchaseLookupRecordSource *_purchaseLookupRecordSource;
}

@property(readonly, nonatomic) FCPurchaseLookupRecordSource *purchaseLookupRecordSource; // @synthesize purchaseLookupRecordSource=_purchaseLookupRecordSource;
@property(readonly, nonatomic) id <FCCoreConfigurationManager> configurationManager; // @synthesize configurationManager=_configurationManager;
- (void).cxx_destruct;
- (void)fetchBundleTagIDsForPurchaseID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchOperationForPurchaseLookupWithPurchaseIDs:(id)arg1;
- (void)_bundleEntitlementResultForPurchaseID:(id)arg1 isPurchaser:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_bundlePurchaseIDForTemporaryAccessWithConfiguration:(id)arg1;
- (void)_fetchEntitlementsWithIgnoreCache:(_Bool)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchEntitlementsWithIgnoreCache:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithConfigurationManager:(id)arg1 purchaseLookupRecordSource:(id)arg2;

@end

