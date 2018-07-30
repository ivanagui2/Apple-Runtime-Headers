//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TCSBehavior : NSObject
{
    _Bool _isAppleInternalInstall;
    _Bool _hasTelephonyCapability;
    _Bool _isM7Device;
    _Bool _isM8Device;
}

+ (_Bool)_isM8Device;
+ (_Bool)_isM7Device;
+ (_Bool)_hasTelephonyCapability;
+ (_Bool)_isAppleInternalInstall;
+ (_Bool)isM8Device;
+ (_Bool)isM7Device;
+ (_Bool)hasTelephonyCapability;
+ (_Bool)isAppleInternalInstall;
+ (id)sharedBehavior;
@property(readonly, nonatomic) _Bool isM8Device; // @synthesize isM8Device=_isM8Device;
@property(readonly, nonatomic) _Bool isM7Device; // @synthesize isM7Device=_isM7Device;
@property(readonly, nonatomic) _Bool hasTelephonyCapability; // @synthesize hasTelephonyCapability=_hasTelephonyCapability;
@property(readonly, nonatomic) _Bool isAppleInternalInstall; // @synthesize isAppleInternalInstall=_isAppleInternalInstall;
- (id)init;

@end
