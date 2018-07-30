//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSNumber, NSObject<OS_dispatch_queue>, NSString;

@interface AMSMetricsEvent : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_underlyingDictionary;
    NSNumber *_databasePID;
}

+ (_Bool)_isValidJSONProperty:(id)arg1;
+ (id)_topicFromAuthenticationContext:(id)arg1;
+ (id)_buyParamsStringFromAuthenticationContext:(id)arg1;
+ (id)_buyParamsFromString:(id)arg1;
+ (id)metricsAuthenticationAttemptDictionaryForAuthKitError:(id)arg1;
+ (id)createEventFromAuthenticationContext:(id)arg1 error:(id)arg2;
@property(retain, nonatomic) NSNumber *databasePID; // @synthesize databasePID=_databasePID;
@property(readonly, nonatomic) NSMutableDictionary *underlyingDictionary; // @synthesize underlyingDictionary=_underlyingDictionary;
- (void).cxx_destruct;
- (void)setProperty:(id)arg1 forBodyKey:(id)arg2;
- (void)removePropertiesForKeys:(id)arg1;
- (id)propertyForBodyKey:(id)arg1;
- (void)addPropertiesWithDictionary:(id)arg1;
@property(retain, nonatomic) NSString *topic;
@property(retain, nonatomic) NSNumber *timezoneOffset;
@property(retain, nonatomic) NSString *osVersion;
@property(retain, nonatomic) NSNumber *eventVersion;
@property(retain, nonatomic) NSString *eventType;
@property(retain, nonatomic) NSNumber *eventTime;
@property(retain, nonatomic) NSString *canaryIdentifier;
@property(retain, nonatomic) NSNumber *baseVersion;
@property(retain, nonatomic) NSString *appVersion;
- (id)reportingURLFromBaseURL:(id)arg1;
- (id)initWithTopic:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
