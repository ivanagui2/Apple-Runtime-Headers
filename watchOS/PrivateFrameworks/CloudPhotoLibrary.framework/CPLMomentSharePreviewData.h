//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface CPLMomentSharePreviewData : PBCodable <NSCopying>
{
    NSString *_cropRectString;
    NSString *_keyAssetIdentifier;
    NSMutableArray *_previewImageDatas;
}

+ (Class)previewImageDataType;
@property(retain, nonatomic) NSString *cropRectString; // @synthesize cropRectString=_cropRectString;
@property(retain, nonatomic) NSString *keyAssetIdentifier; // @synthesize keyAssetIdentifier=_keyAssetIdentifier;
@property(retain, nonatomic) NSMutableArray *previewImageDatas; // @synthesize previewImageDatas=_previewImageDatas;
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
@property(readonly, nonatomic) _Bool hasCropRectString;
@property(readonly, nonatomic) _Bool hasKeyAssetIdentifier;
- (id)previewImageDataAtIndex:(unsigned int)arg1;
- (unsigned int)previewImageDatasCount;
- (void)addPreviewImageData:(id)arg1;
- (void)clearPreviewImageDatas;

@end
