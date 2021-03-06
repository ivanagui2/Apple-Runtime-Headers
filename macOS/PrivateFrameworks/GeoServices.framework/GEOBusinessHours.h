//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOPDBusinessHours, NSArray, NSDate, NSString;

@interface GEOBusinessHours : NSObject
{
    GEOPDBusinessHours *_hours;
    NSArray *_placeDailyHours;
    NSArray *_placeDailyNormalizedHours;
}

+ (id)prioritizeBusinessHours:(id)arg1;
@property(readonly, nonatomic) NSArray *placeDailyNormalizedHours; // @synthesize placeDailyNormalizedHours=_placeDailyNormalizedHours;
@property(readonly, nonatomic) NSArray *placeDailyHours; // @synthesize placeDailyHours=_placeDailyHours;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) NSString *localizedShortMessage;
@property(readonly, nonatomic) NSString *localizedMessage;
@property(readonly, nonatomic) NSArray *pdHours;
@property(readonly, nonatomic) unsigned long long hoursType;
@property(readonly, nonatomic) unsigned int closingSoonThresdholdInSeconds;
@property(readonly, nonatomic) unsigned int openingSoonThresholdInSeconds;
- (id)initWithGEOPDHours:(id)arg1 timeZone:(id)arg2;
- (id)initWithGEOPDBusinessHours:(id)arg1 timeZone:(id)arg2;

@end

