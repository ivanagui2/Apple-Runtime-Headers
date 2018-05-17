//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface NTPBUserIgnoreFavoritesSuggestion : PBCodable <NSCopying>
{
    int _ignoreLocation;
    NSString *_ignoredFeedId;
    int _ignoredFeedType;
    int _suggestionPositionWhenIgnored;
    struct {
        unsigned int ignoreLocation:1;
        unsigned int ignoredFeedType:1;
        unsigned int suggestionPositionWhenIgnored:1;
    } _has;
}

@property(nonatomic) int suggestionPositionWhenIgnored; // @synthesize suggestionPositionWhenIgnored=_suggestionPositionWhenIgnored;
@property(retain, nonatomic) NSString *ignoredFeedId; // @synthesize ignoredFeedId=_ignoredFeedId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSuggestionPositionWhenIgnored;
@property(readonly, nonatomic) _Bool hasIgnoredFeedId;
@property(nonatomic) _Bool hasIgnoreLocation;
@property(nonatomic) int ignoreLocation; // @synthesize ignoreLocation=_ignoreLocation;
@property(nonatomic) _Bool hasIgnoredFeedType;
@property(nonatomic) int ignoredFeedType; // @synthesize ignoredFeedType=_ignoredFeedType;

@end
