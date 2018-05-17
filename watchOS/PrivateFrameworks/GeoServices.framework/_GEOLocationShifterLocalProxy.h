//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_GEOLocationShifterProxy.h"

@class GEOLocationShifterPersistence, NSObject<OS_dispatch_queue>, NSString, _GEOLocationShiftRequester;

__attribute__((visibility("hidden")))
@interface _GEOLocationShifterLocalProxy : NSObject <_GEOLocationShifterProxy>
{
    _GEOLocationShiftRequester *_requester;
    int _resetPrivacyToken;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_prunePersistentCache;
- (void)_doNetworkRequestForLatLng:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 shouldCache:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)shiftLatLng:(id)arg1 auditToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) GEOLocationShifterPersistence *persistentCache;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
