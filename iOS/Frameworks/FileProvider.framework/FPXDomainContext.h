//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FPXExtensionContext, FPXSpotlightIndexer, NSFileProviderDomain, NSFileProviderExtension;

__attribute__((visibility("hidden")))
@interface FPXDomainContext : NSObject
{
    FPXExtensionContext *_extensionContext;
    NSFileProviderExtension *_vendorInstance;
    NSFileProviderDomain *_domain;
    FPXSpotlightIndexer *_spotlightIndexer;
}

@property(readonly, nonatomic) FPXSpotlightIndexer *spotlightIndexer; // @synthesize spotlightIndexer=_spotlightIndexer;
@property(readonly, nonatomic) NSFileProviderDomain *domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) NSFileProviderExtension *vendorInstance; // @synthesize vendorInstance=_vendorInstance;
@property(readonly, nonatomic) __weak FPXExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
- (void).cxx_destruct;
- (id)itemIDsFromVendorItemIDs:(id)arg1;
- (id)itemsFromVendorItems:(id)arg1;
- (id)itemIDFromVendorItemID:(id)arg1;
- (id)itemFromVendorItem:(id)arg1;
- (id)internalErrorFromVendorError:(id)arg1;
- (void)prepareForDomainRemovalWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithVendorInstance:(id)arg1 domain:(id)arg2 extensionContext:(id)arg3;

@end
