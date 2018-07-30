//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DiagnosticLiaisonDelegate.h"
#import "DiagnosticReportGeneratorDelegate.h"

@class ABCConfigurationManager, AnalyticsWorkspace, DiagnosticCaseStorageAnalytics, DiagnosticLiaison, DiagnosticStatisticsManager, DiagnosticsController, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface DiagnosticCaseManager : NSObject <DiagnosticReportGeneratorDelegate, DiagnosticLiaisonDelegate>
{
    AnalyticsWorkspace *_workspace;
    NSMutableArray *_pendingStatisticsUpdateCases;
    NSMutableSet *_reportOutlets;
    long long _saveCount;
    NSMutableArray *_requestedReportGenerators;
    DiagnosticCaseStorageAnalytics *_caseStorageAnalytics;
    DiagnosticStatisticsManager *_statsManager;
    DiagnosticsController *_diagnosticsController;
    DiagnosticLiaison *_liaison;
    NSObject<OS_dispatch_source> *periodicTimer;
    BOOL _initializationComplete;
    NSMutableSet *sessionsWaitingToEnd;
    NSMutableDictionary *activeProbes;
    NSMutableDictionary *activeIDSMessages;
    unsigned int _avgCasesPerDay;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_reportGenerators;
    NSMutableArray *_activeCases;
    NSMutableArray *_totalCases;
    id <DiagnosticCaseManagerStorageDelegate> _storageDelegate;
}

