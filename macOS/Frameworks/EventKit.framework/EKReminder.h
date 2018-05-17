//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKCalendarItem.h>

#import "EKProtocolMutableReminderOccurrence.h"

@class NSData, NSDate, NSDateComponents, NSDictionary, NSManagedObjectID, NSNumber, NSString, NSTimeZone, NSURL;

@interface EKReminder : EKCalendarItem <EKProtocolMutableReminderOccurrence>
{
    BOOL cachedHasLocationAlarm;
}

+ (id)sortDescriptorsForSortOrder:(int)arg1;
+ (BOOL)fixBrokenICalReminderOrdersWithReminders:(id)arg1;
+ (void)fixBrokenICalReminderOrdersWithEventStore:(id)arg1;
+ (void)fixBrokenICalReminderOrdersInReminderList:(id)arg1;
+ (id)reorderReminders:(id)arg1 betweenEarlier:(id)arg2 later:(id)arg3 shouldSave:(BOOL)arg4;
+ (void)reorderReminders:(id)arg1 betweenEarlier:(id)arg2 later:(id)arg3;
+ (void)_adjustOrderOnReminders:(id)arg1 boundaryOrder:(unsigned long long)arg2 reverse:(BOOL)arg3 eventStore:(id)arg4 saveBlock:(CDUnknownBlockType)arg5;
+ (id)orderSortDescriptors;
+ (id)dataFromUserActivity:(id)arg1;
+ (id)batchChangeNotificationName;
+ (id)keysToCheckForChangedKeysMethod;
+ (id)singleValueDiffKeys;
+ (id)knownImmutableKeys;
+ (id)knownSingleValueKeys;
+ (Class)frozenClass;
+ (id)itemWithIdentifier:(id)arg1 inStore:(id)arg2;
+ (id)reminderWithEventStore:(id)arg1;
+ (id)actionStringsPluralDisplayName;
+ (id)actionStringsDisplayName;
@property(readonly, nonatomic) BOOL cachedHasLocationAlarm; // @synthesize cachedHasLocationAlarm;
- (BOOL)_validateEntityTypeIsSupported:(id *)arg1;
- (id)humanReadableRecurrenceDescription;
- (BOOL)validate:(id *)arg1;
- (void)reorderBetweenEarlier:(id)arg1 later:(id)arg2;
- (void)_adjustOrderOnReminders:(id)arg1 reverse:(BOOL)arg2 saveBlock:(CDUnknownBlockType)arg3;
- (long long)compareDueDateWithReminder:(id)arg1;
- (void)setDisplayOrder:(unsigned long long)arg1;
- (unsigned long long)displayOrder;
- (BOOL)currentUserMayActAsOrganizer;
- (id)externalURI;
- (void)setAllDay:(BOOL)arg1;
- (void)setTimeZoneObject:(id)arg1;
- (BOOL)hasLocationAlarm;
- (id)bestDisplayAlarm;
@property(readonly, nonatomic) BOOL canEditRecurrence;
- (BOOL)isReminder;
@property(nonatomic) unsigned long long priority;
@property(nonatomic, getter=isCompleted) BOOL completed;
- (void)setStatusCompleteNotByDate:(BOOL)arg1;
@property(readonly, nonatomic) BOOL statusCompleteNotByDate;
- (void)setOrderNumber:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *orderNumber;
- (void)setDueDateUnadjustedFromUTC:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *dueDateUnadjustedFromUTC;
- (void)setDueDate:(id)arg1;
- (id)dueDate;
@property(copy, nonatomic) NSDateComponents *dueDateComponents;
@property(copy, nonatomic) NSDateComponents *startDateComponents;
@property(copy, nonatomic) NSDate *completionDate;
- (void)updateWithAppLink:(id)arg1 usedSelectedText:(char *)arg2;
- (void)setAppLink:(id)arg1;
@property(readonly, copy, nonatomic) NSData *appLink;
- (void)setAction:(id)arg1;
- (unsigned long long)order;
@property(readonly, copy, nonatomic) NSURL *action;
- (void)_applyKnownImmutableValuesFrom:(id)arg1;
- (unsigned long long)entityType;
- (BOOL)canMoveOrCopyFromCalendar:(id)arg1 toCalendar:(id)arg2 error:(id *)arg3;
- (BOOL)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id *)arg3;
- (id)actionStringsDisplayTitle;
- (BOOL)removeWithSpan:(long long)arg1 error:(id *)arg2;
- (BOOL)saveWithSpan:(long long)arg1 error:(id *)arg2;

// Remaining properties
@property(copy, nonatomic) NSURL *URL;
@property(readonly, nonatomic) BOOL cachedHasAlarm; // @dynamic cachedHasAlarm;
@property(readonly, nonatomic) BOOL cachedHasAttachment; // @dynamic cachedHasAttachment;
@property(readonly, nonatomic) BOOL cachedHasAttendee; // @dynamic cachedHasAttendee;
@property(readonly, nonatomic) BOOL cachedIsCalendarOwnerInvitedAttendee; // @dynamic cachedIsCalendarOwnerInvitedAttendee;
@property(readonly, nonatomic) BOOL cachedIsCurrentUserInvitedAttendee; // @dynamic cachedIsCurrentUserInvitedAttendee;
@property(readonly, nonatomic) NSNumber *calendarItemPermissionNumber; // @dynamic calendarItemPermissionNumber;
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(readonly, copy, nonatomic) NSString *contactIdentifiersString;
@property(readonly, retain, nonatomic) id <CalendarModelProtocol> container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) BOOL defaultAlarmWasDeleted; // @dynamic defaultAlarmWasDeleted;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) id <EKProtocolStructuredLocation> ekStructuredLocation;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property(readonly, copy, nonatomic) NSData *localStructuredData;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property(copy, nonatomic) NSString *notes;
@property(readonly, nonatomic) BOOL organizedByMe; // @dynamic organizedByMe;
@property(readonly, retain, nonatomic) id <EKProtocolParticipant> organizer; // @dynamic organizer;
@property(readonly, copy, nonatomic) NSString *organizerEmail; // @dynamic organizerEmail;
@property(readonly, copy, nonatomic) NSString *organizerEncodedLikenessData; // @dynamic organizerEncodedLikenessData;
@property(readonly, copy, nonatomic) NSString *organizerName; // @dynamic organizerName;
@property(readonly, copy, nonatomic) NSString *organizerPhoneNumber; // @dynamic organizerPhoneNumber;
@property(readonly, copy, nonatomic) NSURL *organizerURL; // @dynamic organizerURL;
@property(readonly, copy, nonatomic) id <EKProtocolParticipant> participantForMe; // @dynamic participantForMe;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(copy, nonatomic) NSNumber *priorityNumber; // @dynamic priorityNumber;
@property(readonly, retain, nonatomic) NSDate *recurrenceDateUnadjustedFromUTC;
@property(readonly, copy, nonatomic) NSString *recurrenceRuleString;
@property(readonly, copy, nonatomic) NSString *recurrenceSetID;
@property(readonly, copy, nonatomic) NSString *relatedExternalID;
@property(readonly, copy, nonatomic) NSString *scheduleAgentString;
@property(readonly, copy, nonatomic) NSDate *startDateUnadjustedFromUTC;
@property(readonly, copy, nonatomic) NSData *structuredData;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSTimeZone *timeZoneObject;
@property(copy, nonatomic) NSString *title;

@end
