//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MFMessageCriterionConverter : NSObject
{
    id <MFMessageCriterionConverterDelegate> _delegate;
}

@property(nonatomic) __weak id <MFMessageCriterionConverterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)messageCriterionFromPredicateFormatString:(id)arg1;
- (id)messageCriterionFromPredicate:(id)arg1;
- (id)_messageCriterionForCompoundPredicate:(id)arg1;
- (id)_messageCriterionForComparisonPredicate:(id)arg1;
- (int)_criterionTypeFromExpression:(id)arg1;
- (int)_criterionTypeForKey:(id)arg1;
- (int)_defaultCriterionTypeForKey:(id)arg1;
- (id)predicateFromMessageCriterion:(id)arg1;
- (id)_searchPredicateForCriterion:(id)arg1;
- (id)_predicateKeysForCriterion:(int)arg1;
- (id)_defaultKeysForCriterionType:(int)arg1;
- (id)_orPredicateForAttributes:(id)arg1 matchingValue:(id)arg2 qualifier:(int)arg3;
- (id)_predicateForKey:(id)arg1 value:(id)arg2 qualifier:(int)arg3;
- (unsigned int)_proposedPredicateOperatorType:(unsigned int)arg1 forKey:(id)arg2;
- (id)_simplifiedCompoundPredicateOfType:(unsigned int)arg1 forSubqueries:(id)arg2;

@end
