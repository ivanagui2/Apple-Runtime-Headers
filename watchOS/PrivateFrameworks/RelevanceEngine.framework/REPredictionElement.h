//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface REPredictionElement : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    unsigned int _privacyBehavior;
    NSArray *_relevanceProviders;
    NSString *_bundleIdentifier;
    NSString *_interaction;
    NSString *_section;
}

+ (_Bool)supportsSecureCoding;
+ (id)predictionElementFromElement:(id)arg1;
+ (id)predictionElementWithIdentifier:(id)arg1 relevanceProviders:(id)arg2 bundleIdentifier:(id)arg3;
@property(retain, nonatomic) NSString *section; // @synthesize section=_section;
@property(readonly, nonatomic) NSString *interaction; // @synthesize interaction=_interaction;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) NSArray *relevanceProviders; // @synthesize relevanceProviders=_relevanceProviders;
@property(readonly, nonatomic) unsigned int privacyBehavior; // @synthesize privacyBehavior=_privacyBehavior;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
