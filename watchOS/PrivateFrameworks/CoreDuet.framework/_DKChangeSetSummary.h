//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSSet;

@interface _DKChangeSetSummary : NSObject
{
    NSDate *_startDate;
    NSDate *_endDate;
    unsigned int _sequenceNumber;
    NSSet *_eventUUIDs;
}

@property(retain, nonatomic) NSSet *eventUUIDs; // @synthesize eventUUIDs=_eventUUIDs;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;

@end
