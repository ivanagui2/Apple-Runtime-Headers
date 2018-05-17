//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CUWiFiDevice, EasyConfigDevice, NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface CUWACSession : NSObject
{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    struct LogCategory *_ucat;
    int _saveOriginalWiFiState;
    NSDictionary *_originalWiFiInfo;
    int _joinSoftAPState;
    double _joinSoftAPStartTime;
    EasyConfigDevice *_easyConfigDevice;
    int _easyConfigPreConfigState;
    struct {
        double startTime;
        unsigned char userChangedFriendlyName;
        unsigned char playPasswordSet;
        unsigned char adminPasswordSet;
        unsigned char destinationNetworkRecommendationUsed;
        double secondsToGetLinkUpOnSWAP;
        int wifiJoinSWAPError;
        unsigned char hitJoiningTargetSWAPTimeout;
        int rssiOfSWAP;
        unsigned int snrOfSWAP;
        unsigned int channelOfSWAP;
    } _easyConfigPreConfigMetrics;
    int _restoreOriginalWiFiState;
    double _restoreStartTime;
    int _easyConfigPostConfigState;
    struct {
        double secondsToGetLinkUpOnDestination;
        int wifiJoinDestinationAPError;
        unsigned char destinationNetworkPSKInKeychain;
        unsigned char hitJoiningDestinationAPTimeout;
        int rssiOfDestinationAP;
        unsigned int snrOfDestinationAP;
        unsigned int channelOfDestinationAP;
    } _easyConfigPostConfigMetrics;
    int _finishState;
    NSDictionary *_configuration;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_label;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _promptForSetupCodeHandler;
    CUWiFiDevice *_wacDevice;
}

@property(retain, nonatomic) CUWiFiDevice *wacDevice; // @synthesize wacDevice=_wacDevice;
@property(copy, nonatomic) CDUnknownBlockType promptForSetupCodeHandler; // @synthesize promptForSetupCodeHandler=_promptForSetupCodeHandler;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)_runFinishRestored:(long)arg1;
- (int)_runFinish;
- (int)_runEasyConfigPostConfig;
- (void)_runRestoreOriginalWiFiFinished:(long)arg1;
- (void)_runRestoreOriginalWiFiStart;
- (int)_runRestoreOriginalWiFi;
- (void)_runEasyConfigProgress:(int)arg1 info:(id)arg2;
- (void)_runEasyConfigPreConfigStart;
- (int)_runEasyConfigPreConfig;
- (void)_runJoinSoftAPFinished:(long)arg1;
- (void)_runJoinSoftAPStart;
- (int)_runJoinSoftAP;
- (int)_runSaveOriginalWiFi;
- (void)_run;
- (void)trySetupCode:(id)arg1;
- (void)_progress:(unsigned int)arg1 info:(id)arg2;
- (void)invalidate;
- (void)activate;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end
