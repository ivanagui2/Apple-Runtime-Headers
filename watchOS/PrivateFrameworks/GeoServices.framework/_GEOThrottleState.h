//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _GEOThrottleState : NSObject
{
    unsigned int _requestCount;
    double _lastResetTime;
}

@property(nonatomic) double lastResetTime; // @synthesize lastResetTime=_lastResetTime;
@property(nonatomic) unsigned int requestCount; // @synthesize requestCount=_requestCount;
- (id)description;

@end

