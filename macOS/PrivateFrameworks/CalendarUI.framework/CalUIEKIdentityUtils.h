//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CalUIEKIdentityUtils : NSObject
{
}

+ (id)tokenFieldFormattedAddressForIdentity:(id)arg1;
+ (id)identityFromABString:(id)arg1 isAttendee:(BOOL)arg2;
+ (BOOL)canAddIdentity:(id)arg1 toEvent:(id)arg2;
+ (BOOL)canAddIdentityFromABPerson:(id)arg1 toEvent:(id)arg2;
+ (id)identityNameFromString:(id)arg1;
+ (id)displayNameUsingAddressAsBackupForIdentity:(id)arg1;
+ (id)displayAddressUsingNameAsBackupForIdentity:(id)arg1;
+ (id)displayNameForIdentity:(id)arg1;
+ (id)displayAddressForIdentity:(id)arg1;
+ (id)addressForIdentity:(id)arg1;

@end
