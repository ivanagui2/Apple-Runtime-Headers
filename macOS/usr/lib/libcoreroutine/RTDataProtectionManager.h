//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <coreroutine/RTNotifier.h>

@class RTDarwinNotificationHelper, RTKeybagMonitor;

@interface RTDataProtectionManager : RTNotifier
{
    BOOL _unlockedSinceBoot;
    RTDarwinNotificationHelper *_notificationHelper;
    RTKeybagMonitor *_keybagMonitor;
    long long _encryptedDataAvailability;
}

+ (id)encryptedDataAvailabilityToString:(long long)arg1;
+ (id)dataProtectionLockStateToString:(long long)arg1;
@property(nonatomic) BOOL unlockedSinceBoot; // @synthesize unlockedSinceBoot=_unlockedSinceBoot;
@property(nonatomic) long long encryptedDataAvailability; // @synthesize encryptedDataAvailability=_encryptedDataAvailability;
@property(retain, nonatomic) RTKeybagMonitor *keybagMonitor; // @synthesize keybagMonitor=_keybagMonitor;
@property(retain, nonatomic) RTDarwinNotificationHelper *notificationHelper; // @synthesize notificationHelper=_notificationHelper;
- (void).cxx_destruct;
- (void)handleUnlockedSinceBoot;
- (void)handleKeybagLockStatusChange:(long long)arg1;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)dealloc;
- (id)initWithKeybagMonitor:(id)arg1 notificationHelper:(id)arg2;
- (id)init;

@end
