//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOResourceManifestTileGroupObserver.h"

@class GEOResourceManifestConfiguration, NSString;

__attribute__((visibility("hidden")))
@interface VKStylesheetVendorResourceManifestTileGroupObserverProxy : NSObject <GEOResourceManifestTileGroupObserver>
{
    struct weak_ptr<md::StylesheetVendor> _vendor;
    GEOResourceManifestConfiguration *_manifestConfiguration;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)dealloc;
- (id)initWithStylesheetVendor:(shared_ptr_dd2d1f5e)arg1 manifestConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
