//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXGalleryItemImageViewFactory-Protocol.h>

@class NSString;
@protocol SXReachabilityProvider, SXResourceDataSourceProvider;

@interface SXGalleryItemImageViewFactory : NSObject <SXGalleryItemImageViewFactory>
{
    id <SXResourceDataSourceProvider> _resourceDataSourceProvider;
    id <SXReachabilityProvider> _reachabilityProvider;
}

@property(readonly, nonatomic) id <SXReachabilityProvider> reachabilityProvider; // @synthesize reachabilityProvider=_reachabilityProvider;
@property(readonly, nonatomic) id <SXResourceDataSourceProvider> resourceDataSourceProvider; // @synthesize resourceDataSourceProvider=_resourceDataSourceProvider;
- (void).cxx_destruct;
- (id)imageViewForGalleryItem:(id)arg1 imageResource:(id)arg2;
- (id)initWithResourceDataSourceProvider:(id)arg1 reachabilityProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

