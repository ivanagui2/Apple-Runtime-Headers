//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface CPLAccountFlags : PBCodable <NSCopying>
{
    long long _version;
    int _reason;
    _Bool _defaultHEVC;
    struct {
        unsigned int version:1;
        unsigned int reason:1;
        unsigned int defaultHEVC:1;
    } _has;
}

@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic) _Bool defaultHEVC; // @synthesize defaultHEVC=_defaultHEVC;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasVersion;
- (int)StringAsReason:(id)arg1;
- (id)reasonAsString:(int)arg1;
@property(nonatomic) _Bool hasReason;
@property(nonatomic) int reason; // @synthesize reason=_reason;
@property(nonatomic) _Bool hasDefaultHEVC;

@end
