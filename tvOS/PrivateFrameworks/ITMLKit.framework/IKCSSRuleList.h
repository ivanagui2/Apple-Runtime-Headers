//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface IKCSSRuleList : NSObject
{
    NSMutableArray *rules;
}

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)count;
- (id)ruleAtIndex:(unsigned long long)arg1;
- (id)lastRule;
- (id)firstRule;
- (void)addRule:(id)arg1;
- (id)init;

@end
