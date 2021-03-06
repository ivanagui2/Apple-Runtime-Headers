//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields;

@interface GEOActiveTileSet : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    struct GEOTileSetRegion *_availableTiles;
    unsigned int _availableTilesCount;
    unsigned int _availableTilesSpace;
    NSString *_baseURL;
    int _checksumType;
    NSMutableArray *_countryRegionWhitelists;
    NSString *_localizationURL;
    int _requestStyle;
    int _scale;
    NSMutableArray *_sentinelTiles;
    int _size;
    int _style;
    NSMutableArray *_supportedLanguages;
    unsigned int _timeToLiveSeconds;
    int _updateBehavior;
    unsigned int _version;
    _Bool _useAuthProxy;
    struct {
        unsigned int checksumType:1;
        unsigned int requestStyle:1;
        unsigned int timeToLiveSeconds:1;
        unsigned int updateBehavior:1;
        unsigned int useAuthProxy:1;
    } _has;
}

+ (Class)countryRegionWhitelistType;
+ (Class)supportedLanguageType;
+ (Class)sentinelTileType;
+ (id)buildDisputedBordersQueryItemsForCountry:(id)arg1 region:(id)arg2;
@property(retain, nonatomic) NSMutableArray *countryRegionWhitelists; // @synthesize countryRegionWhitelists=_countryRegionWhitelists;
@property(retain, nonatomic) NSMutableArray *supportedLanguages; // @synthesize supportedLanguages=_supportedLanguages;
@property(retain, nonatomic) NSString *localizationURL; // @synthesize localizationURL=_localizationURL;
@property(retain, nonatomic) NSMutableArray *sentinelTiles; // @synthesize sentinelTiles=_sentinelTiles;
@property(nonatomic) unsigned int timeToLiveSeconds; // @synthesize timeToLiveSeconds=_timeToLiveSeconds;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) int size; // @synthesize size=_size;
@property(nonatomic) int scale; // @synthesize scale=_scale;
@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) NSString *baseURL; // @synthesize baseURL=_baseURL;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasUseAuthProxy;
@property(nonatomic) _Bool useAuthProxy; // @synthesize useAuthProxy=_useAuthProxy;
- (int)StringAsRequestStyle:(id)arg1;
- (id)requestStyleAsString:(int)arg1;
@property(nonatomic) _Bool hasRequestStyle;
@property(nonatomic) int requestStyle; // @synthesize requestStyle=_requestStyle;
- (int)StringAsChecksumType:(id)arg1;
- (id)checksumTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasChecksumType;
@property(nonatomic) int checksumType; // @synthesize checksumType=_checksumType;
- (id)countryRegionWhitelistAtIndex:(unsigned int)arg1;
- (unsigned int)countryRegionWhitelistsCount;
- (void)addCountryRegionWhitelist:(id)arg1;
- (void)clearCountryRegionWhitelists;
- (int)StringAsUpdateBehavior:(id)arg1;
- (id)updateBehaviorAsString:(int)arg1;
@property(nonatomic) _Bool hasUpdateBehavior;
@property(nonatomic) int updateBehavior; // @synthesize updateBehavior=_updateBehavior;
- (id)supportedLanguageAtIndex:(unsigned int)arg1;
- (unsigned int)supportedLanguagesCount;
- (void)addSupportedLanguage:(id)arg1;
- (void)clearSupportedLanguages;
@property(readonly, nonatomic) _Bool hasLocalizationURL;
- (id)sentinelTileAtIndex:(unsigned int)arg1;
- (unsigned int)sentinelTilesCount;
- (void)addSentinelTile:(id)arg1;
- (void)clearSentinelTiles;
- (void)setAvailableTiles:(struct GEOTileSetRegion *)arg1 count:(unsigned int)arg2;
- (struct GEOTileSetRegion)availableTilesAtIndex:(unsigned int)arg1;
- (void)addAvailableTiles:(struct GEOTileSetRegion)arg1;
- (void)clearAvailableTiles;
@property(readonly, nonatomic) struct GEOTileSetRegion *availableTiles;
@property(readonly, nonatomic) unsigned int availableTilesCount;
@property(nonatomic) _Bool hasTimeToLiveSeconds;
- (int)StringAsSize:(id)arg1;
- (id)sizeAsString:(int)arg1;
- (int)StringAsScale:(id)arg1;
- (id)scaleAsString:(int)arg1;
- (int)StringAsStyle:(id)arg1;
- (id)styleAsString:(int)arg1;
@property(readonly, nonatomic) _Bool hasBaseURL;
- (void)dealloc;
- (void)_resetBestLanguage;
- (_Bool)isEquivalentTileSet:(id)arg1;
- (id)disputedBordersQueryItemsForCountry:(id)arg1 region:(id)arg2;
- (_Bool)isDisputedBordersWhitelistedForCountry:(id)arg1 region:(id)arg2;
- (id)_bestCountryRegionWhitelistMatchForCountry:(id)arg1 region:(id)arg2;
- (id)_bestLanguageWithOverrideLocale:(id)arg1;
- (id)dataForGenericTileType:(int)arg1 configuration:(id)arg2;
- (_Bool)isAvailableForTileKey:(const struct _GEOTileKey *)arg1;
- (unsigned int)largestZoomLevelLEQ:(unsigned int)arg1 inRect:(CDStruct_90e2a262)arg2;
- (unsigned int)maximumZoomLevelForMapPoint:(CDStruct_c3b9c2ee)arg1;
- (unsigned int)maximumZoomLevelInRect:(CDStruct_90e2a262)arg1;
- (unsigned int)minimumZoomLevelInRect:(CDStruct_90e2a262)arg1;

@end

