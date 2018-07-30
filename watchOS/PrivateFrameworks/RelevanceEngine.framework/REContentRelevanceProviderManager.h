//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProviderManager.h>

#import "REMLModelManagerObserver.h"
#import "REPredictorObserver.h"

@class NSString, REMLSentimentAnalyzer;

@interface REContentRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver, REMLModelManagerObserver>
{
    REMLSentimentAnalyzer *_sentimentAnalyzer;
}

+ (Class)_relevanceProviderClass;
+ (id)_features;
- (void).cxx_destruct;
- (void)predictorDidUpdate:(id)arg1;
- (void)modelManagerDidUpdateModel:(id)arg1;
- (void)_closeDataStoresAndObserveChanges;
- (void)_openDataStoresAndObserveChanges;
- (_Bool)_suppportsSentimentAnalysis;
- (_Bool)_suppportsPortarit;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
