//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBAddTasksIntentResponse-Protocol.h>

@class NSArray, NSString, _INPBTaskList;

@interface _INPBAddTasksIntentResponse : PBCodable <_INPBAddTasksIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;
    NSArray *_addedTasks;
    _INPBTaskList *_modifiedTaskList;
}

+ (Class)addedTasksType;
@property(retain, nonatomic) _INPBTaskList *modifiedTaskList; // @synthesize modifiedTaskList=_modifiedTaskList;
@property(copy, nonatomic) NSArray *addedTasks; // @synthesize addedTasks=_addedTasks;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasModifiedTaskList;
- (id)addedTasksAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int addedTasksCount;
- (void)addAddedTasks:(id)arg1;
- (void)clearAddedTasks;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

