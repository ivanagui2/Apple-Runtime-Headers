//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriInstrumentation/NSCopying-Protocol.h>

@class SISchemaViewIDType;

@interface SISchemaInvocation : PBCodable <NSCopying>
{
    int _invocationAction;
    int _invocationSource;
    int _viewElementID;
    SISchemaViewIDType *_viewID;
    struct {
        unsigned int invocationAction:1;
        unsigned int invocationSource:1;
        unsigned int viewElementID:1;
    } _has;
}

@property(nonatomic) int viewElementID; // @synthesize viewElementID=_viewElementID;
@property(retain, nonatomic) SISchemaViewIDType *viewID; // @synthesize viewID=_viewID;
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
@property(nonatomic) _Bool hasViewElementID;
@property(readonly, nonatomic) _Bool hasViewID;
- (int)StringAsInvocationSource:(id)arg1;
- (id)invocationSourceAsString:(int)arg1;
@property(nonatomic) _Bool hasInvocationSource;
@property(nonatomic) int invocationSource; // @synthesize invocationSource=_invocationSource;
- (int)StringAsInvocationAction:(id)arg1;
- (id)invocationActionAsString:(int)arg1;
@property(nonatomic) _Bool hasInvocationAction;
@property(nonatomic) int invocationAction; // @synthesize invocationAction=_invocationAction;

@end

