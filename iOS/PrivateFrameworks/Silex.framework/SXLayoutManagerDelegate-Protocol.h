//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SXLayoutBlueprint, SXLayoutDataProvider;

@protocol SXLayoutManagerDelegate <NSObject>

@optional
- (void)layoutManager:(id <SXLayoutManager>)arg1 didLayoutBlueprint:(SXLayoutBlueprint *)arg2 layoutDataProvider:(SXLayoutDataProvider *)arg3;
- (void)layoutManager:(id <SXLayoutManager>)arg1 willLayoutForViewportSize:(struct CGSize)arg2 layoutDataProvider:(SXLayoutDataProvider *)arg3;
@end
