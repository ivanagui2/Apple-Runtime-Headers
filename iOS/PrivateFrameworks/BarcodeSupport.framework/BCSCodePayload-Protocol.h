//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "NSSecureCoding.h"

@class NSUserActivity;

@protocol BCSCodePayload <NSObject, NSSecureCoding>
@property(readonly, nonatomic) long long codeType;
- (void)savePayloadInUserActivity:(NSUserActivity *)arg1;
@end
