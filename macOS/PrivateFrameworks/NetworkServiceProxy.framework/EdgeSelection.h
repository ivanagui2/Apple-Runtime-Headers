//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSMutableDictionary, NSNumber;

@interface EdgeSelection : NSObject <NSSecureCoding>
{
    NSData *_networkSignature;
    NSNumber *_interfaceType;
    long long _trialCount;
    double _alpha;
    long long _windowSize;
    NSMutableDictionary *_edgeAttributesDict;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSMutableDictionary *edgeAttributesDict; // @synthesize edgeAttributesDict=_edgeAttributesDict;
@property(nonatomic) long long windowSize; // @synthesize windowSize=_windowSize;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) long long trialCount; // @synthesize trialCount=_trialCount;
@property(retain, nonatomic) NSNumber *interfaceType; // @synthesize interfaceType=_interfaceType;
@property(retain, nonatomic) NSData *networkSignature; // @synthesize networkSignature=_networkSignature;
- (void).cxx_destruct;
- (double)_stochasticRewardFromRTT:(double)arg1;
- (void)getAttributesForEdge:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getMinimumLatencyEdge:(CDUnknownBlockType)arg1;
- (void)trainEdgeSelectionModel:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNetworkSignature:(id)arg1 interfaceType:(id)arg2 modelParams:(id)arg3;
- (id)description;

@end
