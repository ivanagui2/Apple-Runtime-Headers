//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstallerDiagnostics/IDDiagnosticsProtocol-Protocol.h>

@class NSString, NSXPCConnection;

@interface IDDiagnosticsConnection : NSObject <IDDiagnosticsProtocol>
{
    NSXPCConnection *_connection;
}

+ (id)sharedConnection;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)clearDiagnosticMessages:(CDUnknownBlockType)arg1;
- (void)clearSingleDiagnosticMessage:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)recordDiagnosticMessage:(long long)arg1 withData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)finishMessageTransport;
- (void)startMessageTransport;
- (void)finishInstall;
- (void)startNewInstall;
- (id)connectionWithErrorHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

