//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Network/NWPrettyDescription-Protocol.h>

@class NWEndpoint;
@protocol OS_nw_protocol_transform;

@interface NWProtocolTransform : NSObject <NWPrettyDescription>
{
    NSObject<OS_nw_protocol_transform> *_internalTransform;
}

@property(retain) NSObject<OS_nw_protocol_transform> *internalTransform; // @synthesize internalTransform=_internalTransform;
- (void).cxx_destruct;
@property(nonatomic) BOOL disablePathFallback;
@property(nonatomic) int dataMode;
@property(nonatomic) BOOL useTFOHeuristics;
@property(nonatomic) BOOL tfoNoCookie;
@property(nonatomic) BOOL tfo;
@property(nonatomic) int multipathService;
@property(nonatomic) BOOL noProxy;
@property(nonatomic) BOOL prohibitDirect;
@property(nonatomic) unsigned long long fallbackMode;
@property(copy, nonatomic) NWEndpoint *replacementEndpoint;
- (void)appendProtocol:(id)arg1 atLevel:(int)arg2;
- (void)clearProtocolsAtLevel:(int)arg1;
- (void)disableProtocol:(struct nw_protocol_identifier *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)privateDescription;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2;
- (id)initWithCTransform:(id)arg1;
- (id)init;

@end

