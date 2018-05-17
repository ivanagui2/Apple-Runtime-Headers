//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSLocale, NSString, NSTimeZone;

@interface NSCalendar : NSObject <NSCopying, NSSecureCoding>
{
}

+ (id)calendarWithIdentifier:(id)arg1;
+ (id)currentCalendar;
+ (_Bool)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (id)autoupdatingCurrentCalendar;
- (unsigned char)_diffComponents:(double)arg1:(double)arg2:(unsigned long)arg3:(const char *)arg4:(char *)arg5;
- (unsigned char)_addComponents:(double *)arg1:(unsigned long)arg2:(const char *)arg3:(char *)arg4;
- (unsigned char)_decomposeAbsoluteTime:(double)arg1:(const char *)arg2:(char *)arg3;
- (unsigned char)_composeAbsoluteTime:(double *)arg1:(const char *)arg2:(char *)arg3;
- (unsigned char)_rangeOfUnit:(unsigned int)arg1 startTime:(double *)arg2 interval:(double *)arg3 forAT:(double)arg4;
- (long)_ordinalityOfUnit:(unsigned int)arg1 inUnit:(unsigned int)arg2 forAT:(double)arg3;
- (CDStruct_1ef3fb1f)_rangeOfUnit:(unsigned int)arg1 inUnit:(unsigned int)arg2 forAT:(double)arg3;
- (CDStruct_1ef3fb1f)_maximumRangeOfUnit:(unsigned int)arg1;
- (CDStruct_1ef3fb1f)_minimumRangeOfUnit:(unsigned int)arg1;
@property(readonly, copy) NSArray *shortStandaloneQuarterSymbols;
@property(readonly, copy) NSArray *standaloneQuarterSymbols;
@property(readonly, copy) NSArray *shortQuarterSymbols;
@property(readonly, copy) NSArray *quarterSymbols;
@property(readonly, copy) NSArray *veryShortStandaloneWeekdaySymbols;
@property(readonly, copy) NSArray *shortStandaloneWeekdaySymbols;
@property(readonly, copy) NSArray *standaloneWeekdaySymbols;
@property(readonly, copy) NSArray *veryShortWeekdaySymbols;
@property(readonly, copy) NSArray *veryShortStandaloneMonthSymbols;
@property(readonly, copy) NSArray *shortStandaloneMonthSymbols;
@property(readonly, copy) NSArray *standaloneMonthSymbols;
@property(readonly, copy) NSArray *veryShortMonthSymbols;
@property(readonly, copy) NSArray *longEraSymbols;
@property(readonly, copy) NSString *PMSymbol;
@property(readonly, copy) NSString *AMSymbol;
@property(readonly, copy) NSArray *shortWeekdaySymbols;
@property(readonly, copy) NSArray *weekdaySymbols;
@property(readonly, copy) NSArray *shortMonthSymbols;
@property(readonly, copy) NSArray *monthSymbols;
@property(readonly, copy) NSArray *eraSymbols;
- (id)_gregorianStartDate;
- (void)_setGregorianStartDate:(id)arg1;
- (id)_copyTimeZone;
- (id)_copyLocale;
- (id)components:(unsigned int)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned int)arg4;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned int)arg3;
- (id)components:(unsigned int)arg1 fromDate:(id)arg2;
- (id)dateFromComponents:(id)arg1;
- (_Bool)rangeOfUnit:(unsigned int)arg1 startDate:(id *)arg2 interval:(double *)arg3 forDate:(id)arg4;
- (unsigned int)ordinalityOfUnit:(unsigned int)arg1 inUnit:(unsigned int)arg2 forDate:(id)arg3;
- (struct _NSRange)rangeOfUnit:(unsigned int)arg1 inUnit:(unsigned int)arg2 forDate:(id)arg3;
- (struct _NSRange)maximumRangeOfUnit:(unsigned int)arg1;
- (struct _NSRange)minimumRangeOfUnit:(unsigned int)arg1;
- (id)gregorianStartDate;
- (void)setGregorianStartDate:(id)arg1;
@property unsigned int minimumDaysInFirstWeek;
@property unsigned int firstWeekday;
@property(copy) NSTimeZone *timeZone;
@property(copy) NSLocale *locale;
@property(readonly, copy) NSString *calendarIdentifier;
- (id)initWithCalendarIdentifier:(id)arg1;
- (void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned int)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (_Bool)nextWeekendStartDate:(out id *)arg1 interval:(out double *)arg2 options:(unsigned int)arg3 afterDate:(id)arg4;
- (_Bool)isDateInWeekend:(id)arg1;
- (_Bool)date:(id)arg1 matchesComponents:(id)arg2;
- (id)dateBySettingHour:(int)arg1 minute:(int)arg2 second:(int)arg3 ofDate:(id)arg4 options:(unsigned int)arg5;
- (id)dateBySettingUnit:(unsigned int)arg1 value:(int)arg2 ofDate:(id)arg3 options:(unsigned int)arg4;
- (id)nextDateAfterDate:(id)arg1 matchingHour:(int)arg2 minute:(int)arg3 second:(int)arg4 options:(unsigned int)arg5;
- (id)nextDateAfterDate:(id)arg1 matchingUnit:(unsigned int)arg2 value:(int)arg3 options:(unsigned int)arg4;
- (id)nextDateAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned int)arg3;
- (id)dateByAddingUnit:(unsigned int)arg1 value:(int)arg2 toDate:(id)arg3 options:(unsigned int)arg4;
- (id)components:(unsigned int)arg1 fromDateComponents:(id)arg2 toDateComponents:(id)arg3 options:(unsigned int)arg4;
- (_Bool)rangeOfWeekendStartDate:(out id *)arg1 interval:(out double *)arg2 containingDate:(id)arg3;
- (_Bool)isDateInTomorrow:(id)arg1;
- (_Bool)isDateInYesterday:(id)arg1;
- (_Bool)isDateInToday:(id)arg1;
- (_Bool)isDate:(id)arg1 inSameDayAsDate:(id)arg2;
- (_Bool)isDate:(id)arg1 equalToDate:(id)arg2 toUnitGranularity:(unsigned int)arg3;
- (int)compareDate:(id)arg1 toDate:(id)arg2 toUnitGranularity:(unsigned int)arg3;
- (id)componentsInTimeZone:(id)arg1 fromDate:(id)arg2;
- (id)startOfDayForDate:(id)arg1;
- (id)dateWithEra:(int)arg1 yearForWeekOfYear:(int)arg2 weekOfYear:(int)arg3 weekday:(int)arg4 hour:(int)arg5 minute:(int)arg6 second:(int)arg7 nanosecond:(int)arg8;
- (id)dateWithEra:(int)arg1 year:(int)arg2 month:(int)arg3 day:(int)arg4 hour:(int)arg5 minute:(int)arg6 second:(int)arg7 nanosecond:(int)arg8;
- (int)component:(unsigned int)arg1 fromDate:(id)arg2;
- (void)getHour:(out int *)arg1 minute:(out int *)arg2 second:(out int *)arg3 nanosecond:(out int *)arg4 fromDate:(id)arg5;
- (void)getEra:(out int *)arg1 yearForWeekOfYear:(out int *)arg2 weekOfYear:(out int *)arg3 weekday:(out int *)arg4 fromDate:(id)arg5;
- (void)getEra:(out int *)arg1 year:(out int *)arg2 month:(out int *)arg3 day:(out int *)arg4 fromDate:(id)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (unsigned long)_cfTypeID;
- (id)init;

@end
