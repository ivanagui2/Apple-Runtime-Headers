//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSDateComponents, NSString;

@interface INMessageLinkMetadata : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_siteName;
    NSString *_summary;
    NSString *_title;
    NSString *_itemType;
    NSString *_originalURL;
    NSArray *_imageURLs;
    NSArray *_iconURLs;
    NSString *_creator;
    long long _linkMediaType;
    NSString *_iTunesStoreIdentifier;
    NSString *_iTunesStoreFrontIdentifier;
    NSString *_songTitle;
    NSString *_songArtist;
    NSString *_songAlbum;
    NSString *_albumName;
    NSString *_albumArtist;
    NSString *_musicVideoName;
    NSString *_musicVideoArtist;
    NSString *_artistName;
    NSString *_artistGenre;
    NSString *_playlistName;
    NSString *_playlistCurator;
    NSString *_radioName;
    NSString *_radioCurator;
    NSString *_softwareName;
    NSString *_softwareGenre;
    NSString *_softwarePlatform;
    NSString *_bookName;
    NSString *_bookAuthor;
    NSString *_audioBookName;
    NSString *_audioBookAuthor;
    NSString *_audioBookNarrator;
    NSString *_podcastName;
    NSString *_podcastArtist;
    NSString *_podcastEpisodeName;
    NSString *_podcastEpisodePodcastName;
    NSString *_podcastEpisodeArtist;
    NSDateComponents *_podcastEpisodeReleaseDate;
    NSString *_tvEpisodeEpisodeName;
    NSString *_tvEpisodeSeasonName;
    NSString *_tvEpisodeGenre;
    NSString *_tvSeasonName;
    NSString *_tvSeasonGenre;
    NSString *_movieName;
    NSString *_movieGenre;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSString *movieGenre; // @synthesize movieGenre=_movieGenre;
