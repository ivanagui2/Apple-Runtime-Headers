//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaConversionService/PHMediaFormatConversionRequest.h>

@interface PHMediaFormatConversionCompositeRequest : PHMediaFormatConversionRequest
{
}

- (void)setupProgress;
- (void)postProcessSuccessfulCompositeRequest;
- (void)didFinishProcessing;
- (void)propagateRequestOptionsToSubrequests;
- (void)enumerateSubrequests:(CDUnknownBlockType)arg1;
- (void)enqueueSubrequestsOnConversionManager:(id)arg1;
- (id)compositeRequestCommonInitWithError:(id *)arg1;
- (BOOL)requiresFormatConversion;
- (BOOL)areAllSubrequestsPreflighted;
- (void)didPreflightSubrequest:(id)arg1;
- (void)preflightWithConversionManager:(id)arg1;
- (BOOL)isCompositeRequest;

@end

