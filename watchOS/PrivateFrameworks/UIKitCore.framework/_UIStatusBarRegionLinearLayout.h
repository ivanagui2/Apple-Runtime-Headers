//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIStatusBarRegionLayout-Protocol.h>

@class NSArray, NSString, UIView, _UIStatusBarRegion;

@interface _UIStatusBarRegionLinearLayout : NSObject <_UIStatusBarRegionLayout>
{
    _UIStatusBarRegion *_region;
    NSArray *_displayItems;
    int _verticalAlignment;
    NSArray *_horizontalConstraints;
    NSArray *_verticalConstraints;
    NSArray *_layoutGuides;
}

@property(copy, nonatomic) NSArray *layoutGuides; // @synthesize layoutGuides=_layoutGuides;
@property(copy, nonatomic) NSArray *verticalConstraints; // @synthesize verticalConstraints=_verticalConstraints;
@property(copy, nonatomic) NSArray *horizontalConstraints; // @synthesize horizontalConstraints=_horizontalConstraints;
@property(nonatomic) int verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(copy, nonatomic) NSArray *displayItems; // @synthesize displayItems=_displayItems;
@property(nonatomic) __weak _UIStatusBarRegion *region; // @synthesize region=_region;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool fitsAllItems;
- (id)_horizontalConstraintsForLayoutItems:(id)arg1 layoutGuides:(id)arg2;
- (id)_verticalConstraintsForDisplayItem:(id)arg1;
- (void)_updateConstraints;
- (void)invalidate;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) UIView *containerView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

