//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MobileCalDAVAccount, NSURL;

@interface MobileCalUserAddress : NSObject
{
    MobileCalDAVAccount *_account;
    NSURL *_address;
}

+ (id)userAddressFromDictionaryRepresentation:(id)arg1 forAccount:(id)arg2;
+ (id)userAddress:(id)arg1 forAccount:(id)arg2;
@property(copy, nonatomic) NSURL *address; // @synthesize address=_address;
@property(nonatomic) __weak MobileCalDAVAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithAddress:(id)arg1 account:(id)arg2;

@end

