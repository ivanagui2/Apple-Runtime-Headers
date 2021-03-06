//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Navigation/MNCommuteDestinationScore.h>

#import <Navigation/MNCommuteDestinationLocationHistoryScore-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MNCommuteDestinationLocationHistoryScore : MNCommuteDestinationScore <MNCommuteDestinationLocationHistoryScore>
{
    int _score;
    BOOL _destinationInvalid;
    NSArray *_locationHistory;
    double _scoredDistance;
    double _scoredTimeInterval;
}

+ (double)weight;
@property(nonatomic) double scoredTimeInterval; // @synthesize scoredTimeInterval=_scoredTimeInterval;
@property(nonatomic) double scoredDistance; // @synthesize scoredDistance=_scoredDistance;
@property(copy, nonatomic) NSArray *locationHistory; // @synthesize locationHistory=_locationHistory;
- (void).cxx_destruct;
- (void)updateLocationHistory:(id)arg1;
- (int)_scoreForDistance:(double)arg1 timeInterval:(double)arg2;
- (id)descriptionExtras;
- (BOOL)destinationInvalid;
- (int)score;
- (void)updateScoreIfPossible;

@end

