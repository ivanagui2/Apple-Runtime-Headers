//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSExpression.h>

@class NSString;

@interface NSVariableExpression : NSExpression
{
    NSString *_variable;
}

+ (_Bool)supportsSecureCoding;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)variable;
- (id)predicateFormat;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;
- (void)dealloc;

@end
