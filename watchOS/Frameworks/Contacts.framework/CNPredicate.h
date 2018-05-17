//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPredicate.h"

#import "NSCopying.h"

@class NSArray;

@interface CNPredicate : NSPredicate <NSCopying>
{
    NSPredicate *_cn_predicate;
    _Bool _augmentMainStoreResults;
    NSArray *_mainStoreContactIdentifiers;
}

@property(nonatomic) _Bool augmentMainStoreResults; // @synthesize augmentMainStoreResults=_augmentMainStoreResults;
@property(retain, nonatomic) NSArray *mainStoreContactIdentifiers; // @synthesize mainStoreContactIdentifiers=_mainStoreContactIdentifiers;
- (void).cxx_destruct;
- (id)shortDebugDescription;
- (void)mainStoreDidFetchContacts:(id)arg1 unifiedFetch:(_Bool)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)cn_predicate;
- (id)predicateFormat;
- (_Bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (_Bool)evaluateWithObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;
- (id)init;

@end
