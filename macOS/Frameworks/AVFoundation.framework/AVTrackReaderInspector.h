//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAssetTrackInspector.h>

@class AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVTrackReaderInspector : AVAssetTrackInspector
{
    struct OpaqueFigFormatReader *_formatReader;
    struct OpaqueFigTrackReader *_trackReader;
    long long _copySampleCursorServiceOnce;
    struct OpaqueFigSampleCursorService *_figSampleCursorService;
    BOOL _sampleCursorTimeAccuracyIsExact;
    int _trackID;
    unsigned int _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (id)_trackReferences;
- (long long)provisionalAlternateGroupID;
- (long long)defaultAlternateGroupID;
- (long long)alternateGroupID;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)segmentForTrackTime:(CDStruct_1b6d18a9)arg1;
- (id)segments;
- (CDStruct_1b6d18a9)minSampleDuration;
- (float)nominalFrameRate;
- (id)loudnessInfo;
- (float)preferredVolume;
- (long long)layer;
- (struct CGAffineTransform)preferredTransform;
- (struct CGSize)dimensions;
- (struct CGSize)naturalSize;
- (id)extendedLanguageTag;
- (id)mediaCharacteristics;
- (id)languageCode;
- (float)estimatedDataRate;
- (int)naturalTimeScale;
- (BOOL)requiresFrameReordering;
- (CDStruct_e83c9415)timeRange;
- (long long)totalSampleDataLength;
- (int)decodabilityValidationResult;
- (BOOL)isDecodable;
- (int)playabilityValidationResult;
- (BOOL)isPlayable;
- (BOOL)isSelfContained;
- (BOOL)isEnabled;
- (id)formatDescriptions;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;
- (struct OpaqueFigSampleCursorService *)_getFigSampleCursorServiceReportingTimeAccuracy:(char *)arg1;
- (struct OpaqueFigTrackReader *)_figTrackReader;
- (id)mediaType;
- (unsigned int)_figMediaType;
- (int)trackID;
- (id)asset;
- (void)finalize;
- (void)dealloc;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;

@end

