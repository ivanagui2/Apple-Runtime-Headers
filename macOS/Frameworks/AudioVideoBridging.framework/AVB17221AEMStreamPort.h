//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMPort.h>

#import "NSCopying.h"

@class NSArray;

@interface AVB17221AEMStreamPort : AVB17221AEMPort <NSCopying>
{
    unsigned short numberOfClusters;
    unsigned short baseCluster;
    unsigned short numberOfMaps;
    unsigned short baseMap;
    NSArray *clusters;
    NSArray *maps;
    NSArray *dynamicMappings;
}

@property(copy) NSArray *dynamicMappings; // @synthesize dynamicMappings;
@property(copy) NSArray *maps; // @synthesize maps;
@property(copy) NSArray *clusters; // @synthesize clusters;
@property unsigned short baseMap; // @synthesize baseMap;
@property unsigned short numberOfMaps; // @synthesize numberOfMaps;
@property unsigned short baseCluster; // @synthesize baseCluster;
@property unsigned short numberOfClusters; // @synthesize numberOfClusters;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)renumberDescriptorWithNextIndexes:(id)arg1;
- (void)updateDependentContent;
- (id)debugLogStringWithIndentation:(id)arg1;
- (id)objectLogName;
- (void)appendFixedDescriptorContentToString:(id)arg1 withIndent:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)validChildrenDescriptorTypes;
- (BOOL)isExpectedDescriptorType:(unsigned short)arg1;
- (id)xmlRepresentation;
- (BOOL)updateWithXML:(id)arg1;
- (id)xmlKey;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)arg1;
- (unsigned long long)setDescriptor:(CDUnion_abb5f99a *)arg1;
- (BOOL)updateWithDescriptor:(CDUnion_abb5f99a *)arg1 descriptorLength:(unsigned short)arg2;

@end
