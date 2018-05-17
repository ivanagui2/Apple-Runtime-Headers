//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TVHomeSharingKit/TVHKMediaCollection.h>

@class NSArray, NSString, TVHKDAAPSeasonMediaCollection, TVHKDAAPShowMediaCollectionIdentifier, TVHKMediaEntityType;

__attribute__((visibility("hidden")))
@interface TVHKDAAPShowMediaCollection : TVHKMediaCollection
{
    TVHKMediaEntityType *_type;
    NSString *_sortTitle;
    NSString *_title;
    NSArray *_seasons;
    NSArray *_episodes;
    TVHKDAAPSeasonMediaCollection *_selectedSeason;
    TVHKDAAPShowMediaCollectionIdentifier *_showIdentifier;
    NSArray *_seasonsSortedByAddedDate;
    NSArray *_seasonsSortedByAddedToDate;
    NSString *_seasonsMetadataHash;
}

@property(copy, nonatomic) NSString *seasonsMetadataHash; // @synthesize seasonsMetadataHash=_seasonsMetadataHash;
@property(copy, nonatomic) NSArray *seasonsSortedByAddedToDate; // @synthesize seasonsSortedByAddedToDate=_seasonsSortedByAddedToDate;
@property(copy, nonatomic) NSArray *seasonsSortedByAddedDate; // @synthesize seasonsSortedByAddedDate=_seasonsSortedByAddedDate;
@property(retain, nonatomic) TVHKDAAPShowMediaCollectionIdentifier *showIdentifier; // @synthesize showIdentifier=_showIdentifier;
@property(copy, nonatomic) TVHKDAAPSeasonMediaCollection *selectedSeason; // @synthesize selectedSeason=_selectedSeason;
@property(copy, nonatomic) NSArray *episodes; // @synthesize episodes=_episodes;
@property(copy, nonatomic) NSArray *seasons; // @synthesize seasons=_seasons;
- (id)type;
- (void).cxx_destruct;
- (id)_lastAddedToSeason;
- (id)_firstAddedToSeason;
- (id)_lastAddedSeason;
- (id)_firstAddedSeason;
- (id)metadataKeyPaths;
- (id)selectedMediaCollectionIdentifier;
- (id)mediaCollectionCount;
- (id)mediaItemCount;
- (id)addedToDate;
- (unsigned long long)imageNonPersistentID;
- (unsigned long long)persistentID;
- (unsigned long long)nonPersistentID;
- (unsigned long long)protocol;
- (long long)playedState;
- (void)setPlayedState:(long long)arg1;
- (id)imageIdentifier;
- (id)addedDate;
- (id)genreTitle;
- (id)sortTitle;
- (id)title;
- (id)identifier;
- (id)seasonWithIdentifier:(id)arg1;
- (void)assignSeasons:(id)arg1;
- (id)initWithMediaEntityServer:(id)arg1 title:(id)arg2 sortTitle:(id)arg3;
- (id)initWithMediaEntityServer:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 kind:(id)arg4;

@end
