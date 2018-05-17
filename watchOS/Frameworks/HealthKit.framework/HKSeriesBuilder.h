//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKDevice, HKHealthStore, NSObject<OS_dispatch_queue>;

@interface HKSeriesBuilder : NSObject
{
    _Bool _hasData;
    int _state;
    HKDevice *_device;
    HKHealthStore *_store;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_queue> *_resourceQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue; // @synthesize resourceQueue=_resourceQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(readonly, nonatomic) HKHealthStore *store; // @synthesize store=_store;
@property(readonly, copy, nonatomic) HKDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
@property(nonatomic) int state;
@property(nonatomic) _Bool hasData;
- (void)_resourceQueue_discardWithHandler:(CDUnknownBlockType)arg1;
- (void)discard;
- (id)_initWithHealthStore:(id)arg1 device:(id)arg2;
- (id)init;

@end
