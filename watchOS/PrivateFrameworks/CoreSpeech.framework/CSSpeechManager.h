//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSActivationEventNotifierDelegate-Protocol.h>
#import <CoreSpeech/CSAudioRecorderDelegate-Protocol.h>
#import <CoreSpeech/CSAudioRouteChangeMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSAudioServerCrashMonitorGibraltarDelegate-Protocol.h>
#import <CoreSpeech/CSLanguageCodeUpdateMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSSiriEnabledMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSSmartSiriVolumeDelegate-Protocol.h>
#import <CoreSpeech/CSStateMachineDelegate-Protocol.h>
#import <CoreSpeech/CSVoiceTriggerAssetDownloadMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSVoiceTriggerDelegate-Protocol.h>

@class CSAudioCircularBuffer, CSAudioRecorder, CSSmartSiriVolume, CSStateMachine, NSDictionary, NSHashTable, NSString, NSUUID;
@protocol CSSpeechManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CSSpeechManager : NSObject <CSAudioRecorderDelegate, CSStateMachineDelegate, CSVoiceTriggerDelegate, CSSiriEnabledMonitorDelegate, CSAudioServerCrashMonitorGibraltarDelegate, CSSmartSiriVolumeDelegate, CSActivationEventNotifierDelegate, CSAudioRouteChangeMonitorDelegate, CSVoiceTriggerAssetDownloadMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate>
{
    _Bool _isSiriEnabled;
    _Bool _deviceRoleIsStereo;
    _Bool _isAudioSessionActive;
    _Bool _shouldChangeContextAfterDidStop;
    CSAudioRecorder *_audioRecorder;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_assetQueryQueue;
    CSStateMachine *_stateMachine;
    CSAudioCircularBuffer *_audioBuffer;
    id <CSSpeechManagerDelegate> _clientController;
    unsigned int _secondPassStartSampleCount;
    NSDictionary *_lastVoiceTriggerEventInfo;
    CSSmartSiriVolume *_smartSiriVolume;
    NSHashTable *_activeAudioProcessors;
    NSHashTable *_continuousAudioProcessors;
    unsigned int _lastForwardedSampleCount;
    unsigned int _clientStartSampleCount;
    NSObject<OS_dispatch_source> *_listenPollingTimer;
    NSObject<OS_dispatch_source> *_clearLoggingFileTimer;
    int _listenPollingTimerCount;
    int _clearLoggingFileTimerCount;
    NSUUID *_pendingSetRecordModeToRecordingToken;
    CDUnknownBlockType _pendingSetRecordModeToRecordingCompletion;
    NSDictionary *_pendingContext;
    double _audioSessionActivationDelay;
}

