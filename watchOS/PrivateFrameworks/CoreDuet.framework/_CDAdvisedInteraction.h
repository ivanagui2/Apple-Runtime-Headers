//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSMutableSet, NSSet, NSString, _CDContact;

@interface _CDAdvisedInteraction : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableSet *_reasons;
    _CDContact *_contact;
    NSString *_account;
    NSString *_bundleId;
    int _mechanism;
    int _similarOutgoingInteractionsCount;
    int _similarIncomingInteractionsCount;
    int _similarBidirectionalInteractionsCount;
    double _score;
}

+ (_Bool)supportsSecureCoding;
@property int similarBidirectionalInteractionsCount; // @synthesize similarBidirectionalInteractionsCount=_similarBidirectionalInteractionsCount;
@property int similarIncomingInteractionsCount; // @synthesize similarIncomingInteractionsCount=_similarIncomingInteractionsCount;
@property int similarOutgoingInteractionsCount; // @synthesize similarOutgoingInteractionsCount=_similarOutgoingInteractionsCount;
@property double score; // @synthesize score=_score;
@property int mechanism; // @synthesize mechanism=_mechanism;
@property(retain) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(retain) NSString *account; // @synthesize account=_account;
@property(retain) _CDContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)addReasons:(id)arg1;
- (void)addReason:(int)arg1;
@property(retain) NSSet *reasons;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionOfReasons:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
