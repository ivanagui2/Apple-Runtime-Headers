//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMCoreLite/FMQueueingStrategy-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _FMBoundedQueueingStrategy : NSObject <FMQueueingStrategy>
{
    unsigned int _capacity;
    CDUnknownBlockType _overflowHandler;
}

- (void).cxx_destruct;
- (void)enqueueObject:(id)arg1 buffer:(id)arg2;
- (id)initWithCapacity:(unsigned int)arg1 overflowHandler:(CDUnknownBlockType)arg2;
- (id)initWithCapacity:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

