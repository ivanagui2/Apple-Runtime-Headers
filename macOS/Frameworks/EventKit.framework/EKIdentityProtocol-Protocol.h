//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPredicate, NSString, NSURL;

@protocol EKIdentityProtocol <NSObject>
- (NSString *)phoneNumber;
- (NSString *)emailAddress;
- (NSString *)name;

@optional
@property(readonly, nonatomic) BOOL isCurrentUserForSharing;
@property(readonly, nonatomic) BOOL isCurrentUserForScheduling;
- (NSURL *)URL;
- (NSString *)lastName;
- (NSString *)firstName;
- (NSPredicate *)contactPredicate;
@end
