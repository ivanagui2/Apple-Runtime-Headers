//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDuet/_DKQuery.h>

#import "_DKExecutableQuery.h"

@class NSDateInterval, NSPredicate, _DKEventStream;

@interface _DKHistogramQuery : _DKQuery <_DKExecutableQuery>
{
    _Bool _isCategory;
    _Bool _includeLocalResults;
    _Bool _includeRemoteResults;
    _DKEventStream *_stream;
    NSDateInterval *_interval;
    CDUnknownBlockType _histogramHandler;
    unsigned int _minimumOccurrencesForInclusion;
    NSPredicate *_predicate;
}

+ (_Bool)supportsSecureCoding;
+ (id)histogramQueryForStream:(id)arg1 interval:(id)arg2 withPredicate:(id)arg3;
+ (id)histogramQueryForStream:(id)arg1 interval:(id)arg2;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) unsigned int minimumOccurrencesForInclusion; // @synthesize minimumOccurrencesForInclusion=_minimumOccurrencesForInclusion;
@property(nonatomic) _Bool includeRemoteResults; // @synthesize includeRemoteResults=_includeRemoteResults;
@property(nonatomic) _Bool includeLocalResults; // @synthesize includeLocalResults=_includeLocalResults;
@property(nonatomic) _Bool isCategory; // @synthesize isCategory=_isCategory;
@property(copy, nonatomic) CDUnknownBlockType histogramHandler; // @synthesize histogramHandler=_histogramHandler;
@property(retain, nonatomic) NSDateInterval *interval; // @synthesize interval=_interval;
@property(retain, nonatomic) _DKEventStream *stream; // @synthesize stream=_stream;
- (void).cxx_destruct;
- (id)handleResults:(id)arg1 error:(id)arg2;
- (id)executeUsingCoreDataStorage:(id)arg1 error:(id *)arg2;
- (id)_fetchRemoteResultsWithStorage:(id)arg1 error:(id *)arg2;
- (id)_histogramFromManagedObjects:(id)arg1;
- (id)_constructFetchRequestPredicate;
- (id)_histogramFromEvents:(id)arg1;
- (id)_valueForEvent:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end
