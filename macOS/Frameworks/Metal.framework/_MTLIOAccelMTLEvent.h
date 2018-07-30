//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IOAccelMTLEvent.h"

#import "MTLEvent.h"

@class MTLIOAccelDevice<MTLDevice>, NSString;

__attribute__((visibility("hidden")))
@interface _MTLIOAccelMTLEvent : IOAccelMTLEvent <MTLEvent>
{
    MTLIOAccelDevice<MTLDevice> *_device;
    NSString *_label;
    unsigned long long _labelTraceID;
}

@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
@property(copy) NSString *label;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
