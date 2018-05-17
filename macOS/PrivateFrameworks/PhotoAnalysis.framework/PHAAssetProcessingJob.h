//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoAnalysis/PHAWorkerJob.h>

@class NSArray, NSMutableDictionary, NSRecursiveLock;

@interface PHAAssetProcessingJob : PHAWorkerJob
{
    NSArray *_assetLocalIdentifiers;
    NSRecursiveLock *_resultsLock;
    NSMutableDictionary *_resultsByAssetLocalIdentifier;
}

@property(readonly, nonatomic) NSMutableDictionary *resultsByAssetLocalIdentifier; // @synthesize resultsByAssetLocalIdentifier=_resultsByAssetLocalIdentifier;
@property(readonly) NSRecursiveLock *resultsLock; // @synthesize resultsLock=_resultsLock;
@property(readonly, nonatomic) NSArray *assetLocalIdentifiers; // @synthesize assetLocalIdentifiers=_assetLocalIdentifiers;
- (void).cxx_destruct;
- (void)reportResult:(unsigned long long)arg1 forAssetLocalIdentifier:(id)arg2;
- (unsigned long long)resultForAssetLocalIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *incompleteAssetLocalIdentifiers;
- (unsigned long long)resultCount;
- (unsigned long long)successfulResultCount;
- (float)completionScore;
- (BOOL)finished;
- (id)statusAsDictionary;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 assetLocalIdentifiers:(id)arg3 library:(id)arg4;
- (id)_resultsCopy;

@end
