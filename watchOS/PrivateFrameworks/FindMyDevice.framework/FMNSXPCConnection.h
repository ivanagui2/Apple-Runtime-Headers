//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FindMyDevice/FMNSXPCConnecting-Protocol.h>

@class FMFuture, NSString, NSXPCConnection;

@interface FMNSXPCConnection : NSObject <FMNSXPCConnecting>
{
    _Bool __testMockConnection;
    NSXPCConnection *_connection;
    FMFuture *_future;
}

@property(nonatomic) _Bool _testMockConnection; // @synthesize _testMockConnection=__testMockConnection;
@property(retain, nonatomic) FMFuture *future; // @synthesize future=_future;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)destroyXPCConnection;
- (void)invalidate;
@property(readonly, nonatomic) int state;
- (void)addFailureBlock:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 exportedObject:(id)arg2;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

