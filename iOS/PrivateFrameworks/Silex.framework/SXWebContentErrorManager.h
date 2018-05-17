//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXWebContentErrorProvider.h"
#import "SXWebContentErrorReporting.h"
#import "SXWebContentMessageHandler.h"

@class NSError, NSString;

@interface SXWebContentErrorManager : NSObject <SXWebContentMessageHandler, SXWebContentErrorProvider, SXWebContentErrorReporting>
{
    NSError *_error;
    CDUnknownBlockType _block;
    id <SXWebContentLogger> _logger;
}

@property(readonly, nonatomic) id <SXWebContentLogger> logger; // @synthesize logger=_logger;
@property(copy, nonatomic, setter=onError:) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)simulateCrashForError:(id)arg1;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;
- (void)reportError:(id)arg1;
- (id)initWithMessageHandlerManager:(id)arg1 timeoutManager:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
