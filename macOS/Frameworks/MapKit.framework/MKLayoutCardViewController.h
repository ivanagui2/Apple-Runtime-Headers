//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKStackingViewController.h>

@class MKMapItem, NSMutableDictionary, NSString;

@interface MKLayoutCardViewController : MKStackingViewController
{
    NSString *_appId;
    id <MKLayoutCardProvider> _configurationProvider;
    MKMapItem *_mapItem;
    NSMutableDictionary *_cacheVC;
    NSMutableDictionary *_cacheModuleType;
}

@property(retain, nonatomic) NSMutableDictionary *cacheModuleType; // @synthesize cacheModuleType=_cacheModuleType;
@property(retain, nonatomic) NSMutableDictionary *cacheVC; // @synthesize cacheVC=_cacheVC;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void).cxx_destruct;
- (double)_heightForSeparatorBetweenUpperViewController:(id)arg1 andLowerViewController:(id)arg2;
- (struct _MKUIViewController *)_createViewControllerForModule:(id)arg1;
- (struct _MKUIViewController *)_cachedViewControllerForModule:(int)arg1;
- (void)_createModuleLayout:(id)arg1;
- (id)_layoutModuleForMapItem;
- (BOOL)isLayoutDynamic;
- (BOOL)isTransitItem;
- (id)initWithAppId:(id)arg1 configurationProvider:(id)arg2;
- (id)initWithAppId:(id)arg1;

@end
