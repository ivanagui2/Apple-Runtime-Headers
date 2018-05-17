//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_DPStringRandomizer.h"

@class _DPBiasedCoin;

@interface _DPBitValueRandomizer : NSObject <_DPStringRandomizer>
{
    unsigned long long _p;
    double _epsilon;
    _DPBiasedCoin *_epsilonCoin;
}

+ (id)bitValueRandomizerWithDimensionality:(unsigned long long)arg1 epsilon:(double)arg2;
@property(readonly, nonatomic) _DPBiasedCoin *epsilonCoin; // @synthesize epsilonCoin=_epsilonCoin;
@property(readonly, nonatomic) double epsilon; // @synthesize epsilon=_epsilon;
@property(readonly, nonatomic) unsigned long long p; // @synthesize p=_p;
- (void).cxx_destruct;
- (id)randomizeBitValues:(id)arg1 forKey:(id)arg2;
- (id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3;
- (id)randomizeStrings:(id)arg1 forKey:(id)arg2;
- (id)description;
- (id)randomize:(id)arg1;
- (id)initWithDimensionality:(unsigned long long)arg1 epsilon:(double)arg2;
- (id)init;

@end
