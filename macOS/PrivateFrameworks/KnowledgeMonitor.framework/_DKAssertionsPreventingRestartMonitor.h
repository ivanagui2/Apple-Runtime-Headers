//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKAssertionsPreventingRestartMonitor : _DKMonitor
{
    BOOL _lastPreventingRestartAssertionsStatus;
    int _userspaceAssertionsToken;
    int _preventIdleSleepAssertionsToken;
    int _systemAssertionsToken;
    int _restartPreventerAssertionsToken;
}

+ (id)entitlements;
+ (id)eventStream;
@property(nonatomic) BOOL lastPreventingRestartAssertionsStatus; // @synthesize lastPreventingRestartAssertionsStatus=_lastPreventingRestartAssertionsStatus;
@property(nonatomic) int restartPreventerAssertionsToken; // @synthesize restartPreventerAssertionsToken=_restartPreventerAssertionsToken;
@property(nonatomic) int systemAssertionsToken; // @synthesize systemAssertionsToken=_systemAssertionsToken;
@property(nonatomic) int preventIdleSleepAssertionsToken; // @synthesize preventIdleSleepAssertionsToken=_preventIdleSleepAssertionsToken;
@property(nonatomic) int userspaceAssertionsToken; // @synthesize userspaceAssertionsToken=_userspaceAssertionsToken;
- (void)synchronouslyReflectCurrentValue;
- (BOOL)areAssertionsPreventingRestart;
- (void)stop;
- (void)start;
- (id)loadState;
- (void)saveState;

@end
