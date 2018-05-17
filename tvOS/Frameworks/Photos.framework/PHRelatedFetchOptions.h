//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, PHAsset;

@interface PHRelatedFetchOptions : NSObject
{
    _Bool _enableDiversity;
    _Bool _debugInfoEnabled;
    NSArray *_excludedAssetCollections;
    PHAsset *_referenceAsset;
    unsigned long long _fetchLimit;
}

@property(nonatomic, getter=isDebugInfoEnabled) _Bool debugInfoEnabled; // @synthesize debugInfoEnabled=_debugInfoEnabled;
@property(nonatomic) _Bool enableDiversity; // @synthesize enableDiversity=_enableDiversity;
@property(nonatomic) unsigned long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(retain, nonatomic) PHAsset *referenceAsset; // @synthesize referenceAsset=_referenceAsset;
@property(retain, nonatomic) NSArray *excludedAssetCollections; // @synthesize excludedAssetCollections=_excludedAssetCollections;
- (void).cxx_destruct;

@end
