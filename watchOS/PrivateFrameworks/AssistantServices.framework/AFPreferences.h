//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface AFPreferences : NSObject
{
    _Bool _registeredForInternalPrefs;
    _Bool _registeredForLanguageCode;
    _Bool _registeredForOutputVoice;
    _Bool _registeredForSupportedLanguages;
    NSObject<OS_dispatch_queue> *_navTokenQueue;
    _Bool _navTokenIsValid;
    int _navToken;
}

+ (id)sharedPreferences;
- (void).cxx_destruct;
- (_Bool)cardLoggingEnabled;
- (void)setCardLoggingEnabled:(_Bool)arg1;
- (_Bool)shouldLogForQA;
- (_Bool)fileLoggingIsEnabled;
- (void)setFileLoggingIsEnabled:(_Bool)arg1;
- (void)_setLoggingDefaultValue:(id)arg1 forKey:(id)arg2;
- (void)setCurrentNavigationState:(unsigned int)arg1;
- (unsigned int)currentNavigationState;
- (void)setValue:(id)arg1 forSessionContextKey:(id)arg2;
- (id)valueForSessionContextPreferenceKey:(id)arg1;
- (void)_registerForNavStatusIfNeeded;
- (void)setUseDeviceSpeakerForTTS:(int)arg1;
- (int)useDeviceSpeakerForTTS;
- (void)setOutputVoice:(id)arg1;
- (id)outputVoice;
- (void)setInProgressOutputVoice:(id)arg1;
- (id)inProgressOutputVoice;
- (void)synchronizeVoiceServicesLanguageCode;
- (void)setLanguageCode:(id)arg1;
- (id)_bestSupportedLanguageCodeForLanguageCodes:(id)arg1 isGoodFit:(_Bool *)arg2;
- (_Bool)_languageCode:(id)arg1 isGoodFitForPreferredLanguages:(id)arg2;
- (id)bestSupportedLanguageCodeForLanguageCode:(id)arg1;
- (id)allSiriLanguageCodesForSystemLanguageCode:(id)arg1 isGoodFit:(_Bool *)arg2;
- (id)_bestSupportedLanguageCodeForLanguageCode:(id)arg1 isGoodFit:(_Bool *)arg2;
- (id)_languagePreferencesForCurrentSystemConfiguration;
- (_Bool)isLocaleIdentifierNativelySupported:(id)arg1;
- (_Bool)isCurrentLocaleNativelySupported;
- (id)languageCode;
- (void)setAssistantLanguageForceRTL:(_Bool)arg1;
- (_Bool)assistantLanguageForceRTL;
- (void)setDisableAssistantWhilePasscodeLocked:(_Bool)arg1;
- (_Bool)disableAssistantWhilePasscodeLocked;
- (void)setApplySASToFirstPartyDomains:(_Bool)arg1;
- (_Bool)applySASToFirstPartyDomains;
- (void)setUseSASAutoSelectionFeature:(_Bool)arg1;
- (_Bool)useSASAutoSelectionFeature;
- (void)setSiriKitEnabledForNativeNotes:(_Bool)arg1;
- (_Bool)siriKitEnabledForNativeNotes;
- (void)setSiriKitEnabledForNativeCalling:(_Bool)arg1;
- (_Bool)siriKitEnabledForNativeCalling;
- (void)setSiriKitEnabledForNativeMessages:(_Bool)arg1;
- (_Bool)siriKitEnabledForNativeMessages;
- (void)setSiriDebugUIEnabled:(_Bool)arg1;
- (_Bool)siriDebugUIEnabled;
- (void)setLimitedAudioLoggingEnabled:(_Bool)arg1;
- (_Bool)limitedAudioLoggingEnabled;
- (void)setMyriadDeviceGroup:(id)arg1;
- (id)myriadDeviceGroup;
- (void)setMyriadDuckingEnabled:(_Bool)arg1;
- (_Bool)myriadDuckingEnabled;
- (void)setMyriadCoordinationEnabled:(_Bool)arg1;
- (_Bool)myriadCoordinationEnabled;
- (void)setStreamingDictationEnabled:(_Bool)arg1;
- (_Bool)streamingDictationEnabled;
- (void)setManualEndpointingThreshold:(id)arg1;
- (id)manualEndpointingThreshold;
- (void)setIgnoreServerManualEndpointingThreshold:(_Bool)arg1;
- (_Bool)ignoreServerManualEndpointingThreshold;
- (void)setActivitySummaryReportDateToNow;
- (id)activitySummaryReportDate;
- (id)horsemanSupplementalLanguageDictionary;
- (id)supplementalLanguagesModificationDate;
- (id)_supplementalLanguagesDictionary;
- (id)supplementalLanguages;
- (id)supplementalLanguagesForProduct:(id)arg1 forBuildVersion:(id)arg2;
- (id)supplementalLanguageDictionaryForProduct:(id)arg1;
- (void)_setSupplementalLanguages:(id)arg1 forProduct:(id)arg2 forBuildVersion:(id)arg3;
- (void)_setSupplementalLanguageDictionary:(id)arg1 forProduct:(id)arg2;
- (id)cloudSyncEnabledModificationDate;
- (void)setCloudSyncEnabled:(_Bool)arg1;
- (_Bool)cloudSyncEnabled;
- (void)_setSuppressDictationOptInLocal:(_Bool)arg1;
- (void)setSuppressDictationOptIn:(_Bool)arg1;
- (_Bool)suppressDictationOptIn;
- (void)setSuppressAssistantOptIn:(_Bool)arg1;
- (_Bool)suppressAssistantOptIn;
- (void)setShowsHoldToTalkIndicator:(_Bool)arg1;
- (_Bool)showsHoldToTalkIndicator;
- (void)setDebugButtonIsEnabled:(_Bool)arg1;
- (_Bool)debugButtonIsEnabled;
- (void)setShowServerOnUI:(_Bool)arg1;
- (_Bool)showServerOnUI;
- (void)resetSessionLanguage;
- (void)getOfflineDictationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)setDictationIsEnabled:(_Bool)arg1;
- (void)setAssistantIsEnabled:(_Bool)arg1;
- (void)_setDictationIsEnabledLocal:(_Bool)arg1;
- (void)_setAssistantIsEnabledLocal:(_Bool)arg1;
- (_Bool)legacyLoggingEnabled;
- (void)setOfflineDictationProfileOverridePath:(id)arg1;
- (id)offlineDictationProfileOverridePath;
- (void)setOfflineDictationOverride:(_Bool)arg1;
- (_Bool)offlineDictationOverride;
- (_Bool)dictationIsEnabled;
- (_Bool)assistantIsEnabled;
- (void)_registerForSupportedLanguageChangeNotifications;
- (void)_registerForOutputVoice;
- (void)_registerForLanguageCodeChangeNotifications;
- (void)_registerForInteralPrefs;
- (void)synchronize;
- (void)dealloc;
- (id)init;
- (void)_supportedLanguagesDidChangeExternally;
- (void)_ouputVoiceDidChangeExternally;
- (void)_languageCodeDidChangeExternally;
- (void)_internalPreferencesDidChangeExternally;
- (void)_preferencesDidChangeExternally;
- (void)setRespectsSystemMute:(_Bool)arg1;
- (_Bool)respectsSystemMute;
- (void)setHandsFreeMode:(int)arg1;
- (int)handsFreeMode;

@end
