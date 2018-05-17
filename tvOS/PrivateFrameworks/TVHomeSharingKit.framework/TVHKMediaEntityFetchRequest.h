//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDictionary, NSPredicate, NSSet, TVHKDMAPPlaylistIdentifier;

@interface TVHKMediaEntityFetchRequest : NSObject <NSCopying>
{
    _Bool _containsMediaEntityTypePredicate;
    _Bool _forceMediaServerFetch;
    unsigned long long _mediaEntitySubtype;
    unsigned long long _mediaCategoryType;
    unsigned long long _mediaCollectionType;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    NSSet *_properties;
    NSDictionary *_options;
    unsigned long long _protocol;
    TVHKDMAPPlaylistIdentifier *_playlistIdentifier;
    NSArray *_playlistItemMediaCategoryTypes;
    NSDictionary *_mediaCategoryByMediaCollectionPersistentID;
    unsigned long long _fromRevision;
    unsigned long long _toRevision;
    NSSet *_metadataNames;
    NSArray *_queryTerms;
    NSPredicate *_additionalPredicate;
    struct _NSRange _range;
}

+ (unsigned long long)_protocolFromMediaCategoryType:(unsigned long long)arg1;
+ (id)_requiredProperties;
+ (id)playlistItemsFetchRequestWithPlaylistIdentifier:(id)arg1;
+ (id)playlistItemsFetchRequestWithPlaylist:(id)arg1;
+ (id)playlistsFetchRequestWithPlaylistItemMediaCategoryTypes:(id)arg1;
+ (id)_mediaCollectionsFetchRequestWithMediaCollectionType:(unsigned long long)arg1 mediaCategoryByMediaCollectionPersistentID:(id)arg2;
+ (id)mediaCollectionsFetchRequestWithMediaCollectionType:(unsigned long long)arg1 mediaCategoryType:(unsigned long long)arg2;
+ (id)_mediaItemsFetchRequestWithProtocol:(unsigned long long)arg1;
+ (id)mediaItemsFetchRequestWithMediaCategoryType:(unsigned long long)arg1;
@property(nonatomic) _Bool forceMediaServerFetch; // @synthesize forceMediaServerFetch=_forceMediaServerFetch;
@property(copy, nonatomic) NSPredicate *additionalPredicate; // @synthesize additionalPredicate=_additionalPredicate;
@property(copy, nonatomic) NSArray *queryTerms; // @synthesize queryTerms=_queryTerms;
@property(copy, nonatomic) NSSet *metadataNames; // @synthesize metadataNames=_metadataNames;
@property(nonatomic) _Bool containsMediaEntityTypePredicate; // @synthesize containsMediaEntityTypePredicate=_containsMediaEntityTypePredicate;
@property(nonatomic) unsigned long long toRevision; // @synthesize toRevision=_toRevision;
@property(nonatomic) unsigned long long fromRevision; // @synthesize fromRevision=_fromRevision;
@property(copy, nonatomic) NSDictionary *mediaCategoryByMediaCollectionPersistentID; // @synthesize mediaCategoryByMediaCollectionPersistentID=_mediaCategoryByMediaCollectionPersistentID;
@property(copy, nonatomic) NSArray *playlistItemMediaCategoryTypes; // @synthesize playlistItemMediaCategoryTypes=_playlistItemMediaCategoryTypes;
@property(retain, nonatomic) TVHKDMAPPlaylistIdentifier *playlistIdentifier; // @synthesize playlistIdentifier=_playlistIdentifier;
@property(nonatomic) unsigned long long protocol; // @synthesize protocol=_protocol;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(copy, nonatomic) NSSet *properties; // @synthesize properties=_properties;
@property(copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(copy, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) unsigned long long mediaCollectionType; // @synthesize mediaCollectionType=_mediaCollectionType;
@property(nonatomic) unsigned long long mediaCategoryType; // @synthesize mediaCategoryType=_mediaCategoryType;
@property(nonatomic) unsigned long long mediaEntitySubtype; // @synthesize mediaEntitySubtype=_mediaEntitySubtype;
- (void).cxx_destruct;
- (void)_processComparisonPredicate:(id)arg1;
- (void)_processCompoundPredicate:(id)arg1;
- (void)_processPredicate:(id)arg1;
- (void)_processPredicateRootPredicate;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSPredicate *canonicalPredicate;
- (id)_initPlaylistItemsRequestWithPlaylistIdentifier:(id)arg1;
- (id)_initPlaylistsRequestWithPlaylistItemMediaCategoryTypes:(id)arg1;
- (id)_initMediaCollectionsRequestWithMediaCollectionType:(unsigned long long)arg1 mediaCategoryType:(unsigned long long)arg2;
- (id)_initMediaItemsRequestWithProtocol:(unsigned long long)arg1 mediaCategoryType:(unsigned long long)arg2;
- (id)_initWithProtocol:(unsigned long long)arg1 mediaEntitySubtype:(unsigned long long)arg2;
- (id)init;

@end