@property(retain, nonatomic) NSDictionary *pendingContext; // @synthesize pendingContext=_pendingContext;
@property(nonatomic) _Bool shouldChangeContextAfterDidStop; // @synthesize shouldChangeContextAfterDidStop=_shouldChangeContextAfterDidStop;
@property(nonatomic) double audioSessionActivationDelay; // @synthesize audioSessionActivationDelay=_audioSessionActivationDelay;
@property(nonatomic) _Bool isAudioSessionActive; // @synthesize isAudioSessionActive=_isAudioSessionActive;
@property(nonatomic) _Bool deviceRoleIsStereo; // @synthesize deviceRoleIsStereo=_deviceRoleIsStereo;
@property(nonatomic) _Bool isSiriEnabled; // @synthesize isSiriEnabled=_isSiriEnabled;
@property(copy, nonatomic) CDUnknownBlockType pendingSetRecordModeToRecordingCompletion; // @synthesize pendingSetRecordModeToRecordingCompletion=_pendingSetRecordModeToRecordingCompletion;
@property(retain, nonatomic) NSUUID *pendingSetRecordModeToRecordingToken; // @synthesize pendingSetRecordModeToRecordingToken=_pendingSetRecordModeToRecordingToken;
@property(nonatomic) int clearLoggingFileTimerCount; // @synthesize clearLoggingFileTimerCount=_clearLoggingFileTimerCount;
@property(nonatomic) int listenPollingTimerCount; // @synthesize listenPollingTimerCount=_listenPollingTimerCount;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *clearLoggingFileTimer; // @synthesize clearLoggingFileTimer=_clearLoggingFileTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *listenPollingTimer; // @synthesize listenPollingTimer=_listenPollingTimer;
@property(nonatomic) unsigned int clientStartSampleCount; // @synthesize clientStartSampleCount=_clientStartSampleCount;
@property(nonatomic) unsigned int lastForwardedSampleCount; // @synthesize lastForwardedSampleCount=_lastForwardedSampleCount;
@property(retain, nonatomic) NSHashTable *continuousAudioProcessors; // @synthesize continuousAudioProcessors=_continuousAudioProcessors;
@property(retain, nonatomic) NSHashTable *activeAudioProcessors; // @synthesize activeAudioProcessors=_activeAudioProcessors;
@property(retain, nonatomic) CSSmartSiriVolume *smartSiriVolume; // @synthesize smartSiriVolume=_smartSiriVolume;
@property(retain, nonatomic) NSDictionary *lastVoiceTriggerEventInfo; // @synthesize lastVoiceTriggerEventInfo=_lastVoiceTriggerEventInfo;
@property(nonatomic) unsigned int secondPassStartSampleCount; // @synthesize secondPassStartSampleCount=_secondPassStartSampleCount;
@property(nonatomic) __weak id <CSSpeechManagerDelegate> clientController; // @synthesize clientController=_clientController;
@property(retain, nonatomic) CSAudioCircularBuffer *audioBuffer; // @synthesize audioBuffer=_audioBuffer;
@property(retain, nonatomic) CSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assetQueryQueue; // @synthesize assetQueryQueue=_assetQueryQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSAudioRecorder *audioRecorder; // @synthesize audioRecorder=_audioRecorder;
- (void).cxx_destruct;
- (_Bool)_isBluetoothDeviceTriggerEvent:(unsigned int)arg1;
- (void)handleServerDidRestart;
- (void)handleLostServerConnection;
- (void)_startClearLoggingFilesTimer;
- (void)_createClearLoggingFileTimer;
- (void)CSSmartSiriVolumeDidReceiveTimerChanged:(int)arg1;
- (void)CSSmartSiriVolumeDidReceiveAlarmChanged:(int)arg1;
- (void)CSSmartSiriVolumeDidReceiveMusicVolumeChanged:(float)arg1;
- (void)CSSiriEnabledMonitor:(id)arg1 didReceiveEnabled:(_Bool)arg2;
- (float)getEstimatedTTSVolume;
- (id)_eventName:(unsigned int)arg1;
- (id)_stateName:(int)arg1;
- (void)_reinitializeSmartSiriVolumeWithAsset:(id)arg1;
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;
- (void)CSVoiceTriggerAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(_Bool)arg2;
- (void)voiceTriggerDidDetectTwoShotAtTime:(double)arg1;
- (void)voiceTriggerDidDetectKeyword:(id)arg1;
- (void)audioRecorderDisconnected:(id)arg1;
- (void)audioRecorder:(id)arg1 didSetAudioSessionActive:(_Bool)arg2;
- (void)audioRecorder:(id)arg1 willSetAudioSessionActive:(_Bool)arg2;
- (void)audioRecorderEndRecordInterruption:(id)arg1;
- (void)audioRecorderBeginRecordInterruption:(id)arg1 withContext:(id)arg2;
- (void)audioRecorderBeginRecordInterruption:(id)arg1;
- (void)audioRecorderDidFinishAlertPlayback:(id)arg1 ofType:(int)arg2 error:(id)arg3;
- (void)audioRecorderRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2;
- (void)audioRecorderDidStopRecording:(id)arg1 forReason:(int)arg2;
- (void)audioRecorderDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;
- (void)audioRecorderBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)audioRecorderBufferAvailable:(id)arg1 buffer:(id)arg2 atTime:(unsigned long long)arg3;
- (id)_getClientRecordContext;
- (void)_startForwardingToSmartSiriVolume;
- (void)_stopForwardingToClient;
- (void)_startForwardingToClient;
- (void)_destroyAudioRecorderIfNeeded;
- (void)_stopListenPolling;
- (void)_startListenPolling;
- (void)_createListenPollingTimer;
- (void)didIgnoreEvent:(int)arg1 from:(int)arg2;
- (void)didTransitFrom:(int)arg1 to:(int)arg2 by:(int)arg3;
- (void)mediaserverdDidRestart;
- (void)audioRecorderLostMediaserverd:(id)arg1;
- (void)_stopRecordingWithEvent:(unsigned int)arg1;
- (void)stopRecordingWithEvent:(unsigned int)arg1;
- (void)_startRecordingForClient:(id)arg1 error:(id *)arg2;
- (_Bool)_startRecordingForAOPFirstPassTriggerWithSettings:(id)arg1 error:(id *)arg2;
- (_Bool)_startListeningForBluetoothDeviceVoiceTrigger:(unsigned int)arg1 settings:(id)arg2 error:(id *)arg3;
- (_Bool)_startRecordingWithSettings:(id)arg1 event:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)startRecordingWithSetting:(id)arg1 event:(unsigned int)arg2 error:(id *)arg3;
- (void)startRecordingAsyncWithSetting:(id)arg1 event:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_handleJarvisFirstPassTriggerEvent:(unsigned int)arg1 settings:(id)arg2 error:(id *)arg3;
- (_Bool)_handleVoiceTriggerSwitchAOP2APEvent:(unsigned int)arg1 settings:(id)arg2 error:(id *)arg3;
- (_Bool)_handleAOPFirstPassTriggerEvent:(unsigned int)arg1 settings:(id)arg2 error:(id *)arg3;
- (_Bool)_handleBluetoothDeviceTriggerEvent:(unsigned int)arg1 settings:(id)arg2 error:(id *)arg3;
- (void)_enableMiniDucking:(_Bool)arg1;
- (_Bool)_releaseAudioSessionForListening:(unsigned int)arg1 error:(id *)arg2;
- (void)_releaseClientAudioSession:(unsigned int)arg1;
- (void)releaseClientAudioSession:(unsigned int)arg1;
- (void)releaseClientAudioSession;
- (_Bool)_setCurrentContext:(id)arg1 error:(id *)arg2;
- (void)_performPendingSetRecordModeToRecordingForReason:(id)arg1;
- (void)_cancelPendingSetRecordModeToRecordingForReason:(id)arg1;
- (void)_scheduleSetRecordModeToRecordingWithDelay:(double)arg1 forReason:(id)arg2 validator:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_setRecordMode:(int)arg1 withDelay:(double)arg2 error:(id *)arg3;
- (_Bool)_setRecordMode:(int)arg1 error:(id *)arg2;
- (_Bool)_startListeningWithSettings:(id)arg1 error:(id *)arg2;
- (_Bool)_startListening:(id *)arg1;
- (_Bool)_startRecordingWithSettings:(id)arg1 error:(id *)arg2;
- (_Bool)prepareRecordingForClient:(id)arg1 error:(id *)arg2;
- (_Bool)setClientContext:(id)arg1 error:(id *)arg2;
- (_Bool)isNarrowBand;
- (_Bool)isClientRecording;
- (id)recordSettings;
- (id)recordDeviceInfo;
- (id)recordRoute;
- (void)prewarmAudioSession;
- (_Bool)_prepareListenWithSettings:(id)arg1 error:(id *)arg2;
- (_Bool)_prepareRecorderWithSettings:(id)arg1 error:(id *)arg2;
- (_Bool)_createRecorderWithContextIfNeeded:(id)arg1 error:(id *)arg2;
- (void)_notifyEvent:(unsigned int)arg1;
- (void)notifyEvent:(unsigned int)arg1;
- (int)getCurrentState;
- (void)_setupStateMachine;
- (void)registerSpeechController:(id)arg1;
- (void)_destroyCircularBuffer;
- (void)_createCircularBuffer;
- (void)_setupCircularBuffer;
- (void)_getVoiceTriggerAsset:(CDUnknownBlockType)arg1;
- (void)_getVoiceTriggerAssetForMac:(CDUnknownBlockType)arg1;
- (void)_reset;
- (void)reset;
- (void)startManager;
- (void)dealloc;
- (id)initWithVoiceTriggerFirstPass:(id)arg1 firstPassType:(unsigned int)arg2 voicetriggerSecondPass:(id)arg3 voicetriggerEventNotifier:(id)arg4 audioRecorder:(id)arg5 stateMachineType:(unsigned int)arg6;
- (id)init;
- (float)averagePowerForChannel:(unsigned int)arg1;
- (float)peakPowerForChannel:(unsigned int)arg1;
- (void)updateMeters;
- (void)setMeteringEnabled:(_Bool)arg1;
- (unsigned long long)alertStartTime;
- (_Bool)playRecordStartingAlertAndResetEndpointer;
- (_Bool)playAlertSoundForType:(int)arg1;
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(int)arg2;
- (id)metrics;
- (id)passThruVoiceTriggerInfo;
- (void)setDuckOthersOption:(_Bool)arg1;
- (_Bool)duckOthersOption;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

