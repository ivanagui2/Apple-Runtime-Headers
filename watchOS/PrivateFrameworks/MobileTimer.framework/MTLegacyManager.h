//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Alarm, NSArray, NSObject<OS_dispatch_queue>, NSString, UNUserNotificationCenter;

@interface MTLegacyManager : NSObject
{
    _Bool _loaded;
    _Bool _purged;
    NSArray *_alarms;
    Alarm *_sleepAlarm;
    NSString *_defaultSound;
    NSObject<OS_dispatch_queue> *_serializer;
    UNUserNotificationCenter *_notificationCenter;
    NSArray *_scheduledNotifications;
    double _defaultDuration;
}

+ (id)_numberFromString:(id)arg1;
+ (id)soundFromOldAlarm:(id)arg1;
+ (unsigned int)repeatScheduleFromOldAlarm:(id)arg1;
+ (id)alarmFromOldAlarm:(id)arg1;
+ (id)_bundleIDForUNSchedule;
+ (id)sharedManager;
@property(nonatomic) _Bool purged; // @synthesize purged=_purged;
@property(nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) NSArray *scheduledNotifications; // @synthesize scheduledNotifications=_scheduledNotifications;
@property(retain, nonatomic) UNUserNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serializer; // @synthesize serializer=_serializer;
@property(copy, nonatomic) NSString *defaultSound; // @synthesize defaultSound=_defaultSound;
@property(nonatomic) double defaultDuration; // @synthesize defaultDuration=_defaultDuration;
@property(retain, nonatomic) Alarm *sleepAlarm; // @synthesize sleepAlarm=_sleepAlarm;
@property(retain, nonatomic) NSArray *alarms; // @synthesize alarms=_alarms;
- (void).cxx_destruct;
- (void)_cancelNotifications;
- (void)cancelNotifications;
- (void)_purgeAlarmsAndTimers;
- (void)purgeLegacyData;
- (void)_loadTimerDefaults;
- (void)_reconcileAlarmsAndNotifications;
- (void)_loadAlarms;
- (id)_copyLegacySleepAlarmFromPreferences;
- (id)_copyLegacyAlarmsFromPreferences;
- (void)_loadScheduledNotifications;
- (void)_loadUserPreferences;
- (void)loadLegacyData;
- (id)init;

@end
