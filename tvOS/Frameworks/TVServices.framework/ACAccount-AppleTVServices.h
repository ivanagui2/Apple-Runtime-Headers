//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ACAccount.h"

@class NSDate, NSString;

@interface ACAccount (AppleTVServices)
- (_Bool)_tvs_performBlock:(CDUnknownBlockType)arg1 authenticationExpiration:(double)arg2 error:(id *)arg3;
- (_Bool)tvs_setiCloudPhotoLibraryEnabled:(_Bool)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool tvs_iCloudPhotoLibraryEnabled;
- (_Bool)tvs_setMyPhotoStreamEnabled:(_Bool)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool tvs_myPhotoStreamEnabled;
- (_Bool)tvs_setSharedPhotoStreamEnabled:(_Bool)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool tvs_sharedPhotoStreamEnabled;
- (void)tvs_setLinkediTunesAppleIDFromFamilyDetailsResponse:(id)arg1;
@property(copy, nonatomic, setter=tvs_setLinkediTunesAppleID:) NSString *tvs_linkediTunesAppleID;
- (void)tvs_setIsFamilyMemberFromFamilyDetailsResponse:(id)arg1;
@property(nonatomic, setter=tvs_setIsFamilyMember:) _Bool tvs_isFamilyMember;
@property(retain, nonatomic, setter=tvs_setLastAuthenticationDate:) NSDate *tvs_lastAuthenticationDate;
@end
