//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestResponse.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray;

@interface ASDPurgeableAppResponse : ASDRequestResponse <NSCopying, NSSecureCoding>
{
    long long _purgeableSize;
    NSArray *_purgeableApps;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *purgeableApps; // @synthesize purgeableApps=_purgeableApps;
@property(readonly, nonatomic) long long purgeableSize; // @synthesize purgeableSize=_purgeableSize;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPurgeableSize:(long long)arg1 purgeableApps:(id)arg2;
- (id)init;

@end
