//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, PLManagedObjectContext;

@protocol PLManagedObjectContextPTPNotificationDelegate <NSObject>
- (void)managedObjectContext:(PLManagedObjectContext *)arg1 libraryChangedWithInsertedAssetIDs:(NSArray *)arg2 deletedAssetIDs:(NSArray *)arg3 changedAssetIDs:(NSArray *)arg4 adjustedAssetIDs:(NSArray *)arg5;
@end
