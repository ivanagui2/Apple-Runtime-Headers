//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFCancelable.h"
#import "NSProgressReporting.h"

@class CSSearchQuery, MFPromise, NSLock, NSMutableArray, NSProgress, NSString;

@interface MFLibrarySearchableIndexQuery : NSObject <MFCancelable, NSProgressReporting>
{
    NSLock *_lock;
    NSProgress *_progress;
    NSProgress *_internalProgress;
    MFPromise *_resultsPromise;
    NSMutableArray *_resultsBlocks;
    NSString *_queryString;
    NSString *_logPrefixString;
    NSString *_queryStatusString;
    CSSearchQuery *_query;
}

+ (id)searchWordsForPhrase:(id)arg1;
+ (id)queryStringForPhrase:(id)arg1 attributes:(id)arg2 modifiers:(unsigned long long)arg3;
+ (id)_queryStringForPhrase:(id)arg1 attributes:(id)arg2 modifiers:(unsigned long long)arg3;
+ (id)queryStringByJoiningQueries:(id)arg1 withOperand:(long long)arg2;
+ (id)_modifierStringFromModifiers:(unsigned long long)arg1;
+ (id)_operandStringForOperand:(long long)arg1;
+ (id)queryWithString:(id)arg1 context:(id)arg2;
+ (double)intervalForSpotlightFailureSimulation;
@property(retain, nonatomic) CSSearchQuery *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *queryStatusString; // @synthesize queryStatusString=_queryStatusString;
@property(retain, nonatomic) NSString *logPrefixString; // @synthesize logPrefixString=_logPrefixString;
@property(readonly, copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
- (void)_searchQueryDidComplete;
- (void)_searchQueryDidFailWithError:(id)arg1;
- (void)_searchQueryDidFindItems:(id)arg1;
- (void)_performClientWork:(CDUnknownBlockType)arg1;
- (void)addFailureBlock:(CDUnknownBlockType)arg1;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (void)addResultsBlock:(CDUnknownBlockType)arg1;
- (void)_removeAllResultsBlocks;
- (void)start;
- (void)_cancel;
- (void)cancel;
- (void)_failedWithError:(id)arg1;
- (_Bool)_isCancellationError:(id)arg1;
- (void)_completed;
- (void)_foundItems:(id)arg1;
@property(readonly) NSProgress *progress;
- (id)truncatedDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithQueryString:(id)arg1 context:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
