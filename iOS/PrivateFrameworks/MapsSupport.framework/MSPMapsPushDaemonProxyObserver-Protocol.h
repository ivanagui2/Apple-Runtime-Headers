//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSPRemoteModelAccessDelegate.h"

@class NSData, NSString;

@protocol MSPMapsPushDaemonProxyObserver <MSPRemoteModelAccessDelegate>
- (void)pushDaemonProxyReceivedNotificationData:(NSData *)arg1 forType:(NSString *)arg2 recordIdentifier:(NSString *)arg3;
- (void)historyDidChange;
- (void)favoritesDidChange;
@end
