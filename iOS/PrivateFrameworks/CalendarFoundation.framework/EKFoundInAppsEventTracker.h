//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EKFoundInAppsEventTracker : NSObject
{
}

+ (id)pseudoEventInitialTimeToLeaveFiredTracker;
+ (id)pseudoEventExpiredTracker;
+ (id)pseudoEventDetailsOpenedTracker;
+ (id)pseudoEventDateChangedTracker;
+ (void)trackPseudoEventInitialTimeToLeaveFired;
+ (void)trackPseudoEventsExpired:(int)arg1;
+ (void)trackPseudoEventDetailsOpened;
+ (void)trackPseudoEventDateChanged;

@end
