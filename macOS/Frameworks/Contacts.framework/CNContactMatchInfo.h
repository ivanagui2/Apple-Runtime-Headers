//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSAttributedString, NSDictionary, NSNumber;

@interface CNContactMatchInfo : NSObject <NSSecureCoding>
{
    BOOL _matchedNameProperty;
    NSNumber *_relevanceScore;
    NSDictionary *_matchedProperties;
    NSAttributedString *_excerpt;
}

+ (BOOL)supportsSecureCoding;
@property BOOL matchedNameProperty; // @synthesize matchedNameProperty=_matchedNameProperty;
@property(retain) NSAttributedString *excerpt; // @synthesize excerpt=_excerpt;
@property(copy) NSDictionary *matchedProperties; // @synthesize matchedProperties=_matchedProperties;
@property(copy) NSNumber *relevanceScore; // @synthesize relevanceScore=_relevanceScore;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
