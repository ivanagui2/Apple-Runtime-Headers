//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumberFormatter, NSString, _MLTPerfTrace;

@interface _MLTCSVUtils : NSObject
{
    BOOL _finishedReading;
    NSString *_csvPath;
    NSArray *_featureNames;
    unsigned long long _skippedRows;
    unsigned long long _currentIdx;
    NSArray *_data;
    NSNumberFormatter *_numFormatter;
    unsigned long long _batchSize;
    _MLTPerfTrace *_perfLogger;
}

@property(retain) _MLTPerfTrace *perfLogger; // @synthesize perfLogger=_perfLogger;
@property unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(retain) NSNumberFormatter *numFormatter; // @synthesize numFormatter=_numFormatter;
@property(copy) NSArray *data; // @synthesize data=_data;
@property unsigned long long currentIdx; // @synthesize currentIdx=_currentIdx;
@property BOOL finishedReading; // @synthesize finishedReading=_finishedReading;
@property unsigned long long skippedRows; // @synthesize skippedRows=_skippedRows;
@property(copy, nonatomic) NSArray *featureNames; // @synthesize featureNames=_featureNames;
@property(copy, nonatomic) NSString *csvPath; // @synthesize csvPath=_csvPath;
- (void).cxx_destruct;
- (id)getNextDataVectorDict:(id)arg1;
- (id)getNextDataDict;
- (id)getNextDataSet;
- (id)initCSVUtilsWithLocation:(id)arg1 batchSize:(unsigned long long)arg2;

@end

