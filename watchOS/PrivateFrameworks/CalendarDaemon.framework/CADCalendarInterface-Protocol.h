//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CADObjectID, NSArray;

@protocol CADCalendarInterface
- (void)CADCalendar:(CADObjectID *)arg1 hasReminders:(void (^)(int, _Bool))arg2;
- (void)CADCalendar:(CADObjectID *)arg1 hasEvents:(void (^)(int, _Bool))arg2;
- (void)CADDatabaseGetCalendarsWithFaultedProperties:(NSArray *)arg1 reply:(void (^)(int, NSArray *, NSArray *))arg2;
@end
