//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NTKUpNextPeriodOfDayPredictorDelegate.h"
#import "NWKForecastManagerObservable.h"

@class NSDateInterval, NSString, NTKDailyRoutineRelevanceProvider, NWKForecastManager, NWKRoutineForecast;

@interface NTKUpNextForecastDataProvider : NSObject <NTKUpNextPeriodOfDayPredictorDelegate, NWKForecastManagerObservable>
{
    int _notifynanoweatherdToken;
    NTKDailyRoutineRelevanceProvider *_morningRoutineRelevanceProvider;
    id <NTKUpNextElementDataSourceDelegate> _delegate;
    NWKForecastManager *_forecastManager;
    NWKRoutineForecast *_routineForecast;
    NSDateInterval *_monitoredMorningRoutineInterval;
    NSDateInterval *_monitoredEveningRoutineInterval;
}

+ (id)sampleContentElements;
@property(retain, nonatomic) NSDateInterval *monitoredEveningRoutineInterval; // @synthesize monitoredEveningRoutineInterval=_monitoredEveningRoutineInterval;
@property(retain, nonatomic) NSDateInterval *monitoredMorningRoutineInterval; // @synthesize monitoredMorningRoutineInterval=_monitoredMorningRoutineInterval;
@property(retain, nonatomic) NWKRoutineForecast *routineForecast; // @synthesize routineForecast=_routineForecast;
@property(retain, nonatomic) NWKForecastManager *forecastManager; // @synthesize forecastManager=_forecastManager;
@property(nonatomic) __weak id <NTKUpNextElementDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NTKDailyRoutineRelevanceProvider *morningRoutineRelevanceProvider; // @synthesize morningRoutineRelevanceProvider=_morningRoutineRelevanceProvider;
- (void)manager:(id)arg1 updatedRoutineForecastFrom:(id)arg2 to:(id)arg3;
- (void)periodOfDayPredictorDidUpdatePredictedIntervals:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (id)_upNextElementWithIdentifier:(id)arg1 relevanceProvider:(id)arg2 imageProvider:(id)arg3 headerProvider:(id)arg4 firstDescriptionProvider:(id)arg5 secondDescriptionProvider:(id)arg6 descriptionAccessory:(id)arg7 action:(id)arg8;
- (id)_hourlyForecastElementWithIdentifier:(id)arg1 forConditions:(id)arg2 currentLocation:(id)arg3 action:(id)arg4 privacyBehavior:(unsigned int)arg5;
- (id)_currentForecastElementWithIdentifier:(id)arg1 relevanceProvider:(id)arg2 forConditions:(id)arg3 action:(id)arg4 privacyBehavior:(unsigned int)arg5;
- (id)_tomorrowForecastElementWithIdentifier:(id)arg1 relevanceProvider:(id)arg2 forConditions:(id)arg3 action:(id)arg4;
- (id)_tomorrowUpNextElementsWithForecastsGroup:(id)arg1;
- (id)_todayAllDayElementsWithForecastsGroup:(id)arg1 airQualityConditions:(id)arg2;
- (id)_defaultUpNextElementsWithForecastsGroup:(id)arg1 currentLocation:(id)arg2;
- (id)getElementsDuringDateInterval:(id)arg1 inSection:(unsigned int)arg2 currentLocation:(id)arg3 forecastsGroup:(id)arg4 airQualityConditions:(id)arg5;
- (void)resume;
- (void)pause;
- (void)_startMonitoringRoutineForecast;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
