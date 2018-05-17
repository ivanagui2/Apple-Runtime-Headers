//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLAssertion, CLLocation, CLLocationManager, NSObject<OS_dispatch_queue>, NSString, PCPersistentTimer;

@interface NPHSOSPersistentTimerLocationManager : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    NSObject<OS_dispatch_queue> *_locationUpdateStartQueue;
    PCPersistentTimer *_locationUpdateTimer;
    PCPersistentTimer *_requestLocationsTimer;
    CLLocation *_lastLocation;
    double _ti;
    PCPersistentTimer *_initalRequestTimer;
    _Bool _requestingLocation;
    id <NPHSOSPersistentTimerLocationManagerDelegate> _delegate;
    CLAssertion *_forceEnableLocationAssertion;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CLAssertion *forceEnableLocationAssertion; // @synthesize forceEnableLocationAssertion=_forceEnableLocationAssertion;
@property(nonatomic, getter=isRequestingLocation) _Bool requestingLocation; // @synthesize requestingLocation=_requestingLocation;
@property __weak id <NPHSOSPersistentTimerLocationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (_Bool)shouldStopRequestingLocationAfterCallback;
- (void)_sosPersistentTimerLocationManagerTic:(id)arg1;
- (void)_sosPersistentTimerInitialRequest:(id)arg1;
- (_Bool)isValid;
- (void)invalidateInitialTimer;
- (void)invalidateTimer;
- (void)fireAndStartTimertWithTimeInterval:(double)arg1;
- (void)_startTimer;
- (void)stopRequestingLocationUpdates;
- (void)invalidateRequestLocationsTimer;
- (void)_requestLocationsTimeout:(id)arg1;
- (void)requestLocation;
- (void)warmUpLocationRequest;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
