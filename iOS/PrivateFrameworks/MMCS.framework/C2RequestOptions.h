//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString, NSURL;

@interface C2RequestOptions : NSObject <NSCopying>
{
    unsigned char _outOfProcess;
    unsigned char _outOfProcessDiscretionary;
    unsigned char __allowsExpensiveAccess;
    unsigned char __allowsPowerNapScheduling;
    unsigned char _tlsPinning;
    unsigned char _metricRequest;
    long long _qualityOfService;
    NSString *_outOfProcessPoolName;
    double __timeoutIntervalForRequest;
    double __timeoutIntervalForResource;
    NSString *__sourceApplicationBundleIdentifier;
    NSString *__sourceApplicationSecondaryIdentifier;
    NSString *__appleIDContextSessionIdentifier;
    NSString *_identifier;
    NSDictionary *_resolvedEndpointsWithHostname;
    NSURL *_c2MetricsEndpoint;
    unsigned long long _c2MetricsReportFrequency;
    unsigned long long _c2MetricsReportFrequencyBase;
}

+ (unsigned char)triesteMetricsEnabled;
+ (double)defaultEmptySessionExpiryInSeconds;
+ (id)stringForQualityOfService:(long long)arg1;
@property(nonatomic) unsigned char metricRequest; // @synthesize metricRequest=_metricRequest;
@property(nonatomic) unsigned long long c2MetricsReportFrequencyBase; // @synthesize c2MetricsReportFrequencyBase=_c2MetricsReportFrequencyBase;
@property(nonatomic) unsigned long long c2MetricsReportFrequency; // @synthesize c2MetricsReportFrequency=_c2MetricsReportFrequency;
@property(copy, nonatomic) NSURL *c2MetricsEndpoint; // @synthesize c2MetricsEndpoint=_c2MetricsEndpoint;
@property(retain, nonatomic) NSDictionary *resolvedEndpointsWithHostname; // @synthesize resolvedEndpointsWithHostname=_resolvedEndpointsWithHostname;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned char tlsPinning; // @synthesize tlsPinning=_tlsPinning;
@property(copy, nonatomic) NSString *_appleIDContextSessionIdentifier; // @synthesize _appleIDContextSessionIdentifier=__appleIDContextSessionIdentifier;
@property(copy, nonatomic) NSString *_sourceApplicationSecondaryIdentifier; // @synthesize _sourceApplicationSecondaryIdentifier=__sourceApplicationSecondaryIdentifier;
@property(copy, nonatomic) NSString *_sourceApplicationBundleIdentifier; // @synthesize _sourceApplicationBundleIdentifier=__sourceApplicationBundleIdentifier;
@property(nonatomic) double _timeoutIntervalForResource; // @synthesize _timeoutIntervalForResource=__timeoutIntervalForResource;
@property(nonatomic) double _timeoutIntervalForRequest; // @synthesize _timeoutIntervalForRequest=__timeoutIntervalForRequest;
@property(nonatomic) unsigned char _allowsPowerNapScheduling; // @synthesize _allowsPowerNapScheduling=__allowsPowerNapScheduling;
@property(nonatomic) unsigned char _allowsExpensiveAccess; // @synthesize _allowsExpensiveAccess=__allowsExpensiveAccess;
@property(copy, nonatomic) NSString *outOfProcessPoolName; // @synthesize outOfProcessPoolName=_outOfProcessPoolName;
@property(nonatomic) unsigned char outOfProcessDiscretionary; // @synthesize outOfProcessDiscretionary=_outOfProcessDiscretionary;
@property(nonatomic) unsigned char outOfProcess; // @synthesize outOfProcess=_outOfProcess;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
- (void).cxx_destruct;
@property(readonly, nonatomic) double emptySessionExpiryInSeconds;
- (id)decorateTask:(id)arg1;
- (id)copyAndDecorateRequest:(id)arg1;
- (id)sessionConfiguration;
- (id)defaultSessionConfiguration;
- (id)sessionConfigurationName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
