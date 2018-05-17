//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProactiveExperts/PEXItem.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSString;

@interface PEXNamedEntityItem : PEXItem <NSSecureCoding, NSCopying>
{
    unsigned char _type;
    NSString *_name;
    NSString *_phoneticName;
    NSString *_languageIdentifier;
    NSDate *_contentCreationDate;
    NSDate *_detectionDate;
    NSString *_donorBundleIdentifier;
    unsigned int _detectionAlgorithm;
}

+ (_Bool)supportsSecureCoding;
+ (id)namedEntityItemsFromContactNameItem:(id)arg1;
+ (id)namedEntityItemWithName:(id)arg1 phoneticName:(id)arg2 type:(unsigned char)arg3 languageIdentifier:(id)arg4 contentCreationDate:(id)arg5 detectionDate:(id)arg6 score:(double)arg7 source:(unsigned char)arg8 sourceIdentifier:(id)arg9 changeType:(unsigned char)arg10 donorBundleIdentifier:(id)arg11 detectionAlgorithm:(unsigned int)arg12;
+ (id)namedEntityItemWithName:(id)arg1 phoneticName:(id)arg2 type:(unsigned char)arg3 languageIdentifier:(id)arg4 contentCreationDate:(id)arg5 detectionDate:(id)arg6 score:(double)arg7 source:(unsigned char)arg8 sourceIdentifier:(id)arg9 changeType:(unsigned char)arg10;
@property(readonly, nonatomic) unsigned int detectionAlgorithm; // @synthesize detectionAlgorithm=_detectionAlgorithm;
@property(readonly, nonatomic) NSString *donorBundleIdentifier; // @synthesize donorBundleIdentifier=_donorBundleIdentifier;
@property(readonly, nonatomic) NSDate *detectionDate; // @synthesize detectionDate=_detectionDate;
@property(readonly, nonatomic) NSDate *contentCreationDate; // @synthesize contentCreationDate=_contentCreationDate;
@property(readonly, nonatomic) NSString *languageIdentifier; // @synthesize languageIdentifier=_languageIdentifier;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *phoneticName; // @synthesize phoneticName=_phoneticName;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isEqualToNamedEntityItem:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)typeString;
- (id)initWithName:(id)arg1 phoneticName:(id)arg2 type:(unsigned char)arg3 languageIdentifier:(id)arg4 contentCreationDate:(id)arg5 detectionDate:(id)arg6 score:(double)arg7 source:(unsigned char)arg8 sourceIdentifier:(id)arg9 changeType:(unsigned char)arg10 donorBundleIdentifier:(id)arg11 detectionAlgorithm:(unsigned int)arg12;
- (id)initWithName:(id)arg1 phoneticName:(id)arg2 type:(unsigned char)arg3 languageIdentifier:(id)arg4 contentCreationDate:(id)arg5 detectionDate:(id)arg6 score:(double)arg7 source:(unsigned char)arg8 sourceIdentifier:(id)arg9 changeType:(unsigned char)arg10;

@end
