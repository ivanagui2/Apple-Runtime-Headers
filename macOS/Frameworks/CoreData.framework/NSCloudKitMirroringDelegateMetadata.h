//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKServerChangeToken, NSPersistentHistoryToken, NSPersistentStore, NSString;

__attribute__((visibility("hidden")))
@interface NSCloudKitMirroringDelegateMetadata : NSObject
{
    NSPersistentStore *_store;
    BOOL _loaded;
    BOOL _hasChanges;
    BOOL _hasInitializedZone;
    BOOL _hasInitializedZoneSubscription;
    NSString *_ckIdentityRecordName;
    BOOL _hasCheckedCKIdentity;
    CKServerChangeToken *_previousServerChangeToken;
    NSPersistentHistoryToken *_lastHistoryToken;
}

+ (id)allDefaultsKeys;
@property(readonly, nonatomic) BOOL hasChanges; // @synthesize hasChanges=_hasChanges;
@property(readonly, nonatomic) BOOL loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic) __weak NSPersistentStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (BOOL)save:(id *)arg1;
- (BOOL)load:(id *)arg1;
@property(retain, nonatomic) NSPersistentHistoryToken *lastHistoryToken;
@property(retain, nonatomic) CKServerChangeToken *previousServerChangeToken;
@property(nonatomic) BOOL hasCheckedCKIdentity;
@property(retain, nonatomic, setter=setCKIdentityRecordName:) NSString *ckIdentityRecordName;
@property(nonatomic) BOOL hasInitializedZoneSubscription;
@property(nonatomic) BOOL hasInitializedZone;
- (BOOL)safeString:(id)arg1 isEqualToString:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithStore:(id)arg1;

@end
