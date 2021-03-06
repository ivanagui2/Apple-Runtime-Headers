//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class NSDate, NSString, NSUUID;

@interface HMDAWDRemoteSessionMetric : HMDLogEvent <HMDAWDLogEvent>
{
    _Bool _submitted;
    _Bool _authenticated;
    int _role;
    int _closeReason;
    NSDate *_creation;
    NSUUID *_sessionID;
}

+ (int)closeReasonFromError:(id)arg1;
+ (id)uuid;
+ (void)initialize;
@property(readonly, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) int closeReason; // @synthesize closeReason=_closeReason;
@property(getter=isAuthenticated) _Bool authenticated; // @synthesize authenticated=_authenticated;
@property(retain, nonatomic) NSDate *creation; // @synthesize creation=_creation;
@property(readonly, nonatomic) int role; // @synthesize role=_role;
@property(nonatomic) _Bool submitted; // @synthesize submitted=_submitted;
- (void).cxx_destruct;
- (id)metricForAWD;
- (void)open;
- (id)initWithClientMode:(_Bool)arg1 sessionID:(id)arg2;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

