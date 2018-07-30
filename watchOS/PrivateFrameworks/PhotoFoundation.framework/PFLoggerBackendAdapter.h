//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PFLoggerBackend.h"

@class NSString;

@interface PFLoggerBackendAdapter : NSObject <PFLoggerBackend>
{
    // Error parsing type: AQ, name: _pendingTransactionCount
    _Bool _runningUnderDebugger;
}

+ (int)parseByteSizeValueForKey:(id)arg1 inString:(id)arg2;
+ (int)allFileSizeMaxBytesFromString:(id)arg1;
+ (int)fileSizeMaxBytesFromString:(id)arg1;
+ (id)pathWithoutParametersFromString:(id)arg1;
+ (id)backendsFromUserDefaultsWithLogLevel:(int)arg1;
@property _Bool runningUnderDebugger; // @synthesize runningUnderDebugger=_runningUnderDebugger;
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool outputsToDebuggerConsole;
@property(readonly, nonatomic) _Bool formatsMessage;
@property(readonly, nonatomic) _Bool allowsConcurrentAccess;
- (void)endTransaction;
- (void)beginTransaction;
- (void)logFromCodeLocation:(CDStruct_98c8119d)arg1 facility:(id)arg2 subsystem:(id)arg3 level:(int)arg4 message:(id)arg5 format:(id)arg6 args:(char *)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
