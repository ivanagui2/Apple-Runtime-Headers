//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EKRecurrenceIdentifierProtocol.h"

@class EKRecurrenceIdentifier, NSDate, NSManagedObjectID, NSString;

@interface EKRecurrenceException : NSObject <EKRecurrenceIdentifierProtocol>
{
    EKRecurrenceIdentifier *_recurrenceIdentifier;
    NSManagedObjectID *_masterManagedObjectID;
}

+ (id)_exceptionForEventOccurrence:(id)arg1 date:(id)arg2;
+ (id)exceptionForEvent:(id)arg1 date:(id)arg2;
+ (id)_exceptionForEventOccurrence:(id)arg1;
+ (id)exceptionForEvent:(id)arg1;
@property(retain) NSManagedObjectID *masterManagedObjectID; // @synthesize masterManagedObjectID=_masterManagedObjectID;
@property(retain) EKRecurrenceIdentifier *recurrenceIdentifier; // @synthesize recurrenceIdentifier=_recurrenceIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *identifierString;
@property(readonly) NSDate *recurrenceDateUnadjustedFromUTC;
@property(readonly) NSDate *exceptionDateUnadjustedFromUTC;
@property(readonly) NSString *localUID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
