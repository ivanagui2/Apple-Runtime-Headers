//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicLibrary/ML3PropertyPredicate.h>

@class NSString;

@interface ML3ComparisonPredicate : ML3PropertyPredicate
{
    id _value;
    NSString *_transformFunction;
    int _comparison;
    _Bool _caseInsensitive;
    NSString *_treatNullAsString;
}

+ (id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 equalToInteger:(int)arg2;
+ (id)predicateWithProperty:(id)arg1 equalToInt64:(long long)arg2;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 transformFunction:(id)arg4;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(_Bool)arg4 treatNullAsString:(id)arg5;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(_Bool)arg4;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *transformFunction; // @synthesize transformFunction=_transformFunction;
@property(copy, nonatomic) NSString *treatNullAsString; // @synthesize treatNullAsString=_treatNullAsString;
@property(nonatomic) _Bool caseInsensitive; // @synthesize caseInsensitive=_caseInsensitive;
@property(nonatomic) int comparison; // @synthesize comparison=_comparison;
@property(retain, nonatomic) id value; // @synthesize value=_value;
- (void).cxx_destruct;
- (_Bool)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3;
- (id)databaseStatementParameters;
- (id)valueToBindForOperation:(int)arg1;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
@property(readonly, copy, nonatomic) NSString *operator;
- (id)description;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(_Bool)arg4 transformFunction:(id)arg5 treatNullAsString:(id)arg6;

@end
