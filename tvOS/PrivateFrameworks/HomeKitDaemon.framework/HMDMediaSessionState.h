//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFDumpState.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface HMDMediaSessionState : HMFObject <HMFDumpState>
{
    NSString *_sessionIdentifier;
    long long _playbackState;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

@property(readonly) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (void).cxx_destruct;
- (id)dumpState;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
- (id)initWithSessionIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
