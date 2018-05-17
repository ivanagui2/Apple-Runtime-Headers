//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDSCurrentServerTimePair;

@interface IDSCurrentServerTime : NSObject
{
    IDSCurrentServerTimePair *_timePair;
    id <IDSCurrentServerTimeProvider> _serverTimeProvider;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <IDSCurrentServerTimeProvider> serverTimeProvider; // @synthesize serverTimeProvider=_serverTimeProvider;
@property(retain) IDSCurrentServerTimePair *timePair; // @synthesize timePair=_timePair;
- (void).cxx_destruct;
- (void)_refreshServerTime;
- (void)_storeInitialServerTime;
- (double)_refreshTimeInterval;
- (id)currentServerTimeDate;
- (double)currentServerTimeInterval;
- (id)initWithServerTimeProvider:(id)arg1;

@end
