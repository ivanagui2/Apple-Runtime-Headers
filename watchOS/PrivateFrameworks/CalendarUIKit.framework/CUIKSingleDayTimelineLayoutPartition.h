//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface CUIKSingleDayTimelineLayoutPartition : NSObject
{
    NSMutableArray *_stackOfOccurrences;
    float _initialStartBoundary;
    float _endBoundary;
    double _topBoundaryTime;
}

@property(nonatomic) float endBoundary; // @synthesize endBoundary=_endBoundary;
@property(nonatomic) float initialStartBoundary; // @synthesize initialStartBoundary=_initialStartBoundary;
@property(nonatomic) double topBoundaryTime; // @synthesize topBoundaryTime=_topBoundaryTime;
- (void).cxx_destruct;
@property(readonly, nonatomic) float totalWidth;
@property(readonly, nonatomic) float freeSpaceWidth;
@property(readonly, nonatomic) float freeSpaceStartBoundary;
- (void)popOccurrence;
- (void)pushOccurrence:(id)arg1;
- (id)peekOccurrence;
@property(readonly, nonatomic) NSArray *stackedOccurrences;
- (id)description;
- (id)init;

@end
