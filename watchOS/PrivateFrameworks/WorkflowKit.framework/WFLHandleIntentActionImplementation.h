//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFLActionImplementation.h>

@class INCExtensionConnection;

@interface WFLHandleIntentActionImplementation : WFLActionImplementation
{
    INCExtensionConnection *_connection;
}

+ (void)continueActionInApp:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)initialize;
@property(retain, nonatomic) INCExtensionConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)errorWithCode:(int)arg1 localizedDescription:(id)arg2 localizedTitle:(id)arg3 underlyingError:(id)arg4 intentResponse:(id)arg5;
- (id)appNotInstalledErrorForIntent:(id)arg1 underlyingError:(id)arg2;
- (void)launchAppWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelRunning;
- (void)handleIntent:(id)arg1 inBackgroundAppWithBundleIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)finishRunningByContinuingInApp;
- (void)handleIntent:(id)arg1 withExtensionProxy:(id)arg2;
- (void)confirmIntent:(id)arg1 withExtensionProxy:(id)arg2;
- (void)resolveIntent:(id)arg1 withExtensionProxy:(id)arg2;
- (id)createExtensionConnectionForIntent:(id)arg1;
- (void)run;
- (void)logDebugInformation:(id)arg1;

@end
