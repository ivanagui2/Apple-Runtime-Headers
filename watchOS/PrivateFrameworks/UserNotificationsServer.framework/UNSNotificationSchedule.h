//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface UNSNotificationSchedule : NSObject
{
    NSDate *_previousTriggerDate;
}

@property(retain, nonatomic) NSDate *previousTriggerDate; // @synthesize previousTriggerDate=_previousTriggerDate;
- (void).cxx_destruct;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)_dateFormatter;

@end

