//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SHKRecentServiceManager : NSObject
{
}

+ (id)decoratedTitleForRecentServiceItem:(id)arg1;
+ (id)recentServicesForAllowedServiceIdentifiers:(id)arg1 serviceWithRecipientsOnly:(BOOL)arg2;
+ (void)addRecentServiceToDefaults:(id)arg1;
+ (void)addRecentEmailServiceToDefaultsWithSubject:(id)arg1 recipients:(id)arg2;
+ (id)listItemFromSharingService:(id)arg1;
+ (id)fetchRecentServicesListFromDefaults;
+ (void)saveRecentServicesListToDefaults:(id)arg1;

@end
