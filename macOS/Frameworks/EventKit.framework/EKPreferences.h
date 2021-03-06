//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CalPreferences, NSArray;

@interface EKPreferences : NSObject
{
    CalPreferences *_preferences;
}

+ (id)shared;
- (void).cxx_destruct;
@property(nonatomic) BOOL alertInviteeDeclines;
@property(nonatomic) BOOL showDeclinedEvents;
@property(retain, nonatomic) NSArray *selectedCalendarIdentifiers;
@property(retain, nonatomic) NSArray *deselectedCalendarSyncHashes;
@property(retain, nonatomic) NSArray *deselectedCalendarIdentifiers;
@property(readonly) BOOL bypassSplashScreen;
@property(nonatomic) unsigned long long lastConfirmedSplashScreenVersion;
@property(nonatomic) BOOL remindMeAboutThisInCalendarWidgetEnabled;
@property(nonatomic) BOOL alwaysSetArrivedAndSettledForReminders;
@property(nonatomic) BOOL useShortReminderRefireInterval;
@property(nonatomic) BOOL useShortReminderSnoozeInterval;
@property(nonatomic) BOOL refiringReminderAlarmsEnabled;
@property(nonatomic) double travelEngineThrottlePeriod;
- (id)init;

@end

