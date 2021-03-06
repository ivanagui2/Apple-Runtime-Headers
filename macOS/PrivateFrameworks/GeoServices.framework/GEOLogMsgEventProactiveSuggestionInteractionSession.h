//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOLogMsgEventProactiveSuggestionInteractionSession : PBCodable <NSCopying>
{
    int _duration;
    int _interactedItemIndex;
    int _listType;
    NSMutableArray *_proactiveItems;
    struct {
        unsigned int duration:1;
        unsigned int interactedItemIndex:1;
        unsigned int listType:1;
    } _has;
}

+ (Class)proactiveItemType;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSMutableArray *proactiveItems; // @synthesize proactiveItems=_proactiveItems;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasInteractedItemIndex;
@property(nonatomic) int interactedItemIndex; // @synthesize interactedItemIndex=_interactedItemIndex;
@property(nonatomic) BOOL hasDuration;
- (id)proactiveItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)proactiveItemsCount;
- (void)addProactiveItem:(id)arg1;
- (void)clearProactiveItems;
- (int)StringAsListType:(id)arg1;
- (id)listTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasListType;
@property(nonatomic) int listType; // @synthesize listType=_listType;

@end

