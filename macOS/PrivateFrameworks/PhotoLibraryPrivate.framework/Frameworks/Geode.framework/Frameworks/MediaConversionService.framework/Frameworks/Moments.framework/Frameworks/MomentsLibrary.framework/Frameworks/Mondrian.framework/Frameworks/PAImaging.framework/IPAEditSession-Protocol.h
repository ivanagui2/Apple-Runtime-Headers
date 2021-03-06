//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PAImaging/NSObject-Protocol.h>

@class DGDescription, IPAVideoPlaybackSettings, NSData, NSString, NSURL;

@protocol IPAEditSession <NSObject>
@property(readonly) IPAVideoPlaybackSettings *videoPlaybackSettings;
@property(readonly) DGDescription *renderDescription;
@property(readonly) BOOL outputVideoComplementIsAvailable;
@property(readonly) BOOL outputIsAvailable;
@property(readonly) long long outputOrientation;
@property(readonly) struct PFIntSize_st outputSize;
@property(readonly) NSURL *outputVideoComplementFileURL;
@property(readonly) NSURL *outputFileURL;
@property(readonly) BOOL inputIsEmbeddedJPEG;
@property(readonly) BOOL inputVideoComplementIsAvailable;
@property(readonly) BOOL inputIsAvailable;
@property(readonly) BOOL inputIsRAW;
@property(readonly) long long inputOrientation;
@property(readonly) struct PFIntSize_st inputSize;
@property(readonly) NSURL *inputVideoComplementFileURL;
@property(readonly) NSURL *inputFileURL;
@property(readonly) BOOL editSourceIsSupported;
@property(readonly) long long editSource;
@property(readonly) long long editStatus;
@property(readonly) NSString *originatorIdentifier;
@property(readonly) NSData *adjustmentData;
@property(readonly) NSString *adjustmentVersion;
@property(readonly) NSString *adjustmentIdentifier;
- (DGDescription *)originalRenderDescriptionForEditSource:(long long)arg1;
- (long long)inputOrientationForEditSource:(long long)arg1;
- (struct PFIntSize_st)inputSizeForEditSource:(long long)arg1;
- (BOOL)inputVideoComplementIsAvailableForEditSource:(long long)arg1;
- (NSURL *)inputVideoComplementFileURLForEditSource:(long long)arg1;
- (NSURL *)inputFileURLForEditSource:(long long)arg1;
@end