@property(copy) NSString *movieName; // @synthesize movieName=_movieName;
@property(copy) NSString *tvSeasonGenre; // @synthesize tvSeasonGenre=_tvSeasonGenre;
@property(copy) NSString *tvSeasonName; // @synthesize tvSeasonName=_tvSeasonName;
@property(copy) NSString *tvEpisodeGenre; // @synthesize tvEpisodeGenre=_tvEpisodeGenre;
@property(copy) NSString *tvEpisodeSeasonName; // @synthesize tvEpisodeSeasonName=_tvEpisodeSeasonName;
@property(copy) NSString *tvEpisodeEpisodeName; // @synthesize tvEpisodeEpisodeName=_tvEpisodeEpisodeName;
@property(copy) NSDateComponents *podcastEpisodeReleaseDate; // @synthesize podcastEpisodeReleaseDate=_podcastEpisodeReleaseDate;
@property(copy) NSString *podcastEpisodeArtist; // @synthesize podcastEpisodeArtist=_podcastEpisodeArtist;
@property(copy) NSString *podcastEpisodePodcastName; // @synthesize podcastEpisodePodcastName=_podcastEpisodePodcastName;
@property(copy) NSString *podcastEpisodeName; // @synthesize podcastEpisodeName=_podcastEpisodeName;
@property(copy) NSString *podcastArtist; // @synthesize podcastArtist=_podcastArtist;
@property(copy) NSString *podcastName; // @synthesize podcastName=_podcastName;
@property(copy) NSString *audioBookNarrator; // @synthesize audioBookNarrator=_audioBookNarrator;
@property(copy) NSString *audioBookAuthor; // @synthesize audioBookAuthor=_audioBookAuthor;
@property(copy) NSString *audioBookName; // @synthesize audioBookName=_audioBookName;
@property(copy) NSString *bookAuthor; // @synthesize bookAuthor=_bookAuthor;
@property(copy) NSString *bookName; // @synthesize bookName=_bookName;
@property(copy) NSString *softwarePlatform; // @synthesize softwarePlatform=_softwarePlatform;
@property(copy) NSString *softwareGenre; // @synthesize softwareGenre=_softwareGenre;
@property(copy) NSString *softwareName; // @synthesize softwareName=_softwareName;
@property(copy) NSString *radioCurator; // @synthesize radioCurator=_radioCurator;
@property(copy) NSString *radioName; // @synthesize radioName=_radioName;
@property(copy) NSString *playlistCurator; // @synthesize playlistCurator=_playlistCurator;
@property(copy) NSString *playlistName; // @synthesize playlistName=_playlistName;
@property(copy) NSString *artistGenre; // @synthesize artistGenre=_artistGenre;
@property(copy) NSString *artistName; // @synthesize artistName=_artistName;
@property(copy) NSString *musicVideoArtist; // @synthesize musicVideoArtist=_musicVideoArtist;
@property(copy) NSString *musicVideoName; // @synthesize musicVideoName=_musicVideoName;
@property(copy) NSString *albumArtist; // @synthesize albumArtist=_albumArtist;
@property(copy) NSString *albumName; // @synthesize albumName=_albumName;
@property(copy) NSString *songAlbum; // @synthesize songAlbum=_songAlbum;
@property(copy) NSString *songArtist; // @synthesize songArtist=_songArtist;
@property(copy) NSString *songTitle; // @synthesize songTitle=_songTitle;
@property(copy) NSString *iTunesStoreFrontIdentifier; // @synthesize iTunesStoreFrontIdentifier=_iTunesStoreFrontIdentifier;
@property(copy) NSString *iTunesStoreIdentifier; // @synthesize iTunesStoreIdentifier=_iTunesStoreIdentifier;
@property long long linkMediaType; // @synthesize linkMediaType=_linkMediaType;
@property(copy) NSString *creator; // @synthesize creator=_creator;
@property(copy) NSArray *iconURLs; // @synthesize iconURLs=_iconURLs;
@property(copy) NSArray *imageURLs; // @synthesize imageURLs=_imageURLs;
@property(copy) NSString *originalURL; // @synthesize originalURL=_originalURL;
@property(copy) NSString *itemType; // @synthesize itemType=_itemType;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSString *summary; // @synthesize summary=_summary;
@property(copy) NSString *siteName; // @synthesize siteName=_siteName;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithSiteName:(id)arg1 summary:(id)arg2 title:(id)arg3 itemType:(id)arg4 originalURL:(id)arg5 imageURLs:(id)arg6 iconURLs:(id)arg7 creator:(id)arg8 linkMediaType:(long long)arg9 iTunesStoreIdentifier:(id)arg10 iTunesStoreFrontIdentifier:(id)arg11 songTitle:(id)arg12 songArtist:(id)arg13 songAlbum:(id)arg14 albumName:(id)arg15 albumArtist:(id)arg16 musicVideoName:(id)arg17 musicVideoArtist:(id)arg18 artistName:(id)arg19 artistGenre:(id)arg20 playlistName:(id)arg21 playlistCurator:(id)arg22 radioName:(id)arg23 radioCurator:(id)arg24 softwareName:(id)arg25 softwareGenre:(id)arg26 softwarePlatform:(id)arg27 bookName:(id)arg28 bookAuthor:(id)arg29 audioBookName:(id)arg30 audioBookAuthor:(id)arg31 audioBookNarrator:(id)arg32 podcastName:(id)arg33 podcastArtist:(id)arg34 podcastEpisodeName:(id)arg35 podcastEpisodePodcastName:(id)arg36 podcastEpisodeArtist:(id)arg37 podcastEpisodeReleaseDate:(id)arg38 tvEpisodeEpisodeName:(id)arg39 tvEpisodeSeasonName:(id)arg40 tvEpisodeGenre:(id)arg41 tvSeasonName:(id)arg42 tvSeasonGenre:(id)arg43 movieName:(id)arg44 movieGenre:(id)arg45;
- (id)init;

@end
