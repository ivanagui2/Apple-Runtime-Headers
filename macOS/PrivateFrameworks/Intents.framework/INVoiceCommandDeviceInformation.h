//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSNumber;

@interface INVoiceCommandDeviceInformation : NSObject <NSCopying, NSSecureCoding>
{
    long long _deviceIdiom;
    NSNumber *_isHomePodInUltimateMode;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy) NSNumber *isHomePodInUltimateMode; // @synthesize isHomePodInUltimateMode=_isHomePodInUltimateMode;
@property(readonly) long long deviceIdiom; // @synthesize deviceIdiom=_deviceIdiom;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDeviceIdiom:(long long)arg1 isHomePodInUltimateMode:(id)arg2;

@end
