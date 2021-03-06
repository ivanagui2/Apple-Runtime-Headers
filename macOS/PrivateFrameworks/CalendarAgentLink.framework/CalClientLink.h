//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CalXPCConnectionListenerProvider;

@interface CalClientLink : NSObject
{
    CalXPCConnectionListenerProvider *_connectionListenerProvider;
}

+ (void)_sendToClients:(SEL)arg1 withObjects:(id)arg2;
+ (void)tearDownAllInstances;
+ (void)sendToOtherClients:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
+ (void)sendToOtherClients:(SEL)arg1 withObject:(id)arg2;
+ (void)sendToOtherClients:(SEL)arg1;
+ (void)sendToClients:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
+ (void)sendToClients:(SEL)arg1 withObject:(id)arg2;
+ (void)sendToClients:(SEL)arg1;
+ (id)startWithMachServiceName:(id)arg1 exportedObject:(id)arg2;
+ (id)sharedInstanceWithMachServiceName:(id)arg1;
+ (id)sharedInstances;
+ (void)initialize;
@property(retain) CalXPCConnectionListenerProvider *connectionListenerProvider; // @synthesize connectionListenerProvider=_connectionListenerProvider;
- (void).cxx_destruct;
- (void)_sendToClients:(SEL)arg1 withObjects:(id)arg2;
- (void)tearDown;
- (id)initWithMachServiceName:(id)arg1 exportedObject:(id)arg2;

@end

