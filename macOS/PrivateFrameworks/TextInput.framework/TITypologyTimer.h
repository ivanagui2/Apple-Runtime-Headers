//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TITypologyTimer : NSObject
{
    BOOL _foundFirstInput;
    double _elapsedTime;
    double _mostRecentTimestamp;
    double _maxTimeIntervalBetweenInputs;
}

@property(nonatomic) BOOL foundFirstInput; // @synthesize foundFirstInput=_foundFirstInput;
@property(nonatomic) double maxTimeIntervalBetweenInputs; // @synthesize maxTimeIntervalBetweenInputs=_maxTimeIntervalBetweenInputs;
@property(nonatomic) double mostRecentTimestamp; // @synthesize mostRecentTimestamp=_mostRecentTimestamp;
@property(nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
- (void)addInputEventWithTimestamp:(double)arg1;

@end
