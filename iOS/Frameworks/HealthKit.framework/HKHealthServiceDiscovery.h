//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HKHealthServiceDiscovery : NSObject
{
    long long _serviceType;
    unsigned long long _discoveryIdentifier;
    CDUnknownBlockType _discoveryHandler;
}

@property(copy, nonatomic) CDUnknownBlockType discoveryHandler; // @synthesize discoveryHandler=_discoveryHandler;
@property(nonatomic) unsigned long long discoveryIdentifier; // @synthesize discoveryIdentifier=_discoveryIdentifier;
@property(readonly, nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
- (void).cxx_destruct;
- (id)initForAllTypes;
- (id)initWithType:(long long)arg1;

@end
