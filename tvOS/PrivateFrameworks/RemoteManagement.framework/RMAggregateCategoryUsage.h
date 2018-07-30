//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

#import "RMUsageProtocol.h"

@class NSDate, NSNumber, RMCategory, RMUser;

@interface RMAggregateCategoryUsage : NSManagedObject <RMUsageProtocol>
{
}


// Remaining properties
@property(retain, nonatomic) RMCategory *category; // @dynamic category;
@property(copy, nonatomic) NSDate *usageEndDate; // @dynamic usageEndDate;
@property(copy, nonatomic) NSNumber *usageInSeconds; // @dynamic usageInSeconds;
@property(copy, nonatomic) NSDate *usageStartDate; // @dynamic usageStartDate;
@property(retain, nonatomic) RMUser *user; // @dynamic user;
@end
