//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SFActivityBitmap : NSObject
{
    unsigned long long _startTime;
    unsigned long long _part1;
    unsigned long long _part2;
}

@property unsigned long long part2; // @synthesize part2=_part2;
@property unsigned long long part1; // @synthesize part1=_part1;
@property unsigned long long startTime; // @synthesize startTime=_startTime;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (long long)compareStartTime:(id)arg1;
- (id)initWithStartTime:(unsigned long long)arg1 part1:(unsigned long long)arg2 part2:(unsigned long long)arg3;

@end

