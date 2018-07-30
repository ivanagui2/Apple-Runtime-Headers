//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/RECondition.h>

@class REFeature;

@interface _REFeatureRuleCondition : RECondition
{
    REFeature *_firstFeature;
    int _relation;
    REFeature *_secondFeature;
}

@property(readonly, nonatomic) REFeature *secondFeature; // @synthesize secondFeature=_secondFeature;
@property(readonly, nonatomic) int relation; // @synthesize relation=_relation;
@property(readonly, nonatomic) REFeature *firstFeature; // @synthesize firstFeature=_firstFeature;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionWithIndent:(unsigned int)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)_inflectionFeatureValuePairs;
- (_Bool)_acceptsFeatureMap:(id)arg1;
- (_Bool)_requiresTwoFeatures;
- (id)_notCondition;
- (id)_dependentFeatures;
- (id)initWithFeature:(id)arg1 relation:(int)arg2 feature:(id)arg3;

@end
