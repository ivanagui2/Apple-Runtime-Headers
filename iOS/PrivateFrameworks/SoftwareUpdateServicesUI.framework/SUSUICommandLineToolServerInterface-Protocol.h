//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SUSUICommandLineToolServerInterface <NSObject>
- (void)simulateComingFromOTAUpdate;
- (void)reboot:(_Bool)arg1;
- (void)toggleSettingsBadge:(_Bool)arg1;
- (void)showEmergencyCallUIWithOptions:(unsigned long long)arg1 result:(void (^)(_Bool, NSError *))arg2;
- (void)showAuthenticationUIWithOptions:(unsigned long long)arg1 result:(void (^)(_Bool, NSError *))arg2;
- (void)showMiniAlert:(unsigned long long)arg1 usingFakeData:(_Bool)arg2;
@end
