//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBIntentMetadata, _INPBSpatialEventTrigger, _INPBTask, _INPBTemporalEventTrigger;

@protocol _INPBSetTaskAttributeIntent <NSObject>
@property(readonly, nonatomic) BOOL hasTemporalEventTrigger;
@property(retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger;
@property(readonly, nonatomic) BOOL hasTargetTask;
@property(retain, nonatomic) _INPBTask *targetTask;
@property(nonatomic) BOOL hasStatus;
@property(nonatomic) int status;
@property(readonly, nonatomic) BOOL hasSpatialEventTrigger;
@property(retain, nonatomic) _INPBSpatialEventTrigger *spatialEventTrigger;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
- (int)StringAsStatus:(NSString *)arg1;
- (NSString *)statusAsString:(int)arg1;
@end

