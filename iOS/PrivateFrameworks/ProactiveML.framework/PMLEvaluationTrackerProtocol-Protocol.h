//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PMLPlistAndChunksSerializableProtocol.h"

@class AWDProactiveModelFittingEvalMetrics, AWDProactiveModelFittingMinibatchStats, NSDictionary;

@protocol PMLEvaluationTrackerProtocol <PMLPlistAndChunksSerializableProtocol>
- (NSDictionary *)trackEvaluationMetrics:(AWDProactiveModelFittingEvalMetrics *)arg1 minibatchStats:(AWDProactiveModelFittingMinibatchStats *)arg2;
@end
