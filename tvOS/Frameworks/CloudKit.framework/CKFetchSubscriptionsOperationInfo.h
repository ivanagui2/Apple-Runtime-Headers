//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CKFetchSubscriptionsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    _Bool _isFetchAllSubscriptionsOperation;
    NSArray *_subscriptionIDs;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool isFetchAllSubscriptionsOperation; // @synthesize isFetchAllSubscriptionsOperation=_isFetchAllSubscriptionsOperation;
@property(retain, nonatomic) NSArray *subscriptionIDs; // @synthesize subscriptionIDs=_subscriptionIDs;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

