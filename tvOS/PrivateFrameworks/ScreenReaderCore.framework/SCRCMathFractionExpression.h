//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReaderCore/SCRCMathExpression.h>

__attribute__((visibility("hidden")))
@interface SCRCMathFractionExpression : SCRCMathExpression
{
    SCRCMathExpression *_numerator;
    SCRCMathExpression *_denominator;
    SCRCMathExpression *_operator;
    double _lineThickness;
}

@property(nonatomic) double lineThickness; // @synthesize lineThickness=_lineThickness;
@property(retain, nonatomic) SCRCMathExpression *operator; // @synthesize operator=_operator;
@property(retain, nonatomic) SCRCMathExpression *denominator; // @synthesize denominator=_denominator;
@property(retain, nonatomic) SCRCMathExpression *numerator; // @synthesize numerator=_numerator;
- (void).cxx_destruct;
- (id)latexMathModeDescription;
- (id)mathMLString;
- (id)_dollarCodeDescriptionAsBinomialCoefficient:(_Bool)arg1 orMixedNumberFraction:(_Bool)arg2 withNumberOfOuterRadicals:(unsigned long long)arg3 treePosition:(id)arg4;
- (id)dollarCodeDescriptionAsBinomialCoefficientWithTreePosition:(id)arg1 numberOfOuterRadicals:(unsigned long long)arg2;
- (id)dollarCodeDescriptionAsMixedNumberFractionWithTreePosition:(id)arg1;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (id)speakableSegmentsAsBinomialCoefficientWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)_speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 asBinomialCoefficient:(_Bool)arg4;
- (id)speakableDescriptionAsBinomialCoefficientWithSpeakingStyle:(int)arg1;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(_Bool)arg2;
- (id)_speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(_Bool)arg2 asBinomialCoefficient:(_Bool)arg3;
- (_Bool)isSimpleNumericalFraction;
- (unsigned long long)fractionLevel;
- (_Bool)isUnlinedFraction;
- (id)subExpressions;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end

