//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <C2/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface C2MPCloudKitOperationGroupInfo : PBCodable <NSCopying>
{
    NSString *_operationGroupId;
    NSString *_operationGroupName;
    BOOL _operationGroupTriggered;
    struct {
        unsigned int operationGroupTriggered:1;
    } _has;
}

@property(nonatomic) BOOL operationGroupTriggered; // @synthesize operationGroupTriggered=_operationGroupTriggered;
@property(retain, nonatomic) NSString *operationGroupName; // @synthesize operationGroupName=_operationGroupName;
@property(retain, nonatomic) NSString *operationGroupId; // @synthesize operationGroupId=_operationGroupId;
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
@property(nonatomic) BOOL hasOperationGroupTriggered;
@property(readonly, nonatomic) BOOL hasOperationGroupName;
@property(readonly, nonatomic) BOOL hasOperationGroupId;

@end

