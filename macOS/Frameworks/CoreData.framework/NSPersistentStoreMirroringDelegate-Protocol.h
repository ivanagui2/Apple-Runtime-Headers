//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectModel, NSPersistentStore, NSPersistentStoreCoordinator, NSPersistentStoreDescription;

@protocol NSPersistentStoreMirroringDelegate <NSObject>
- (void)persistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 didSuccessfullyAddPersistentStore:(NSPersistentStore *)arg2 withDescription:(NSPersistentStoreDescription *)arg3;
- (BOOL)validateManagedObjectModel:(NSManagedObjectModel *)arg1 forUseWithStoreWithDescription:(NSPersistentStoreDescription *)arg2 error:(id *)arg3;
@end
