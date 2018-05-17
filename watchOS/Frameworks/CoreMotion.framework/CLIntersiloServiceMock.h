//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreMotion/CLIntersiloService.h>

#import "CLIntersiloServiceMockProtocol.h"

@class NSMutableDictionary, NSString;

@interface CLIntersiloServiceMock : CLIntersiloService <CLIntersiloServiceMockProtocol>
{
    NSMutableDictionary *_keyedPayloads;
}

@property(retain, nonatomic) NSMutableDictionary *keyedPayloads; // @synthesize keyedPayloads=_keyedPayloads;
- (void).cxx_destruct;
- (void)removePayloadForSelector:(SEL)arg1;
- (id)getPayloadForSelector:(SEL)arg1;
- (id)syncgetPayloadForSelector:(SEL)arg1;
- (void)setPayload:(id)arg1 forSelector:(SEL)arg2;
- (void)removePayloadForKey:(id)arg1;
- (id)getPayloadForKey:(id)arg1;
- (id)syncgetPayloadForKey:(id)arg1;
- (void)setPayload:(id)arg1 forKey:(id)arg2;
- (void)endService;
- (void)beginService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
