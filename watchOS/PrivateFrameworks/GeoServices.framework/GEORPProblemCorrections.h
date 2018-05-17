//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEORPCorrectedCoordinate, GEORPCorrectedLabel, GEORPCorrectedSearch, GEORPDirectionsProblem, GEORPMapLocation, GEORPPlaceProblem, NSMutableArray, NSString;

@interface GEORPProblemCorrections : PBCodable <NSCopying>
{
    NSString *_comments;
    GEORPCorrectedCoordinate *_correctedCoordinate;
    NSMutableArray *_correctedFields;
    NSMutableArray *_correctedFlags;
    GEORPCorrectedLabel *_correctedLabel;
    GEORPMapLocation *_correctedMapLocation;
    GEORPCorrectedSearch *_correctedSearch;
    GEORPDirectionsProblem *_directionsProblem;
    NSMutableArray *_photoWithMetadatas;
    GEORPPlaceProblem *_placeProblem;
    _Bool _delayed;
    struct {
        unsigned int delayed:1;
    } _has;
}

+ (Class)correctedFlagType;
+ (Class)photoWithMetadataType;
+ (Class)correctedFieldType;
@property(retain, nonatomic) NSMutableArray *correctedFlags; // @synthesize correctedFlags=_correctedFlags;
@property(nonatomic) _Bool delayed; // @synthesize delayed=_delayed;
@property(retain, nonatomic) NSMutableArray *photoWithMetadatas; // @synthesize photoWithMetadatas=_photoWithMetadatas;
@property(retain, nonatomic) GEORPDirectionsProblem *directionsProblem; // @synthesize directionsProblem=_directionsProblem;
@property(retain, nonatomic) GEORPPlaceProblem *placeProblem; // @synthesize placeProblem=_placeProblem;
@property(retain, nonatomic) NSString *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) GEORPMapLocation *correctedMapLocation; // @synthesize correctedMapLocation=_correctedMapLocation;
@property(retain, nonatomic) GEORPCorrectedSearch *correctedSearch; // @synthesize correctedSearch=_correctedSearch;
@property(retain, nonatomic) GEORPCorrectedCoordinate *correctedCoordinate; // @synthesize correctedCoordinate=_correctedCoordinate;
@property(retain, nonatomic) GEORPCorrectedLabel *correctedLabel; // @synthesize correctedLabel=_correctedLabel;
@property(retain, nonatomic) NSMutableArray *correctedFields; // @synthesize correctedFields=_correctedFields;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)correctedFlagAtIndex:(unsigned int)arg1;
- (unsigned int)correctedFlagsCount;
- (void)addCorrectedFlag:(id)arg1;
- (void)clearCorrectedFlags;
@property(nonatomic) _Bool hasDelayed;
- (id)photoWithMetadataAtIndex:(unsigned int)arg1;
- (unsigned int)photoWithMetadatasCount;
- (void)addPhotoWithMetadata:(id)arg1;
- (void)clearPhotoWithMetadatas;
@property(readonly, nonatomic) _Bool hasDirectionsProblem;
@property(readonly, nonatomic) _Bool hasPlaceProblem;
@property(readonly, nonatomic) _Bool hasComments;
@property(readonly, nonatomic) _Bool hasCorrectedMapLocation;
@property(readonly, nonatomic) _Bool hasCorrectedSearch;
@property(readonly, nonatomic) _Bool hasCorrectedCoordinate;
@property(readonly, nonatomic) _Bool hasCorrectedLabel;
- (id)correctedFieldAtIndex:(unsigned int)arg1;
- (unsigned int)correctedFieldsCount;
- (void)addCorrectedField:(id)arg1;
- (void)clearCorrectedFields;

@end