@property(nonatomic) __weak id <DiagnosticCaseManagerStorageDelegate> storageDelegate; // @synthesize storageDelegate=_storageDelegate;
@property(readonly, copy, nonatomic) NSMutableArray *totalCases; // @synthesize totalCases=_totalCases;
@property(readonly, copy, nonatomic) NSMutableArray *activeCases; // @synthesize activeCases=_activeCases;
@property(readonly, nonatomic) NSMutableDictionary *reportGenerators; // @synthesize reportGenerators=_reportGenerators;
@property(readonly, nonatomic) DiagnosticStatisticsManager *statsManager; // @synthesize statsManager=_statsManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) DiagnosticLiaison *liaison; // @synthesize liaison=_liaison;
- (void).cxx_destruct;
- (void)removeAllCases;
- (void)removeCaseStorageWithID:(id)arg1;
- (BOOL)isAllowedTransientException:(id)arg1;
- (void)_forceCloseDiagnosticCaseStorage;
- (void)forceCloseDiagnosticCaseStorage;
- (id)casesMatchingDomain:(id)arg1 type:(id)arg2 subtype:(id)arg3 process:(id)arg4 withinLast:(double)arg5;
- (void)promoteTemporaryCase:(id)arg1;
- (id)createTemporaryDiagnosticCaseStorageForUUID:(id)arg1;
- (void)payloadsForSignatures:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resetAll;
- (void)resetAllForCustomerBuilds;
- (void)resetDiagnosticCaseStorage;
- (void)updateAverageCasesPerDay;
- (void)shutdown;
- (void)cancelSessionWithIdentifier:(id)arg1;
- (void)endSessionWithIdentifier:(id)arg1 forced:(BOOL)arg2 onlyIfReady:(BOOL)arg3;
- (void)endSessionWithIdentifier:(id)arg1 forced:(BOOL)arg2;
- (void)endSessions:(id)arg1 forced:(BOOL)arg2;
- (void)endSession:(id)arg1 forced:(BOOL)arg2 onlyIfReady:(BOOL)arg3;
- (void)addSignatureContentForSession:(id)arg1 key:(id)arg2 content:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)addToSession:(id)arg1 events:(id)arg2 payload:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)startSessionWithSignature:(id)arg1 flags:(unsigned long long)arg2 preferredTimeout:(double)arg3 events:(id)arg4 payload:(id)arg5 actions:(id)arg6 reply:(CDUnknownBlockType)arg7;
- (void)addToSession:(id)arg1 events:(id)arg2 payload:(id)arg3 queue:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)addToSession:(id)arg1 event:(id)arg2 payload:(id)arg3 queue:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)startSessionWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 triggerRemote:(BOOL)arg5 queue:(id)arg6 reply:(CDUnknownBlockType)arg7;
- (id)responseDictWithSuccess:(BOOL)arg1 sessionId:(id)arg2 reasonCode:(long long)arg3;
- (void)requestSnapshotWithSignature:(id)arg1 flags:(unsigned long long)arg2 events:(id)arg3;
- (void)remoteTriggerDeliveryUpdateEvent:(id)arg1;
- (void)endSessionIfProbesCompletedFor:(id)arg1;
- (void)cancelProbesForSession:(id)arg1;
- (void)startPacketCaptureForSession:(id)arg1 duration:(id)arg2;
- (void)updateSignatureWithBundleIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)periodicSessionManagement;
- (void)stopPeriodicTimer;
- (void)startPeriodicTimer;
- (void)_processActionsForPacketCaptureProbe:(id)arg1 session:(id)arg2;
- (unsigned long long)_processProbeActions:(id)arg1 session:(id)arg2;
- (void)_processTriggerActions:(id)arg1 session:(id)arg2;
- (void)_processReportActions:(id)arg1 session:(id)arg2;
- (void)_processRemoteIDSTriggers:(id)arg1 validFor:(double)arg2 signature:(id)arg3 sessionID:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (id)_updateSignatureWithInternalFlags:(id)arg1;
- (void)getAllDiagnosticCaseDictionaryRepresentations:(CDUnknownBlockType)arg1;
- (BOOL)statisticsRowForDiagnosticCase:(id)arg1 matchesWith:(id)arg2;
- (BOOL)sendReportsForCase:(id)arg1;
- (void)startCollectingNextReportForDiagnosticCase:(id)arg1;
- (BOOL)requestReportGenerator:(id)arg1 options:(id)arg2;
- (unsigned long long)collectDiagnosticExtensionLogsWithParameters:(id)arg1 options:(id)arg2 diagCase:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)postProcessActionsForClosedCase:(id)arg1;
- (BOOL)closeCase:(id)arg1;
- (id)caseStorageForCaseID:(id)arg1;
- (id)lookUpDiagnosticCaseStorageForUUID:(id)arg1;
@property(nonatomic) unsigned int avgCasesPerDay; // @synthesize avgCasesPerDay=_avgCasesPerDay;
- (BOOL)hasOpenCases;
- (void)addCaseReportOutlet:(id)arg1;
- (void)reportGeneratorEnded:(id)arg1 reportInfo:(id)arg2 error:(id)arg3;
- (void)setUpGeneralCaseReportGenerators;
- (int)cancelCaseWithId:(id)arg1;
- (int)addSignatureContentToCaseWithId:(id)arg1 key:(id)arg2 content:(id)arg3;
- (int)addToCaseWithId:(id)arg1 events:(id)arg2 payload:(id)arg3;
- (void)_updateCaseStatisticsWithCase:(id)arg1;
- (BOOL)finalizeDiagnosticCaseWithId:(id)arg1 closureType:(short)arg2 onlyIfReady:(BOOL)arg3;
- (id)allDiagnosticCaseDictionaries;
- (id)allDiagnosticCases;
- (id)diagnosticCaseWithId:(id)arg1;
- (id)createDiagnosticCaseWithSignature:(id)arg1 flags:(unsigned long long)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5;
- (id)casesDiagnosedInTheLast:(double)arg1 from:(double)arg2 matchingDomain:(id)arg3;
- (BOOL)isAdmissible:(id)arg1 dampenedBy:(short *)arg2;
- (unsigned int)dampeningFactorForSignature:(id)arg1 caseTime:(id)arg2;
- (BOOL)allowDampeningExceptionFor:(id)arg1;
- (void)removeTransientCasesWithSignature:(id)arg1 beforeTime:(double)arg2;
- (void)removeClosedCasesFromTotalCases;
- (void)_saveAllCases;
- (void)saveAllCases;
@property(readonly, nonatomic) ABCConfigurationManager *configManager;
@property(readonly, nonatomic) DiagnosticsController *diagnosticsController;
- (long long)dailyCountLimitForDomain:(id)arg1;
- (BOOL)disableDampening;
- (void)configureWithWorkspace:(id)arg1;
- (id)initWithWorkspace:(id)arg1 liaison:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
