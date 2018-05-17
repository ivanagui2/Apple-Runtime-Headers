//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WFWeatherStore.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, WFWeatherStoreCache, WFWeatherStoreServiceConfiguration;

@interface WFWeatherStoreService : NSObject <WFWeatherStore>
{
    WFWeatherStoreServiceConfiguration *_configuration;
    CDUnknownBlockType _forecastRequestStartingCallback;
    CDUnknownBlockType _locationGeocodeForCoordinateRequestStartingCallback;
    NSObject<OS_dispatch_queue> *_incomingRequestQueue;
    NSObject<OS_dispatch_queue> *_parseQueue;
    NSObject<OS_dispatch_queue> *_mapQueue;
    NSMutableDictionary *_UUIDToCallbackMap;
    NSMutableDictionary *_UUIDToURLMap;
    NSMutableDictionary *_URLToTaskMap;
    NSMutableDictionary *_URLToCallbackMap;
    WFWeatherStoreCache *_cache;
}

@property(retain) WFWeatherStoreCache *cache; // @synthesize cache=_cache;
@property(retain) NSMutableDictionary *URLToCallbackMap; // @synthesize URLToCallbackMap=_URLToCallbackMap;
@property(retain) NSMutableDictionary *URLToTaskMap; // @synthesize URLToTaskMap=_URLToTaskMap;
@property(retain) NSMutableDictionary *UUIDToURLMap; // @synthesize UUIDToURLMap=_UUIDToURLMap;
@property(retain) NSMutableDictionary *UUIDToCallbackMap; // @synthesize UUIDToCallbackMap=_UUIDToCallbackMap;
@property(retain) NSObject<OS_dispatch_queue> *mapQueue; // @synthesize mapQueue=_mapQueue;
@property(retain) NSObject<OS_dispatch_queue> *parseQueue; // @synthesize parseQueue=_parseQueue;
@property(retain) NSObject<OS_dispatch_queue> *incomingRequestQueue; // @synthesize incomingRequestQueue=_incomingRequestQueue;
@property(copy, nonatomic) CDUnknownBlockType locationGeocodeForCoordinateRequestStartingCallback; // @synthesize locationGeocodeForCoordinateRequestStartingCallback=_locationGeocodeForCoordinateRequestStartingCallback;
@property(copy, nonatomic) CDUnknownBlockType forecastRequestStartingCallback; // @synthesize forecastRequestStartingCallback=_forecastRequestStartingCallback;
@property(copy, nonatomic) WFWeatherStoreServiceConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)_executeCallbacksForURL:(id)arg1 requestIdentifier:(id)arg2 conditions:(id)arg3 error:(id)arg4;
- (void)_executeCallbacksForURL:(id)arg1 requestIdentifier:(id)arg2 parsedForecastData:(id)arg3 error:(id)arg4;
- (void)_addCallback:(CDUnknownBlockType)arg1 requestIdentifier:(id)arg2 forURL:(id)arg3;
- (void)_setTask:(id)arg1 requestIdentifier:(id)arg2 callback:(CDUnknownBlockType)arg3 forURL:(id)arg4;
- (id)_taskForURL:(id)arg1;
- (void)_cancelWithRequestIdentifier:(id)arg1;
- (_Bool)_cacheParsedForecastData:(id)arg1 type:(unsigned int)arg2 location:(id)arg3 date:(id)arg4 requestIdentifier:(id)arg5;
- (_Bool)_forecastConditionsForType:(unsigned int)arg1 location:(id)arg2 date:(id)arg3 requestIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)_isConnectivityAvailableForWeatherHost:(id *)arg1;
- (void)dailyForecastForLocation:(id)arg1 requestIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)airQualityForLocation:(id)arg1 locale:(id)arg2 requestIdentifier:(id)arg3 options:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)hourlyForecastForLocation:(id)arg1 requestIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)forecastForLocation:(id)arg1 atDate:(id)arg2 requestIdentifier:(id)arg3 options:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)cancelTaskWithIdentifier:(id)arg1;
- (void)invalidateCacheWithIdentifier:(id)arg1;
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
