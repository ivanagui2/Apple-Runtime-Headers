//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class MTPBAlarm, MTPBAlarmAction, MTPBAlarmDelete, MTPBAlarmState;

@interface MTPBSyncMessage : PBCodable <NSCopying>
{
    MTPBAlarmAction *_alarmActionObject;
    MTPBAlarmDelete *_alarmDeleteObject;
    MTPBAlarm *_alarmObject;
    MTPBAlarmState *_alarmStateObject;
}

@property(retain, nonatomic) MTPBAlarmAction *alarmActionObject; // @synthesize alarmActionObject=_alarmActionObject;
@property(retain, nonatomic) MTPBAlarmState *alarmStateObject; // @synthesize alarmStateObject=_alarmStateObject;
@property(retain, nonatomic) MTPBAlarmDelete *alarmDeleteObject; // @synthesize alarmDeleteObject=_alarmDeleteObject;
@property(retain, nonatomic) MTPBAlarm *alarmObject; // @synthesize alarmObject=_alarmObject;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasAlarmActionObject;
@property(readonly, nonatomic) _Bool hasAlarmStateObject;
@property(readonly, nonatomic) _Bool hasAlarmDeleteObject;
@property(readonly, nonatomic) _Bool hasAlarmObject;

@end
