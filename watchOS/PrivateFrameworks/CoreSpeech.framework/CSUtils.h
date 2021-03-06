//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSUtils : NSObject
{
}

+ (id)timeStampWithSaltGrain;
+ (id)deviceBuildVersion;
+ (id)deviceUserAssignedName;
+ (double)systemUpTime;
+ (id)deviceProductVersion;
+ (id)deviceProductType;
+ (id)getFixedHighPrioritySerialQueueWithLabel:(id)arg1;
+ (id)getFixedPrioritySerialQueueWithLabel:(id)arg1 fixedPriority:(int)arg2;
+ (id)rootQueueWithFixedPriority:(int)arg1;
+ (_Bool)supportCircularBuffer;
+ (_Bool)shouldDeinterleaveAudioOnCS;
+ (_Bool)supportExternalTrigger;
+ (_Bool)supportJarvisVoiceTrigger;
+ (_Bool)supportPacketDecoding;
+ (_Bool)hasRemoteCoreSpeech;
+ (_Bool)supportSessionActivateDelay;
+ (_Bool)shouldDelayPhaticForMyriadDecision;
+ (_Bool)supportPhatic;
+ (_Bool)supportPremiumModel;
+ (_Bool)supportRaiseToSpeak;
+ (_Bool)supportTTS;
+ (_Bool)supportSAT;
+ (_Bool)supportImplicitTraining;
+ (_Bool)supportSmartVolume;
+ (_Bool)supportHybridEndpointer;
+ (_Bool)supportCSTwoShotDecision;
+ (_Bool)supportSelfTriggerSuppression;
+ (_Bool)supportOpportunisticZLL;
+ (_Bool)supportPremiumAssets;
+ (_Bool)supportKeywordDetector;
+ (_Bool)supportContinuousVoiceTrigger;
+ (_Bool)shouldRunVTOnCS;
+ (id)_contentsOfDirectoryAtURL:(id)arg1 matchingPattern:(id)arg2 includingPropertiesForKeys:(id)arg3 error:(id *)arg4;
+ (void)_sortedURLsInDirectory:(id)arg1 matchingPattern:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)URLsInDirectory:(id)arg1 matchingPattern:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)clearLogFilesInDirectory:(id)arg1 matchingPattern:(id)arg2 exceedNumber:(unsigned int)arg3;
+ (void)removeLogFilesInDirectory:(id)arg1 matchingPattern:(id)arg2 beforeDays:(float)arg3;
+ (id)getSiriLanguageWithFallback:(id)arg1;
+ (id)convertToShortLPCMBufFromFloatLPCMBuf:(id)arg1;
+ (id)convertToFloatLPCMBufFromShortLPCMBuf:(id)arg1;
+ (_Bool)isCurrentDeviceCompatibleWithVoiceProfileAt:(id)arg1;
+ (_Bool)isCurrentDeviceCompatibleWithNewerVoiceProfileAt:(id)arg1;
+ (unsigned int)deviceCategoryForDeviceProductType:(id)arg1;
+ (id)deviceCategoryStringRepresentationForCategoryType:(unsigned int)arg1;
+ (void)updateVoiceProfileVersionFileForLanguageCode:(id)arg1;
+ (_Bool)migrateVoiceProfileToVersion:(unsigned int)arg1 forLanguageCode:(id)arg2;
+ (_Bool)checkIfMigrationNecessaryForCompatibilityVersion:(unsigned int)arg1 forLanguageCode:(id)arg2;
+ (unsigned int)getVoiceProfileProductCategoryFromVersionFilePath:(id)arg1;
+ (unsigned int)getCurrentVoiceProfileProductCategoryForLanguageCode:(id)arg1;
+ (unsigned int)getVoiceProfileVersionFromVersionFilePath:(id)arg1;
+ (unsigned int)getCurrentVoiceProfileVersionForLanguageCode:(id)arg1;
+ (id)getProfileVersionFilePathForLanguageCode:(id)arg1;
+ (_Bool)isSpidAssetsAvailable;
+ (void)streamAudioFromFileUrl:(id)arg1 audioStreamBasicDescriptor:(struct AudioStreamBasicDescription)arg2 samplesPerStreamChunk:(unsigned int)arg3 audioDataAvailableHandler:(CDUnknownBlockType)arg4;
+ (id)spidAudioTrainUtterancesDir;
+ (id)spIdSiriDebugVoiceProfileRootDirectoryForProfile:(id)arg1 locale:(id)arg2;
+ (id)spIdSiriDebugTrainedUsersFilePathForLocale:(id)arg1;
+ (id)spIdSiriDebugVoiceProfileStoreRootDirectoryForLocale:(id)arg1;
+ (id)spIdSiriDebugVoiceProfileStoreRootDirectory;
+ (id)spIdDataRootDirectory;
+ (id)spIdSiriDebugVTDataDirectory;
+ (_Bool)spIdAudioLogsCountLimitReached;
+ (id)spIdAudioLogsDir2;
+ (id)spIdAudioLogsDir;
+ (void)createDirectoryIfDoesNotExist:(id)arg1;
+ (id)spIdVoiceProfileImportRootDir;
+ (id)spIdSATModelDirForLocale:(id)arg1 spidType:(unsigned int)arg2;
+ (id)spIdSATModelDirForLocale:(id)arg1 profileId:(id)arg2 spidType:(unsigned int)arg3;
+ (id)spIdSATAudioDirForLocale:(id)arg1 spidType:(unsigned int)arg2;
+ (id)spIdSATAudioDirForLocale:(id)arg1 profileId:(id)arg2 spidType:(unsigned int)arg3;
+ (id)spIdSATImplicitAudioCacheDirForLocale:(id)arg1 profileId:(id)arg2;
+ (id)spIdSATDirForLocale:(id)arg1 profileId:(id)arg2 spidType:(unsigned int)arg3;
+ (id)spIdSATDirForLocale:(id)arg1 profileId:(id)arg2;
+ (id)spIdSATDirForLocale:(id)arg1;
+ (id)satConfigFileNameForCSSpIdType:(unsigned int)arg1;
+ (id)stringForCSSATRunMode:(unsigned int)arg1;
+ (unsigned int)spIdTypeForString:(id)arg1;
+ (id)stringForCSSpIdType:(unsigned int)arg1;
+ (id)stringForInvocationStyle:(unsigned int)arg1;
+ (_Bool)hasRemoteBuiltInMic;
+ (id)alertMuteBehaviorDict;
+ (id)alertMuteSettings;
+ (id)speexRecordSettings;
+ (id)opusRecordSettings;
+ (id)lpcmRecordSettings;
+ (id)jarvisVoiceTriggerRecordContext:(id)arg1;
+ (id)voiceTriggerRecordContext;
+ (struct AudioStreamBasicDescription)aiffFileASBD;
+ (struct AudioStreamBasicDescription)utteranceFileASBD;
+ (struct AudioStreamBasicDescription)lpcmNarrowBandASBD;
+ (struct AudioStreamBasicDescription)lpcmASBD;
+ (struct AudioStreamBasicDescription)lpcmNonInterleavedASBD;
+ (struct AudioStreamBasicDescription)lpcmInterleavedASBD;
+ (struct AudioStreamBasicDescription)opusNarrowBandASBD;
+ (struct AudioStreamBasicDescription)opusASBD;
+ (struct AudioStreamBasicDescription)lpcmInt16NarrowBandASBD;
+ (struct AudioStreamBasicDescription)lpcmInt16ASBD;
+ (_Bool)readAudioChunksFrom:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)iterateBitset:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
+ (unsigned int)getNumElementInBitset:(unsigned int)arg1;
+ (unsigned long long)macHostTimeFromBridgeHostTime:(unsigned long long)arg1;
+ (unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3;
+ (unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3;
+ (double)getHostClockFrequency;
+ (double)hostTimeToTimeInterval:(unsigned long long)arg1;
+ (float)hostTimeToSeconds:(unsigned long long)arg1;
+ (unsigned long long)secondsToHostTime:(float)arg1;
+ (id)recordContextString:(id)arg1;
+ (_Bool)isRecordContextJarvisButtonPress:(id)arg1;
+ (_Bool)isRecordContextJarvisVoiceTrigger:(id)arg1;
+ (_Bool)isRecordContextRaiseToSpeak:(id)arg1;
+ (_Bool)isRecordingContextBTDT:(id)arg1;
+ (_Bool)isRecordingContextHDVC:(id)arg1;
+ (_Bool)isRecordContextSpeakerIdTrainingTrigger:(id)arg1;
+ (_Bool)isRecordContextAutoPrompt:(id)arg1;
+ (_Bool)isRecordContextVoiceTrigger:(id)arg1;
+ (id)assetHashInResourcePath:(id)arg1;

@end

