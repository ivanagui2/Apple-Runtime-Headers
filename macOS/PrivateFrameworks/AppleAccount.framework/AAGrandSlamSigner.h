//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccount, ACAccountStore, NSString;

@interface AAGrandSlamSigner : NSObject
{
    ACAccountStore *_accountStore;
    ACAccount *_grandSlamAccount;
    NSString *_appTokenID;
    BOOL _useAltDSID;
    NSString *_headerFieldKey;
}

@property(retain, nonatomic) NSString *headerFieldKey; // @synthesize headerFieldKey=_headerFieldKey;
@property(nonatomic) BOOL useAltDSID; // @synthesize useAltDSID=_useAltDSID;
@property(readonly, nonatomic) ACAccount *grandSlamAccount; // @synthesize grandSlamAccount=_grandSlamAccount;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;
- (BOOL)signURLRequest:(id)arg1 isUserInitiated:(BOOL)arg2;
- (BOOL)signURLRequest:(id)arg1;
- (id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3 appTokenID:(id)arg4;
- (id)initWithAccountStore:(id)arg1 grandSlamAccount:(id)arg2 appTokenID:(id)arg3;

@end
