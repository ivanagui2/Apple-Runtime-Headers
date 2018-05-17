//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BLTSettingsAllowsNotificationsObserver.h"

@class NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString;

@interface NTSPushAlertsMonitor : NSObject <BLTSettingsAllowsNotificationsObserver>
{
    _Bool _internalPushAlertsEnabled;
    _Bool _initialValueReceived;
    NSObject<OS_dispatch_queue> *_serializer;
    NSObject<OS_dispatch_group> *_initialValueGroup;
}

@property(nonatomic) _Bool initialValueReceived; // @synthesize initialValueReceived=_initialValueReceived;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *initialValueGroup; // @synthesize initialValueGroup=_initialValueGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serializer; // @synthesize serializer=_serializer;
@property(nonatomic) _Bool internalPushAlertsEnabled; // @synthesize internalPushAlertsEnabled=_internalPushAlertsEnabled;
- (void).cxx_destruct;
- (void)bltSettingsServiceAllowsNotificationsUpdated:(id)arg1;
- (_Bool)pushAlertsEnabled;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
