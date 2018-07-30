//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSIndexSet, NSString;

@interface PTTestRecipeInfo : NSObject <NSSecureCoding>
{
    NSString *_uniqueIdentifier;
    NSString *_domainIdentifier;
    NSString *_title;
    NSIndexSet *_events;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSIndexSet *events; // @synthesize events=_events;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (id)initWithTestRecipe:(id)arg1 domainIdentifier:(id)arg2;

@end
