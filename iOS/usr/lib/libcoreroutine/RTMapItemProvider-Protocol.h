//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, RTLocation;

@protocol RTMapItemProvider <NSObject>
- (NSArray *)mapItemsWithinDistance:(double)arg1 location:(RTLocation *)arg2 startDate:(NSDate *)arg3 endDate:(NSDate *)arg4 error:(id *)arg5;
@end
