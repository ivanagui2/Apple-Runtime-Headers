//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentRequest.h>

@class PKDisbursementApplicationInformation, PKDisbursementRequest;

@interface PKDisbursementPaymentRequest : PKPaymentRequest
{
    PKDisbursementRequest *_disbursementRequest;
    PKDisbursementApplicationInformation *_applicationInformation;
    unsigned long long _disbursementSource;
    unsigned long long _disbursementTarget;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long disbursementTarget; // @synthesize disbursementTarget=_disbursementTarget;
@property(readonly, nonatomic) unsigned long long disbursementSource; // @synthesize disbursementSource=_disbursementSource;
@property(retain, nonatomic) PKDisbursementApplicationInformation *applicationInformation; // @synthesize applicationInformation=_applicationInformation;
@property(readonly, nonatomic) PKDisbursementRequest *disbursementRequest; // @synthesize disbursementRequest=_disbursementRequest;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDisbursementPaymentRequest:(id)arg1;

@end

