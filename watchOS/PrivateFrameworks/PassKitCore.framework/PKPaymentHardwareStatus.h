//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface PKPaymentHardwareStatus : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _hasSecureElement;
    _Bool _hasRemoteDevices;
    _Bool _inFailForward;
    _Bool _canMakeRemotePayments;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool canMakeRemotePayments; // @synthesize canMakeRemotePayments=_canMakeRemotePayments;
@property(nonatomic, getter=isInFailForward) _Bool inFailForward; // @synthesize inFailForward=_inFailForward;
@property(nonatomic) _Bool hasRemoteDevices; // @synthesize hasRemoteDevices=_hasRemoteDevices;
@property(nonatomic) _Bool hasSecureElement; // @synthesize hasSecureElement=_hasSecureElement;
@property(readonly, nonatomic) _Bool canMakeLocalPayments;
@property(readonly, nonatomic) _Bool canMakePayments;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;

@end
