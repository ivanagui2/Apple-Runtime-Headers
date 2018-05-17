//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TVHomeSharingKit/TVHKMediaEntityIdentifier.h>

#import "NSSecureCoding.h"

__attribute__((visibility("hidden")))
@interface TVHKDMAPMediaEntityIdentifier : TVHKMediaEntityIdentifier <NSSecureCoding>
{
    unsigned long long _nonPersistentID;
    unsigned long long _persistentID;
}

+ (_Bool)supportsSecureCoding;
+ (id)identifierFromEntity:(id)arg1;
@property(nonatomic) unsigned long long persistentID; // @synthesize persistentID=_persistentID;
@property(nonatomic) unsigned long long nonPersistentID; // @synthesize nonPersistentID=_nonPersistentID;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProtocol:(unsigned long long)arg1 nonPersistentID:(unsigned long long)arg2 persistentID:(unsigned long long)arg3;
- (id)initWithProtocol:(unsigned long long)arg1;

@end
