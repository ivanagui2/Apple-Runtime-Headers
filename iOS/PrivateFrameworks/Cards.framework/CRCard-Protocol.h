//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "NSSecureCoding.h"

@class NSArray, NSSet, SFCard;

@protocol CRCard <NSObject, NSSecureCoding>
@property(readonly, nonatomic) NSArray *dismissalCommands;
@property(readonly, nonatomic) NSSet *interactions;
@property(readonly, nonatomic) NSArray *cardSections;

@optional
@property(readonly, nonatomic) SFCard *backingCard;
@property(readonly, nonatomic) _Bool flexibleSectionOrder;
@property(readonly, nonatomic) _Bool asynchronous;
- (void)loadCardWithCompletion:(void (^)(id <CRCard>))arg1;
@end
