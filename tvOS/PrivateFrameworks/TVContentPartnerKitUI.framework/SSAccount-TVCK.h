//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSAccount.h"

@class NSString;

@interface SSAccount (TVCK)
- (void)tvck_accountFamilyInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic, setter=tvck_setAllowedToPlayPreloadedHLSURLs:) _Bool tvck_allowedToPlayPreloadedHLSURLs;
@property(readonly, nonatomic) NSString *tvck_shortStoreFrontIdentifier;
@property(nonatomic, setter=tvck_setHasOptedInToITunesRadio:) _Bool tvck_hasOptedInToITunesRadio;
@property(nonatomic, getter=tvck_isITunesMatchEnabled, setter=tvck_setITunesMatchEnabled:) _Bool tvck_iTunesMatchEnabled;
@property(nonatomic, getter=tvck_isOneClickEnabled, setter=tvck_setOneClickEnabled:) _Bool tvck_oneClickEnabled;
@end
