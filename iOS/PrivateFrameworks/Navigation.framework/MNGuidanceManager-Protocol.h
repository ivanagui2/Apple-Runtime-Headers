//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOComposedRoute, GEOComposedWaypoint, MNLocation;

@protocol MNGuidanceManager <NSObject>
- (void)stop;
- (void)updateDestination:(GEOComposedWaypoint *)arg1;
- (void)updateForReroute:(GEOComposedRoute *)arg1;
- (void)updateForReturnToRoute;
- (_Bool)repeatLastGuidanceAnnouncement:(MNLocation *)arg1;
- (double)timeUntilNextAnnouncement;
- (double)timeSinceLastAnnouncement;
- (void)updateGuidanceForLocation:(MNLocation *)arg1 navigatorState:(int)arg2;
@end
