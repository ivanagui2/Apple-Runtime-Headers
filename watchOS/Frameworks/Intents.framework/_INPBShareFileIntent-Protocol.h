//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, _INPBIntentMetadata, _INPBShareDestination, _INPBString;

@protocol _INPBShareFileIntent <NSObject>
+ (Class)recipientsType;
+ (Class)entityNameType;
@property(nonatomic) _Bool hasShareMode;
@property(nonatomic) int shareMode;
@property(readonly, nonatomic) unsigned int recipientsCount;
@property(copy, nonatomic) NSArray *recipients;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) unsigned int entityNamesCount;
@property(copy, nonatomic) NSArray *entityNames;
- (int)StringAsShareMode:(NSString *)arg1;
- (NSString *)shareModeAsString:(int)arg1;
- (_INPBShareDestination *)recipientsAtIndex:(unsigned int)arg1;
- (void)addRecipients:(_INPBShareDestination *)arg1;
- (void)clearRecipients;
- (_INPBString *)entityNameAtIndex:(unsigned int)arg1;
- (void)addEntityName:(_INPBString *)arg1;
- (void)clearEntityNames;
@end
