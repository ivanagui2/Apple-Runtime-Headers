//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol AVThumbLayerController <NSObject>
@property(copy, nonatomic) CDUnknownBlockType actualTimeUpdateBlock;
@property(readonly) double actualTimeInterval;
@property(readonly) double toleranceAfter;
@property(readonly) double toleranceBefore;
@property(nonatomic) double desiredTimeInterval;
- (_Bool)isExact;
- (void)prefetchForTimes:(NSArray *)arg1;
- (void)prefetchForTime:(double)arg1;
@end
