//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNContactLikenessMutator.h"

@class NSArray, NSString;

@interface CNContactLikenessAgreggateMutator : NSObject <CNContactLikenessMutator>
{
    NSArray *_likenessMutators;
}

@property(retain, nonatomic) NSArray *likenessMutators; // @synthesize likenessMutators=_likenessMutators;
- (void).cxx_destruct;
- (id)setLikenessAsCurrent:(id)arg1;
- (id)deleteLikeness:(id)arg1;
- (id)updateLikeness:(id)arg1;
- (id)addNewLikeness:(id)arg1;
- (id)initWithLikenessMutators:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
