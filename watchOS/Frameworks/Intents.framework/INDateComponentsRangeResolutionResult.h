//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntentResolutionResult.h>

#import "INDateComponentsRangeResolutionResultExport.h"

@class NSString;

@interface INDateComponentsRangeResolutionResult : INIntentResolutionResult <INDateComponentsRangeResolutionResultExport>
{
}

+ (id)confirmationRequiredWithDateComponentsRangeToConfirm:(id)arg1;
+ (id)disambiguationWithDateComponentsRangesToDisambiguate:(id)arg1;
+ (id)successWithResolvedDateComponentsRange:(id)arg1;
+ (id)unsupportedWithReason:(unsigned int)arg1 alternativeDateComponentsRanges:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
