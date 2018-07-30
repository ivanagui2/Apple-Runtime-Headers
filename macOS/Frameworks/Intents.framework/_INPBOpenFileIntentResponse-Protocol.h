//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, _INPBInteger, _INPBString;

@protocol _INPBOpenFileIntentResponse <NSObject>
+ (Class)entitiesType;
@property(nonatomic) BOOL hasSuccess;
@property(nonatomic) BOOL success;
@property(readonly, nonatomic) BOOL hasQuery;
@property(retain, nonatomic) _INPBString *query;
@property(readonly, nonatomic) BOOL hasNumResults;
@property(retain, nonatomic) _INPBInteger *numResults;
@property(readonly, nonatomic) unsigned long long entitiesCount;
@property(copy, nonatomic) NSArray *entities;
- (_INPBString *)entitiesAtIndex:(unsigned long long)arg1;
- (void)addEntities:(_INPBString *)arg1;
- (void)clearEntities;
@end
