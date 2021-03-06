//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SCRCMathExpression : NSObject
{
    SCRCMathExpression *_parent;
    unsigned int _cachedMaximumDepth;
}

+ (Class)_classForExpressionType:(id)arg1;
+ (id)mathExpressionWithDictionary:(id)arg1;
+ (void)setPathToSegmentOrderingPlist:(id)arg1;
@property(nonatomic) __weak SCRCMathExpression *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool canBeWrappedInLatexMathIndicators;
- (id)latexDescriptionForChildrenJoinedByString:(id)arg1;
- (id)latexIdentifierForFenceOperator:(id)arg1 isClosingOperator:(_Bool)arg2;
- (id)latexIdentifierForIdentifier:(id)arg1;
- (id)fenceDelimiters;
- (unsigned int)maximumFractionLevelOfSubExpressions;
- (id)speakableSegments:(id)arg1 withPrefix:(id)arg2 suffix:(id)arg3;
- (id)speakableSegments:(id)arg1 withLocalizablePrefix:(id)arg2 localizableSuffix:(id)arg3;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned int)arg2 treePosition:(id)arg3 prefix:(id)arg4 suffix:(id)arg5;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned int)arg2 treePosition:(id)arg3 localizablePrefix:(id)arg4 localizableSuffix:(id)arg5;
- (void)_applyTreePositionOfOriginalSegment:(id)arg1 toPrefixedOrSuffixedSegment:(id)arg2;
- (id)arrayWithoutNilsFromFirstChild:(id)arg1 secondChild:(id)arg2 thirdChild:(id)arg3;
@property(readonly, nonatomic) NSArray *siblings;
- (id)localizedSegmentOrderingForKey:(id)arg1;
- (id)localizedStringForNumber:(id)arg1;
- (id)localizedAttributedStringForKey:(id)arg1 treePosition:(id)arg2;
- (id)localizedAttributedStringForKey:(id)arg1;
- (id)localizedStringForKey:(id)arg1;
- (id)_scrcBundle;
@property(readonly, nonatomic) NSString *latexFormatStringAsUnder;
@property(readonly, nonatomic) NSString *latexFormatStringAsOver;
- (unsigned int)numberOfTables;
- (_Bool)canFormWordStartingWithExpression:(id)arg1;
@property(readonly, nonatomic) _Bool isUnlinedFraction;
@property(readonly, nonatomic) _Bool isMultiRowTable;
@property(readonly, nonatomic) _Bool endsWithSpace;
@property(readonly, nonatomic) _Bool beginsWithSpace;
@property(readonly, nonatomic) _Bool isSimpleNumericalFraction;
@property(readonly, nonatomic) unsigned int fractionLevel;
@property(readonly, nonatomic) _Bool isWordOrAbbreviation;
@property(readonly, nonatomic) _Bool isFunctionName;
@property(readonly, nonatomic) _Bool isFenceDelimiter;
@property(readonly, nonatomic) _Bool isOperationSymbol;
@property(readonly, nonatomic) _Bool isTermSeparator;
@property(readonly, nonatomic) _Bool isEllipsis;
@property(readonly, nonatomic) _Bool hasSimpleArrayOfChildren;
@property(readonly, nonatomic) _Bool isNaturalSuperscript;
@property(readonly, nonatomic) int integerValue;
@property(readonly, nonatomic) _Bool isInteger;
@property(readonly, nonatomic) _Bool isNumber;
@property(readonly, nonatomic) _Bool canBeUsedWithBase;
@property(readonly, nonatomic) _Bool isBaseSubSuperscript;
@property(readonly, nonatomic) _Bool canBeUsedWithRange;
@property(readonly, nonatomic) _Bool isRangeSubSuperscript;
@property(readonly, nonatomic) NSArray *children;
- (id)latexMathModeDescription;
- (id)latexDescriptionInMathMode:(_Bool)arg1;
- (id)latexDescription;
- (id)speakableSummary;
- (id)mathMLString;
- (id)speakableSegmentsAsBinomialCoefficientWithSpeakingStyle:(int)arg1 upToDepth:(unsigned int)arg2 treePosition:(id)arg3;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned int)arg2 treePosition:(id)arg3;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned int)arg2;
- (id)speakableSegmentsUpToDepth:(unsigned int)arg1;
- (unsigned int)maximumDepth;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned int)arg1 treePosition:(id)arg2 openOperator:(id)arg3 openOperatorTreePosition:(id)arg4 closeOperator:(id)arg5 closeOperatorTreePosition:(id)arg6;
- (id)dollarCodeDescriptionAsBinomialCoefficientWithTreePosition:(id)arg1 numberOfOuterRadicals:(unsigned int)arg2;
- (id)dollarCodeDescriptionAsMixedNumberFractionWithTreePosition:(id)arg1;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned int)arg1 treePosition:(id)arg2;
- (id)dollarCodeDescription;
- (id)speakableDescriptionAsBinomialCoefficientWithSpeakingStyle:(int)arg1;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(_Bool)arg2 isPartOfWord:(_Bool)arg3;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(_Bool)arg2;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1;
- (id)speakableDescription;
@property(readonly, nonatomic) NSArray *subExpressions;
- (id)initWithDictionary:(id)arg1;

@end

