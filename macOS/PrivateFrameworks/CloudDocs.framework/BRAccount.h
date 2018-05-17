//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface BRAccount : NSObject
{
    NSString *_accountID;
    NSData *_perAppAccountIdentifier;
}

+ (BOOL)refreshCurrentLoggedInAccount;
+ (id)currentLoggedInAccountWithError:(id *)arg1;
+ (id)currentCachedLoggedInAccountWithError:(id *)arg1;
+ (BOOL)_refreshCurrentLoggedInAccountForcingRefresh:(BOOL)arg1 error:(id *)arg2;
+ (void)startAccountTokenChangeObserverIfNeeded;
@property(copy, nonatomic) NSData *perAppAccountIdentifier; // @synthesize perAppAccountIdentifier=_perAppAccountIdentifier;
- (void).cxx_destruct;
- (BOOL)iCloudDesktopSettingsChangedWithAttributes:(id)arg1 error:(id *)arg2;
- (id)containerWithPendingChanges;
- (BOOL)logoutWithError:(id *)arg1;
- (BOOL)loginWithError:(id *)arg1;
- (id)initWithAccountID:(id)arg1;
- (void)evictOldDocumentsWithHandler:(CDUnknownBlockType)arg1;
- (BOOL)getEvictableSpace:(id *)arg1 error:(id *)arg2;
- (BOOL)setOptimizeStorageEnabled:(BOOL)arg1 error:(id *)arg2;
- (BOOL)hasOptimizeStorageWithError:(id *)arg1;

@end
